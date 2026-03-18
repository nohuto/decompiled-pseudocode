/*
 * XREFs of MiMakePteClean @ 0x1402BBED4
 * Callers:
 *     NtGetWriteWatch @ 0x14028FD10 (NtGetWriteWatch.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiLockPageAndSetDirty @ 0x140224410 (MiLockPageAndSetDirty.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWriteValidPteNewProtection @ 0x1402BC370 (MiWriteValidPteNewProtection.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402FB584 (MiInsertLargeTbFlushEntry.c)
 *     MiRewritePteWithLockBit @ 0x1403ACEB8 (MiRewritePteWithLockBit.c)
 */

__int64 __fastcall MiMakePteClean(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r9
  unsigned int v6; // esi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v11; // r9
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = MI_READ_PTE_LOCK_FREE(a1) & 0xFFFFFFFFFFFFFFBDuLL;
  v6 = 0;
  v14 = v4;
  v7 = (__int64)(a1 << 25) >> 16;
  if ( v7 < 0xFFFFF68000000000uLL )
    goto LABEL_2;
  do
  {
    if ( v7 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
    ++v6;
    v7 = (__int64)(v7 << 25) >> 16;
  }
  while ( v7 >= 0xFFFFF68000000000uLL );
  if ( v6 )
  {
    v4 = v14;
    MiRewritePteWithLockBit(&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6], a1, v14, v5);
    MiInsertLargeTbFlushEntry(a2, v6, a1, v11);
  }
  else
  {
LABEL_2:
    MiWriteValidPteNewProtection(a1, v4);
    MiInsertTbFlushEntry(a2, v7, 1LL, 0);
  }
  v8 = v4;
  if ( MiPteInShadowRange((unsigned __int64)&v14)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v4 |= 0x20uLL;
      v13 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v14 >> 3) & 0x1FF));
      if ( (v13 & 0x20) == 0 )
        v4 = v8;
      if ( (v13 & 0x42) != 0 )
        v4 |= 0x42uLL;
    }
    else
    {
      v4 = v14;
    }
  }
  return MiLockPageAndSetDirty(48 * ((v4 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1LL, v9);
}
