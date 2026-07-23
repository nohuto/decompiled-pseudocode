/*
 * XREFs of MiMakePteClean @ 0x14031A2BC
 * Callers:
 *     NtGetWriteWatch @ 0x1403373A0 (NtGetWriteWatch.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x1402199E0 (MiInsertLargeTbFlushEntry.c)
 *     MiWriteValidPteNewProtection @ 0x14031A750 (MiWriteValidPteNewProtection.c)
 *     MiLockPageAndSetDirty @ 0x14031A7BC (MiLockPageAndSetDirty.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiRewritePteWithLockBit @ 0x1403B6D88 (MiRewritePteWithLockBit.c)
 */

__int64 __fastcall MiMakePteClean(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // esi
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = MI_READ_PTE_LOCK_FREE(a1) & 0xFFFFFFFFFFFFFFBDuLL;
  v5 = 0;
  v11 = v4;
  v6 = a1 << 25 >> 16;
  if ( v6 < 0xFFFFF68000000000uLL )
    goto LABEL_2;
  do
  {
    if ( v6 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
    ++v5;
    v6 = (__int64)(v6 << 25) >> 16;
  }
  while ( v6 >= 0xFFFFF68000000000uLL );
  if ( v5 )
  {
    v4 = v11;
    MiRewritePteWithLockBit(&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6], a1, v11);
    MiInsertLargeTbFlushEntry(a2, v5, a1);
  }
  else
  {
LABEL_2:
    MiWriteValidPteNewProtection(a1, v4);
    MiInsertTbFlushEntry(a2, v6, 1LL, 0LL);
  }
  v7 = v4;
  if ( (unsigned int)MiPteInShadowRange(&v11)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v4 |= 0x20uLL;
      v10 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v11 >> 3) & 0x1FF));
      if ( (v10 & 0x20) == 0 )
        v4 = v7;
      if ( (v10 & 0x42) != 0 )
        v4 |= 0x42uLL;
    }
    else
    {
      v4 = v11;
    }
  }
  return MiLockPageAndSetDirty(48 * ((v4 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1LL);
}
