/*
 * XREFs of KiAbThreadInsertList @ 0x14024E928
 * Callers:
 *     ExpBoostIoAfterAcquire @ 0x14021CA70 (ExpBoostIoAfterAcquire.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x140229B04 (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiAbThreadBoostIoPriority @ 0x140229BD8 (KiAbThreadBoostIoPriority.c)
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x14028F748 (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     PsBoostThreadIoEx @ 0x1402ACD80 (PsBoostThreadIoEx.c)
 *     ExpApplyPriorityBoost @ 0x140343010 (ExpApplyPriorityBoost.c)
 *     KiAbSetMinimumThreadPriority @ 0x14035A424 (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiAbThreadInsertList(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int v4; // esi
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // [rsp+40h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  v13 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = SchedulerAssist[6];
        SchedulerAssist[6] = v11 + 1;
        if ( v11 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v10 = CurrentPrcb->SchedulerAssist;
    if ( v10 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v12 = v10[6] - 1;
        v10[6] = v12;
        if ( !v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v13);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *a3 == 1LL )
  {
    v4 = 1;
    *a3 = *a2;
    *a2 = a3;
  }
  KiReleaseThreadLockSafe(a1);
  if ( v4 )
    _InterlockedAdd16((volatile signed __int16 *)(a1 + 868), 1u);
  return v4;
}
