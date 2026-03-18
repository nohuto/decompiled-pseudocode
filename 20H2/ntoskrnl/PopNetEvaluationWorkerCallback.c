/*
 * XREFs of PopNetEvaluationWorkerCallback @ 0x1403CAC80
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     PopNetEvaluateStateMask @ 0x1407C909C (PopNetEvaluateStateMask.c)
 *     PopTraceStandbyConnectivityUpdate @ 0x1407C90D0 (PopTraceStandbyConnectivityUpdate.c)
 *     PopNetPublishWnfStateUpdate @ 0x1407C9228 (PopNetPublishWnfStateUpdate.c)
 *     PopNetUpdateCsConsumptionFlags @ 0x1407C9288 (PopNetUpdateCsConsumptionFlags.c)
 *     PopNetSetResiliencyPhaseBias @ 0x1408F47F8 (PopNetSetResiliencyPhaseBias.c)
 *     PopReleasePolicyLock @ 0x140993044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140993084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNetEvaluationWorkerCallback(__int64 a1, __int64 a2)
{
  int v2; // r15d
  int v3; // r14d
  char v4; // r12
  char v5; // bp
  char v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edi
  unsigned int v10; // esi
  unsigned __int64 v11; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  char v18; // [rsp+68h] [rbp+10h]
  unsigned int v19; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v20; // [rsp+78h] [rbp+20h] BYREF

  v19 = 0;
  v20 = 0;
  PopAcquirePolicyLock(a1, a2);
  while ( 1 )
  {
    v2 = PopNetStandbyState;
    v3 = PopNetStandbyReason;
    v4 = 0;
    v18 = 0;
    v5 = 0;
    v6 = 0;
    PopNetEvaluateStateMask(&v20, &v19);
    v9 = v20;
    if ( v20 == v2 )
      goto LABEL_6;
    if ( v2 == 2 )
    {
      v6 = 1;
    }
    else if ( v20 != 2 )
    {
      goto LABEL_6;
    }
    v5 = 1;
    if ( PopNetResiliencyEngaged && qword_140C54280 )
    {
      LOBYTE(v8) = 1;
      v18 = 1;
      PopNetSetResiliencyPhaseBias(v8);
    }
LABEL_6:
    v10 = v19;
    if ( v19 != v3 )
    {
      v4 = 1;
      v11 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
      PopNetStandbyReason = v10;
      if ( PopCsResiliencyStats[0] && !dword_140C2300C )
        dword_140C2300C = v10;
      KxReleaseSpinLock(&PopCsResiliencyStatsLock);
      v8 = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v8 = (unsigned int)(v11 + 1);
            v7 = -1LL << ((unsigned __int8)v11 + 1);
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v16 = ~(unsigned __int16)v7;
            v17 = (v16 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v16;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v9 = v20;
            v10 = v19;
          }
        }
      }
      __writecr8(v11);
    }
    if ( v9 != v2 )
    {
      v4 = 1;
      PopNetStandbyState = v9;
      PopNetUpdateCsConsumptionFlags();
    }
    if ( v5 )
    {
      LOBYTE(v8) = v6;
      PopNetPublishWnfStateUpdate(v8);
      if ( v18 )
        PopNetSetResiliencyPhaseBias(0LL);
    }
    if ( !v4 )
      break;
    if ( PopDiagHandleRegistered )
      PopTraceStandbyConnectivityUpdate(v9, v10);
    else
      PopNetDeferLogRequest = 1;
  }
  _InterlockedExchange(&dword_140C208E8, 0);
  return PopReleasePolicyLock(v8, v7);
}
