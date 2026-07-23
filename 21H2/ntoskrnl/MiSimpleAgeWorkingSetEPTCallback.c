/*
 * XREFs of MiSimpleAgeWorkingSetEPTCallback @ 0x14053C0D0
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAgePteWorker @ 0x1403446E0 (MiAgePteWorker.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiSimpleAgeWorkingSetEPTCallback(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int *a5)
{
  __int64 v5; // r14
  int v7; // esi
  unsigned __int64 v9; // rbx
  char v10; // di
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 24);
  v7 = a3;
  v9 = MI_READ_PTE_LOCK_FREE(a3);
  v15 = v9;
  if ( (*a2 & 2) != 0 )
  {
    v10 = 3;
  }
  else
  {
    if ( (*a2 & 1) == 0 )
      return 0LL;
    v10 = 5;
  }
  if ( MiPteInShadowRange((unsigned __int64)&v15)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v12 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v15 >> 3) & 0x1FF));
      v13 = v9 | 0x20;
      if ( (v12 & 0x20) == 0 )
        v13 = v9;
      v9 = v13;
      if ( (v12 & 0x42) != 0 )
        v9 = v13;
    }
  }
  MiAgePteWorker(v5, v7, a4, 48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, a5, v10);
  return 0LL;
}
