/*
 * XREFs of KiSetThreadSchedulingGroup @ 0x14034E548
 * Callers:
 *     KeSetProcessSchedulingGroup @ 0x1402FCD88 (KeSetProcessSchedulingGroup.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140214140 (KiReadyDeferredReadyList.c)
 *     KiAcquireThreadStateLock @ 0x140214320 (KiAcquireThreadStateLock.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiEnterDeferredReadyState @ 0x140281520 (KiEnterDeferredReadyState.c)
 *     KiReleaseThreadStateLock @ 0x1402F11C0 (KiReleaseThreadStateLock.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x14032BC78 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x14034E618 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeUpdateThreadSchedulingProperties @ 0x14034E7C8 (KeUpdateThreadSchedulingProperties.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall KiSetThreadSchedulingGroup(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *result; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  struct _KPRCB *v8; // r14
  _DWORD *SchedulerAssist; // rcx
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rsi
  char v13; // bl
  __int64 v14; // rcx
  volatile signed __int64 *v15; // r11
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  _DWORD *v19; // rcx
  int v20; // eax
  _QWORD *v21; // [rsp+20h] [rbp-10h] BYREF
  int v22; // [rsp+68h] [rbp+38h] BYREF
  volatile signed __int64 *v23; // [rsp+70h] [rbp+40h] BYREF
  __int64 v24; // [rsp+78h] [rbp+48h] BYREF

  v24 = 0LL;
  v23 = 0LL;
  if ( !a2 )
    return (_QWORD *)KiRemoveThreadFromSchedulingGroup(a1);
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0LL;
  v22 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v18 = SchedulerAssist[6];
        SchedulerAssist[6] = v18 + 1;
        if ( v18 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v19 = CurrentPrcb->SchedulerAssist;
    if ( v19 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v20 = v19[6] - 1;
        v19[6] = v20;
        if ( !v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v22, a2, a3, a4);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v10 = KiAcquireThreadStateLock(a1, &v24, (volatile signed __int32 **)&v23);
  *(_QWORD *)(a1 + 104) = a2;
  LOBYTE(v11) = v10;
  _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  v12 = v24;
  v13 = v10;
  KeUpdateThreadSchedulingProperties(a1, v11, v24);
  v15 = v23;
  if ( v13 == 1 && v23 && (*(_DWORD *)(a1 + 120) & 0x2000) == 0 )
  {
    v8 = KeGetCurrentPrcb();
    KiRemoveThreadFromSharedReadyQueue((__int64)v23, a1, *(_BYTE *)(a1 + 195));
    KiEnterDeferredReadyState(a1);
    v12 = v24;
  }
  KiReleaseThreadStateLock(v14, v12, v15);
  result = (_QWORD *)KiReleaseThreadLockSafe(a1);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 216) = 0LL;
    v21 = (_QWORD *)(a1 + 216);
    return KiReadyDeferredReadyList((__int64)v8, &v21, v16, v17);
  }
  return result;
}
