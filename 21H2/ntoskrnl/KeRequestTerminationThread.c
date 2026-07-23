/*
 * XREFs of KeRequestTerminationThread @ 0x14029BB18
 * Callers:
 *     PspInsertThread @ 0x14063DE48 (PspInsertThread.c)
 *     PspTerminateThreadByPointer @ 0x1406B14D0 (PspTerminateThreadByPointer.c)
 *     KeRequestTerminationProcess @ 0x1408BAE90 (KeRequestTerminationProcess.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KeForceResumeThread @ 0x1402677AC (KeForceResumeThread.c)
 *     KiSignalThreadForApc @ 0x140268660 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1402687E4 (KiInsertQueueApc.c)
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     KeAlertThread @ 0x14029BC80 (KeAlertThread.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 */

int __fastcall KeRequestTerminationThread(__int64 a1)
{
  __int64 v1; // rax
  char v3; // r14
  char CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v6; // rcx
  struct _KPRCB *v7; // rdi
  _DWORD *v8; // rcx
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  int v11; // eax
  int v13[4]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v14[14]; // [rsp+40h] [rbp-98h] BYREF

  v1 = *(_QWORD *)(a1 + 544);
  if ( (*(_BYTE *)(v1 + 992) & 1) != 0 )
  {
    memset(v14, 0, 0x68uLL);
    v14[1] = *(unsigned int *)(a1 + 796);
    v14[2] = a1;
    LODWORD(v1) = VslpEnterIumSecureMode(2u, 9, 0, (__int64)v14);
  }
  if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xFu) )
  {
    v3 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v13[0] = 0;
    while ( 1 )
    {
      v6 = CurrentPrcb->SchedulerAssist;
      if ( v6 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v10 = v6[6];
          v6[6] = v10 + 1;
          if ( v10 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v8 = CurrentPrcb->SchedulerAssist;
      if ( v8 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v11 = v8[6] - 1;
          v8[6] = v11;
          if ( !v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(v13);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v7 = KeGetCurrentPrcb();
    if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
    {
      v3 = 1;
      if ( !*(_BYTE *)(a1 + 730) )
      {
        *(_BYTE *)(a1 + 730) = 1;
        KiInsertQueueApc(a1 + 648);
        KiSignalThreadForApc((__int64)v7, a1 + 648, CurrentIrql);
      }
    }
    KiReleaseThreadLockSafe(a1);
    LODWORD(v1) = KiExitDispatcher((_DWORD)v7, 0, 1, 0, CurrentIrql);
    if ( v3 )
    {
      KeAlertThread(a1, 0LL);
      LODWORD(v1) = KeForceResumeThread(a1);
    }
  }
  return v1;
}
