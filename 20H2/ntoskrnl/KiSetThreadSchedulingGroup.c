/*
 * XREFs of KiSetThreadSchedulingGroup @ 0x14035F01C
 * Callers:
 *     KeSetProcessSchedulingGroup @ 0x1402EB00C (KeSetProcessSchedulingGroup.c)
 * Callees:
 *     KiEnterDeferredReadyState @ 0x14028D730 (KiEnterDeferredReadyState.c)
 *     KiReadyDeferredReadyList @ 0x1402BE7C0 (KiReadyDeferredReadyList.c)
 *     KiAcquireThreadStateLock @ 0x1402BE9A0 (KiAcquireThreadStateLock.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiReleaseThreadStateLock @ 0x1402E9B20 (KiReleaseThreadStateLock.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1402E9D78 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x14035F0EC (KiRemoveThreadFromSchedulingGroup.c)
 *     KeUpdateThreadSchedulingProperties @ 0x14035F29C (KeUpdateThreadSchedulingProperties.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

struct _SINGLE_LIST_ENTRY *__fastcall KiSetThreadSchedulingGroup(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _SINGLE_LIST_ENTRY *result; // rax
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
  _SINGLE_LIST_ENTRY v19; // [rsp+20h] [rbp-10h] BYREF
  int v20; // [rsp+68h] [rbp+38h] BYREF
  volatile signed __int64 *v21; // [rsp+70h] [rbp+40h] BYREF
  __int64 v22; // [rsp+78h] [rbp+48h] BYREF

  v22 = 0LL;
  v21 = 0LL;
  if ( !a2 )
    return (struct _SINGLE_LIST_ENTRY *)KiRemoveThreadFromSchedulingGroup(a1);
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
  result = (struct _SINGLE_LIST_ENTRY *)KiReleaseThreadLockSafe(a1);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 216) = 0LL;
    v19.Next = (struct _SINGLE_LIST_ENTRY *)(a1 + 216);
    return KiReadyDeferredReadyList((__int64)v8, &v19);
  }
  return result;
}
