/*
 * XREFs of KiAbThreadInsertList @ 0x1403565EC
 * Callers:
 *     ExpAcquireResourceSharedLite @ 0x1402091B0 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140209B00 (ExpAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIoEx @ 0x14020A940 (PsBoostThreadIoEx.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x140279DA8 (KeAbProcessEffectiveIoPriorityChange.c)
 *     ExpApplyPriorityBoost @ 0x1402830C0 (ExpApplyPriorityBoost.c)
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x1402C7988 (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     KiAbSetMinimumThreadPriority @ 0x14032A364 (KiAbSetMinimumThreadPriority.c)
 *     KiAbThreadBoostIoPriority @ 0x14032A874 (KiAbThreadBoostIoPriority.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiAbThreadInsertList(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int v5; // esi
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v11; // rcx
  int v12; // eax
  int v13; // eax
  int v14; // [rsp+40h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  v14 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v12 = SchedulerAssist[6];
        SchedulerAssist[6] = v12 + 1;
        if ( v12 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v11 = CurrentPrcb->SchedulerAssist;
    if ( v11 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v13 = v11[6] - 1;
        v11[6] = v13;
        if ( !v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v14, (__int64)a2, (__int64)a3, a4);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *a3 == 1LL )
  {
    v5 = 1;
    *a3 = *a2;
    *a2 = a3;
  }
  KiReleaseThreadLockSafe(a1);
  if ( v5 )
    _InterlockedAdd16((volatile signed __int16 *)(a1 + 868), 1u);
  return v5;
}
