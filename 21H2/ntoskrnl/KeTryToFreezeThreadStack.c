/*
 * XREFs of KeTryToFreezeThreadStack @ 0x1405135C8
 * Callers:
 *     MiSwapStackPage @ 0x14024483C (MiSwapStackPage.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiReleaseThreadStateLock @ 0x14029B7D0 (KiReleaseThreadStateLock.c)
 *     KiAcquireThreadStateLock @ 0x1402D5790 (KiAcquireThreadStateLock.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiIsKernelStackSwappable @ 0x140522D08 (KiIsKernelStackSwappable.c)
 */

char __fastcall KeTryToFreezeThreadStack(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v8; // eax
  _DWORD *v9; // rcx
  int v10; // eax
  unsigned __int8 v11; // al
  __int64 v12; // rcx
  char result; // al
  int v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF
  volatile signed __int64 *v16; // [rsp+58h] [rbp+20h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v8 = SchedulerAssist[6];
        SchedulerAssist[6] = v8 + 1;
        if ( v8 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v9 = CurrentPrcb->SchedulerAssist;
    if ( v9 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v10 = v9[6] - 1;
        v9[6] = v10;
        if ( !v10 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v14, (__int64)a2, a3, a4);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v11 = KiAcquireThreadStateLock(a1, &v15, (volatile signed __int32 **)&v16);
  if ( v11 <= 4u )
  {
LABEL_18:
    KiReleaseThreadStateLock(v12, v15, v16);
    KiReleaseThreadLockSafe(a1);
    return 0;
  }
  if ( v11 == 5 )
  {
    if ( !(unsigned int)KiIsKernelStackSwappable(a1) )
      goto LABEL_18;
    LOBYTE(v12) = *(_BYTE *)(a1 + 113);
    if ( (_BYTE)v12 )
      goto LABEL_18;
  }
  else if ( v11 == 7 || v11 == 9 )
  {
    goto LABEL_18;
  }
  result = 1;
  *a2 = v15;
  return result;
}
