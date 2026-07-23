/*
 * XREFs of MiInitializeMdlBatchPages @ 0x140294C34
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140294744 (MiAllocatePagesForMdl.c)
 *     MiReturnMdlExcess @ 0x1405343EC (MiReturnMdlExcess.c)
 * Callees:
 *     MiSetLeafPfnBuddy @ 0x14024920C (MiSetLeafPfnBuddy.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x140295074 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     PsGetCurrentProcess @ 0x140346350 (PsGetCurrentProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiShouldYieldProcessor @ 0x140536C18 (MiShouldYieldProcessor.c)
 *     MiLockPageAtDpc @ 0x14054FB5C (MiLockPageAtDpc.c)
 */

__int64 __fastcall MiInitializeMdlBatchPages(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ebx
  __int64 v3; // rsi
  _QWORD *v5; // r12
  unsigned __int64 v6; // rbp
  _QWORD *v7; // r14
  _QWORD *v8; // r15
  unsigned __int64 v9; // r12
  int v10; // edi
  unsigned __int64 CurrentProcess; // r15
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 i; // r14
  __int64 v15; // rbx
  __int64 v16; // r8
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v19; // r9
  int v20; // eax
  bool v21; // zf
  _DWORD *v22; // r9
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  int v26; // eax
  __int64 result; // rax
  _QWORD *v28; // [rsp+60h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 64);
  v2 = 0;
  v3 = 0LL;
  v5 = (_QWORD *)(v1 + 48);
  v6 = (unsigned __int64)*(unsigned int *)(v1 + 40) >> 12;
  v7 = (_QWORD *)(v1 + 48);
  v8 = (_QWORD *)(v1 + 48);
  v28 = (_QWORD *)(v1 + 48);
  if ( !v6 )
    goto LABEL_12;
  v9 = (unsigned __int64)*(unsigned int *)(v1 + 40) >> 12;
  do
  {
    v10 = *(_DWORD *)(MiSearchNumaNodeTable(48LL * *v7 / 48) + 8);
    if ( v3 )
    {
      if ( v10 == v2 )
      {
        ++v3;
        goto LABEL_8;
      }
      MiInitializeMdlOneNodeBatchPages(a1, v8, v3);
    }
    v3 = 1LL;
    v2 = v10;
    v8 = v7;
LABEL_8:
    ++v7;
    --v9;
  }
  while ( v9 );
  if ( v3 )
    MiInitializeMdlOneNodeBatchPages(a1, v8, v3);
  v5 = v28;
LABEL_12:
  CurrentProcess = PsGetCurrentProcess();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  for ( i = 0LL; i < v6; ++v5 )
  {
    v15 = 48LL * *v5 - 0x58000000000LL;
    MiLockPageAtDpc(v15);
    *(_QWORD *)(v15 + 8) = 0xFFFFF68000000000uLL;
    MiSetLeafPfnBuddy((_QWORD *)v15, CurrentProcess);
    *(_QWORD *)(v15 + 8) = v16;
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (i & 0xF) == 0 && (unsigned int)MiShouldYieldProcessor() )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v17 = KeGetCurrentIrql();
          if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v19 = CurrentPrcb->SchedulerAssist;
            v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v21 = (v20 & v19[5]) == 0;
            v19[5] &= v20;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v22 = KeGetCurrentPrcb()->SchedulerAssist;
        v22[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
    }
    ++i;
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v23 = KeGetCurrentIrql();
      if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
      {
        v24 = KeGetCurrentPrcb();
        v25 = v24->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v21 = (v26 & v25[5]) == 0;
        v25[5] &= v26;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v24);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
