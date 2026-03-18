/*
 * XREFs of KiRemoveThreadFromSchedulingGroup @ 0x14035F0EC
 * Callers:
 *     KeTerminateThread @ 0x1402D602C (KeTerminateThread.c)
 *     KiSetThreadSchedulingGroup @ 0x14035F01C (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     KiAcquireThreadStateLock @ 0x1402BE9A0 (KiAcquireThreadStateLock.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402DC410 (KiUpdateTotalCyclesCurrentThread.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiReleaseThreadStateLock @ 0x1402E9B20 (KiReleaseThreadStateLock.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     KiRemoveThreadFromScbQueue @ 0x14035EB80 (KiRemoveThreadFromScbQueue.c)
 *     KeUpdateThreadSchedulingProperties @ 0x14035F29C (KeUpdateThreadSchedulingProperties.c)
 *     KiAddThreadToPrcbQueue @ 0x14035F310 (KiAddThreadToPrcbQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiRemoveThreadFromSchedulingGroup(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KPRCB *v9; // r14
  _DWORD *SchedulerAssist; // rcx
  __int64 result; // rax
  struct _KPRCB *v12; // rcx
  _DWORD *v13; // rdx
  char v14; // r15
  _DWORD *v15; // rcx
  __int64 v16; // rdx
  char v17; // r14
  __int64 v18; // rdi
  __int64 v19; // rcx
  _DWORD *v20; // rcx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  _DWORD *v24; // rcx
  int v25; // eax
  int v26; // [rsp+60h] [rbp+30h] BYREF
  int v27; // [rsp+68h] [rbp+38h] BYREF
  struct _KPRCB *v28; // [rsp+70h] [rbp+40h] BYREF
  volatile signed __int64 *v29; // [rsp+78h] [rbp+48h] BYREF

  v28 = 0LL;
  v29 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    v28 = CurrentPrcb;
    _disable();
    KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, a1, 0LL);
    _enable();
    v9 = KeGetCurrentPrcb();
    v26 = 0;
    while ( 1 )
    {
      SchedulerAssist = v9->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v9->NestingLevel <= 1u )
        {
          v21 = SchedulerAssist[6];
          SchedulerAssist[6] = v21 + 1;
          if ( v21 == -1 )
            KiRemoveSystemWorkPriorityKick(v9);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        break;
      v20 = v9->SchedulerAssist;
      if ( v20 )
      {
        if ( v9->NestingLevel <= 1u )
        {
          v22 = v20[6] - 1;
          v20[6] = v22;
          if ( !v22 )
            KiRemoveSystemWorkPriorityKick(v9);
        }
      }
      do
        KeYieldProcessorEx(&v26, v6, v7, v8);
      while ( CurrentPrcb->PrcbLock );
    }
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    LOBYTE(v6) = 2;
    result = KeUpdateThreadSchedulingProperties(a1, v6, CurrentPrcb);
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    v12 = KeGetCurrentPrcb();
    v13 = v12->SchedulerAssist;
    if ( v13 && v12->NestingLevel <= 1u )
    {
      result = (unsigned int)(v13[6] - 1);
      v13[6] = result;
      if ( !(_DWORD)result )
        return KiRemoveSystemWorkPriorityKick(v12);
    }
  }
  else
  {
    v14 = 0;
    v27 = 0;
    while ( 1 )
    {
      v15 = CurrentPrcb->SchedulerAssist;
      if ( v15 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v23 = v15[6];
          v15[6] = v23 + 1;
          if ( v23 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v24 = CurrentPrcb->SchedulerAssist;
      if ( v24 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v25 = v24[6] - 1;
          v24[6] = v25;
          if ( !v25 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v27, a2, a3, a4);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v17 = KiAcquireThreadStateLock(a1, (__int64 *)&v28, (volatile signed __int32 **)&v29);
    if ( (*(_DWORD *)(a1 + 116) & 0x2000) != 0 )
    {
      KiRemoveThreadFromScbQueue((__int64)v28, *(_QWORD *)(a1 + 944), a1, *(_BYTE *)(a1 + 195));
      v14 = 1;
    }
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    if ( (*(_DWORD *)(a1 + 120) & 0x800) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xBu);
    v18 = (__int64)v28;
    LOBYTE(v16) = v17;
    KeUpdateThreadSchedulingProperties(a1, v16, v28);
    if ( v14 )
      KiAddThreadToPrcbQueue(v18, a1, *(char *)(a1 + 195), 0, 0);
    KiReleaseThreadStateLock(v19, v18, v29);
    return KiReleaseThreadLockSafe(a1);
  }
  return result;
}
