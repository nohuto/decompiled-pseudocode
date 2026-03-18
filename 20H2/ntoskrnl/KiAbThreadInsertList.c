/*
 * XREFs of KiAbThreadInsertList @ 0x140326E40
 * Callers:
 *     ExpAcquireResourceSharedLite @ 0x140222130 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140222A80 (ExpAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIoEx @ 0x140223950 (PsBoostThreadIoEx.c)
 *     KiAbSetMinimumThreadPriority @ 0x140243354 (KiAbSetMinimumThreadPriority.c)
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x14024B3FC (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     ExpApplyPriorityBoost @ 0x140291140 (ExpApplyPriorityBoost.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x14035D3EC (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiAbThreadBoostIoPriority @ 0x14035F5D4 (KiAbThreadBoostIoPriority.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
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
