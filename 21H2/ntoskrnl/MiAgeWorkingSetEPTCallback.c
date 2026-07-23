/*
 * XREFs of MiAgeWorkingSetEPTCallback @ 0x14053AE10
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAgePteWorker @ 0x1403446E0 (MiAgePteWorker.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiAgeWorkingSetEPTCallback(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int *a5)
{
  __int64 v5; // r15
  int v7; // ebp
  __int64 v9; // rax
  unsigned int *v10; // rsi
  unsigned __int64 v11; // rdx
  int v12; // edi
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 24);
  v7 = a3;
  v9 = MI_READ_PTE_LOCK_FREE(a3);
  v10 = a5;
  v11 = v9;
  v19 = v9;
  LOBYTE(v12) = 0;
  v13 = *a2;
  v14 = v11;
  if ( (v13 & 2) != 0 )
  {
    v12 = (v11 >> 5) & 1 | 2;
    if ( (*a5 & 3) == 0 )
      LOBYTE(v12) = (v11 & 0x20) != 0;
  }
  else if ( (v13 & 1) != 0 )
  {
    LOBYTE(v12) = 1;
    if ( (*a5 & 3) != 0 )
      LOBYTE(v12) = 5;
  }
  if ( MiPteInShadowRange((unsigned __int64)&v19)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v14 & 1) != 0
    && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v16 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v19 >> 3) & 0x1FF));
      v17 = v14 | 0x20;
      if ( (v16 & 0x20) == 0 )
        v17 = v14;
      v14 = v17;
      if ( (v16 & 0x42) != 0 )
        v14 = v17 | 0x42;
    }
  }
  MiAgePteWorker(v5, v7, a4, 48 * ((v14 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, v10, v12);
  return 0LL;
}
