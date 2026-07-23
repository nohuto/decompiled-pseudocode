/*
 * XREFs of KiSetThreadSchedulingGroup @ 0x14029D3A8
 * Callers:
 *     KeSetProcessSchedulingGroup @ 0x14029BE9C (KeSetProcessSchedulingGroup.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiReleaseThreadStateLock @ 0x14029B7D0 (KiReleaseThreadStateLock.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x14029BA58 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x14029D508 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeUpdateThreadSchedulingProperties @ 0x14029D6B8 (KeUpdateThreadSchedulingProperties.c)
 *     KiReadyDeferredReadyList @ 0x1402D55B0 (KiReadyDeferredReadyList.c)
 *     KiAcquireThreadStateLock @ 0x1402D5790 (KiAcquireThreadStateLock.c)
 *     KiEnterDeferredReadyState @ 0x1402ECFD0 (KiEnterDeferredReadyState.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiSetThreadSchedulingGroup(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  struct _KPRCB *v6; // r14
  _DWORD *SchedulerAssist; // rcx
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // rsi
  char v11; // bl
  __int64 v12; // rcx
  volatile signed __int64 *v13; // r11
  int v14; // eax
  _DWORD *v15; // rcx
  int v16; // eax
  __int64 v17; // [rsp+20h] [rbp-10h] BYREF
  int v18; // [rsp+68h] [rbp+38h] BYREF
  volatile signed __int64 *v19; // [rsp+70h] [rbp+40h] BYREF
  __int64 v20; // [rsp+78h] [rbp+48h] BYREF

  v20 = 0LL;
  v19 = 0LL;
  if ( !a2 )
    return KiRemoveThreadFromSchedulingGroup(a1);
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = 0LL;
  v18 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v14 = SchedulerAssist[6];
        SchedulerAssist[6] = v14 + 1;
        if ( v14 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v15 = CurrentPrcb->SchedulerAssist;
    if ( v15 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v16 = v15[6] - 1;
        v15[6] = v16;
        if ( !v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v18);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v8 = KiAcquireThreadStateLock(a1, &v20, &v19);
  *(_QWORD *)(a1 + 104) = a2;
  LOBYTE(v9) = v8;
  _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  v10 = v20;
  v11 = v8;
  KeUpdateThreadSchedulingProperties(a1, v9, v20);
  v13 = v19;
  if ( v11 == 1 && v19 && (*(_DWORD *)(a1 + 120) & 0x2000) == 0 )
  {
    v6 = KeGetCurrentPrcb();
    KiRemoveThreadFromSharedReadyQueue((__int64)v19, a1, *(_BYTE *)(a1 + 195));
    KiEnterDeferredReadyState(a1);
    v10 = v20;
  }
  KiReleaseThreadStateLock(v12, v10, v13);
  result = KiReleaseThreadLockSafe(a1);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 216) = 0LL;
    v17 = a1 + 216;
    return KiReadyDeferredReadyList(v6, &v17);
  }
  return result;
}
