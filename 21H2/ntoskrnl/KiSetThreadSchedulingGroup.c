/*
 * XREFs of KiSetThreadSchedulingGroup @ 0x1402EC058
 * Callers:
 *     KeSetProcessSchedulingGroup @ 0x1402EAB4C (KeSetProcessSchedulingGroup.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140230D60 (KiReadyDeferredReadyList.c)
 *     KiAcquireThreadStateLock @ 0x140230F40 (KiAcquireThreadStateLock.c)
 *     KiEnterDeferredReadyState @ 0x140248780 (KiEnterDeferredReadyState.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x14029A860 (KiReleaseThreadLockSafe.c)
 *     KiReleaseThreadStateLock @ 0x1402EA480 (KiReleaseThreadStateLock.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1402EA708 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1402EC1B8 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeUpdateThreadSchedulingProperties @ 0x1402EC368 (KeUpdateThreadSchedulingProperties.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
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
  int v16; // eax
  _DWORD *v17; // rcx
  int v18; // eax
  _QWORD *v19; // [rsp+20h] [rbp-10h] BYREF
  int v20; // [rsp+68h] [rbp+38h] BYREF
  volatile signed __int64 *v21; // [rsp+70h] [rbp+40h] BYREF
  __int64 v22; // [rsp+78h] [rbp+48h] BYREF

  v22 = 0LL;
  v21 = 0LL;
  if ( !a2 )
    return (_QWORD *)KiRemoveThreadFromSchedulingGroup(a1);
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0LL;
  v20 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v16 = SchedulerAssist[6];
        SchedulerAssist[6] = v16 + 1;
        if ( v16 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v17 = CurrentPrcb->SchedulerAssist;
    if ( v17 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v18 = v17[6] - 1;
        v17[6] = v18;
        if ( !v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v20, a2, a3, a4);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v10 = KiAcquireThreadStateLock(a1, &v22, (volatile signed __int32 **)&v21);
  *(_QWORD *)(a1 + 104) = a2;
  LOBYTE(v11) = v10;
  _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  v12 = v22;
  v13 = v10;
  KeUpdateThreadSchedulingProperties(a1, v11, v22);
  v15 = v21;
  if ( v13 == 1 && v21 && (*(_DWORD *)(a1 + 120) & 0x2000) == 0 )
  {
    v8 = KeGetCurrentPrcb();
    KiRemoveThreadFromSharedReadyQueue((__int64)v21, a1, *(_BYTE *)(a1 + 195));
    KiEnterDeferredReadyState(a1);
    v12 = v22;
  }
  KiReleaseThreadStateLock(v14, v12, v15);
  result = (_QWORD *)KiReleaseThreadLockSafe(a1);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 216) = 0LL;
    v19 = (_QWORD *)(a1 + 216);
    return KiReadyDeferredReadyList((__int64)v8, &v19);
  }
  return result;
}
