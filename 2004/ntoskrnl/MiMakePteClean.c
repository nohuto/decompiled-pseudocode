/*
 * XREFs of MiMakePteClean @ 0x140262EA4
 * Callers:
 *     NtGetWriteWatch @ 0x140236CC0 (NtGetWriteWatch.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiWriteValidPteNewProtection @ 0x140263340 (MiWriteValidPteNewProtection.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiLockPageAndSetDirty @ 0x1402B7090 (MiLockPageAndSetDirty.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403385B4 (MiInsertLargeTbFlushEntry.c)
 *     MiRewritePteWithLockBit @ 0x1403B2B38 (MiRewritePteWithLockBit.c)
 */

__int64 __fastcall MiMakePteClean(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r9
  unsigned int v6; // esi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = MI_READ_PTE_LOCK_FREE(a1) & 0xFFFFFFFFFFFFFFBDuLL;
  v6 = 0;
  v12 = v4;
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
    v4 = v12;
    MiRewritePteWithLockBit(&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6], a1, v12, v5);
    MiInsertLargeTbFlushEntry(a2, v6, a1);
  }
  else
  {
LABEL_2:
    MiWriteValidPteNewProtection(a1, v4);
    MiInsertTbFlushEntry(a2, v7, 1LL, 0LL);
  }
  v8 = v4;
  if ( MiPteInShadowRange((unsigned __int64)&v12)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v4 |= 0x20uLL;
      v11 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v12 >> 3) & 0x1FF));
      if ( (v11 & 0x20) == 0 )
        v4 = v8;
      if ( (v11 & 0x42) != 0 )
        v4 |= 0x42uLL;
    }
    else
    {
      v4 = v12;
    }
  }
  return MiLockPageAndSetDirty(48 * ((v4 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1LL);
}
