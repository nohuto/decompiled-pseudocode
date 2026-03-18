/*
 * XREFs of KeRequestTerminationThread @ 0x1402EC780
 * Callers:
 *     PspInsertThread @ 0x1406867E0 (PspInsertThread.c)
 *     PspTerminateThreadByPointer @ 0x14069A1F0 (PspTerminateThreadByPointer.c)
 *     KeRequestTerminationProcess @ 0x1408BD850 (KeRequestTerminationProcess.c)
 * Callees:
 *     KiExitDispatcher @ 0x1402197A0 (KiExitDispatcher.c)
 *     KeForceResumeThread @ 0x1402D7860 (KeForceResumeThread.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     VslpEnterIumSecureMode @ 0x1402E51E8 (VslpEnterIumSecureMode.c)
 *     KiSignalThreadForApc @ 0x1402EC4EC (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1402EC670 (KiInsertQueueApc.c)
 *     KeAlertThread @ 0x1402EC8E0 (KeAlertThread.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140411300 (memset.c)
 */

char __fastcall KeRequestTerminationThread(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v4; // rax
  char v6; // r14
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v9; // rcx
  struct _KPRCB *v10; // rdi
  _DWORD *v11; // rcx
  int v12; // eax
  int v13; // eax
  int v15[4]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v16[14]; // [rsp+40h] [rbp-98h] BYREF

  v4 = *(_QWORD *)(a1 + 544);
  if ( (*(_BYTE *)(v4 + 992) & 1) != 0 )
  {
    memset(v16, 0, 0x68uLL);
    v16[1] = *(unsigned int *)(a1 + 796);
    v16[2] = a1;
    LOBYTE(v4) = VslpEnterIumSecureMode(2u, 9, 0, (__int64)v16);
  }
  if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xFu) )
  {
    v6 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (-1LL << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)a2 | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v15[0] = 0;
    while ( 1 )
    {
      v9 = CurrentPrcb->SchedulerAssist;
      if ( v9 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v12 = v9[6];
          v9[6] = v12 + 1;
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
        KeYieldProcessorEx(v15, a2, a3, (__int64)SchedulerAssist);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v10 = KeGetCurrentPrcb();
    if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
    {
      v6 = 1;
      if ( !*(_BYTE *)(a1 + 730) )
      {
        *(_BYTE *)(a1 + 730) = 1;
        KiInsertQueueApc(a1 + 648);
        KiSignalThreadForApc((__int64)v10, a1 + 648, CurrentIrql);
      }
    }
    KiReleaseThreadLockSafe(a1);
    LOBYTE(v4) = KiExitDispatcher((__int64)v10, 0LL, 1u, 0, CurrentIrql);
    if ( v6 )
    {
      KeAlertThread(a1, 0LL);
      LOBYTE(v4) = KeForceResumeThread(a1);
    }
  }
  return v4;
}
