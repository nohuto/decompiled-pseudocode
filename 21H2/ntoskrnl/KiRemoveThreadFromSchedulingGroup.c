/*
 * XREFs of KiRemoveThreadFromSchedulingGroup @ 0x14029D508
 * Callers:
 *     KeTerminateThread @ 0x140266490 (KeTerminateThread.c)
 *     KiSetThreadSchedulingGroup @ 0x14029D3A8 (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiAddThreadToPrcbQueue @ 0x140214370 (KiAddThreadToPrcbQueue.c)
 *     KiReleaseThreadStateLock @ 0x14029B7D0 (KiReleaseThreadStateLock.c)
 *     KiRemoveThreadFromScbQueue @ 0x14029CADC (KiRemoveThreadFromScbQueue.c)
 *     KeUpdateThreadSchedulingProperties @ 0x14029D6B8 (KeUpdateThreadSchedulingProperties.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402D4110 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiAcquireThreadStateLock @ 0x1402D5790 (KiAcquireThreadStateLock.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiRemoveThreadFromSchedulingGroup(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v3; // rdx
  struct _KPRCB *v4; // r14
  _DWORD *SchedulerAssist; // rcx
  __int64 result; // rax
  struct _KPRCB *v7; // rcx
  _DWORD *v8; // rdx
  char v9; // r15
  _DWORD *v10; // rcx
  __int64 v11; // rdx
  char v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rcx
  _DWORD *v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  _DWORD *v19; // rcx
  int v20; // eax
  int v21; // [rsp+60h] [rbp+30h] BYREF
  int v22; // [rsp+68h] [rbp+38h] BYREF
  struct _KPRCB *v23; // [rsp+70h] [rbp+40h] BYREF
  volatile signed __int64 *v24; // [rsp+78h] [rbp+48h] BYREF

  v23 = 0LL;
  v24 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    v23 = CurrentPrcb;
    _disable();
    KiUpdateTotalCyclesCurrentThread(CurrentPrcb, a1, 0LL);
    _enable();
    v4 = KeGetCurrentPrcb();
    v21 = 0;
    while ( 1 )
    {
      SchedulerAssist = v4->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v4->NestingLevel <= 1u )
        {
          v16 = SchedulerAssist[6];
          SchedulerAssist[6] = v16 + 1;
          if ( v16 == -1 )
            KiRemoveSystemWorkPriorityKick(v4);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        break;
      v15 = v4->SchedulerAssist;
      if ( v15 )
      {
        if ( v4->NestingLevel <= 1u )
        {
          v17 = v15[6] - 1;
          v15[6] = v17;
          if ( !v17 )
            KiRemoveSystemWorkPriorityKick(v4);
        }
      }
      do
        KeYieldProcessorEx(&v21);
      while ( CurrentPrcb->PrcbLock );
    }
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    LOBYTE(v3) = 2;
    result = KeUpdateThreadSchedulingProperties(a1, v3, CurrentPrcb);
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    v7 = KeGetCurrentPrcb();
    v8 = v7->SchedulerAssist;
    if ( v8 && v7->NestingLevel <= 1u )
    {
      result = (unsigned int)(v8[6] - 1);
      v8[6] = result;
      if ( !(_DWORD)result )
        return KiRemoveSystemWorkPriorityKick(v7);
    }
  }
  else
  {
    v9 = 0;
    v22 = 0;
    while ( 1 )
    {
      v10 = CurrentPrcb->SchedulerAssist;
      if ( v10 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v18 = v10[6];
          v10[6] = v18 + 1;
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
        KeYieldProcessorEx(&v22);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v12 = KiAcquireThreadStateLock(a1, &v23, &v24);
    if ( (*(_DWORD *)(a1 + 116) & 0x2000) != 0 )
    {
      KiRemoveThreadFromScbQueue((__int64)v23, *(_QWORD *)(a1 + 944), a1, *(_BYTE *)(a1 + 195));
      v9 = 1;
    }
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    if ( (*(_DWORD *)(a1 + 120) & 0x800) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xBu);
    v13 = (__int64)v23;
    LOBYTE(v11) = v12;
    KeUpdateThreadSchedulingProperties(a1, v11, v23);
    if ( v9 )
      KiAddThreadToPrcbQueue(v13, a1, *(char *)(a1 + 195), 0, 0);
    KiReleaseThreadStateLock(v14, v13, v24);
    return KiReleaseThreadLockSafe(a1);
  }
  return result;
}
