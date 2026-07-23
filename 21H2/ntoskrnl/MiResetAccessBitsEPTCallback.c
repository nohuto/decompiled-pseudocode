/*
 * XREFs of MiResetAccessBitsEPTCallback @ 0x14053BDC0
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiResetAccessBitPteWorker @ 0x14053BCC0 (MiResetAccessBitPteWorker.c)
 */

__int64 __fastcall MiResetAccessBitsEPTCallback(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  __int64 v5; // r15
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  char v11; // si
  __int64 v12; // rdi
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 24);
  v9 = MI_READ_PTE_LOCK_FREE(a3);
  v17 = v9;
  v10 = *a2;
  v11 = 0;
  v12 = a5;
  if ( (v10 & 2) == 0 )
  {
    if ( (v10 & 1) == 0 )
      return 0LL;
    if ( *(_QWORD *)(a5 + 8) )
      v11 = 4;
  }
  if ( MiPteInShadowRange((unsigned __int64)&v17)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v14 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v17 >> 3) & 0x1FF));
      v15 = v9 | 0x20;
      if ( (v14 & 0x20) == 0 )
        v15 = v9;
      v9 = v15;
      if ( (v14 & 0x42) != 0 )
        v9 = v15;
    }
  }
  MiResetAccessBitPteWorker(v5, a3, a4, 48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, v12, v11);
  return 0LL;
}
