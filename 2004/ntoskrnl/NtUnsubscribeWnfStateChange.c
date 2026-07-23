/*
 * XREFs of NtUnsubscribeWnfStateChange @ 0x140620850
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExpWnfDeleteSubscription @ 0x1406204B0 (ExpWnfDeleteSubscription.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x14062090C (ExpWnfAcquireSubscriptionByName.c)
 *     ExpCaptureWnfStateName @ 0x140623534 (ExpCaptureWnfStateName.c)
 */

NTSTATUS __cdecl NtUnsubscribeWnfStateChange(PCWNF_STATE_NAME StateName)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rbx
  unsigned __int64 v3; // rdx
  NTSTATUS v5; // [rsp+24h] [rbp-14h]
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  P = 0LL;
  v6 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = ExpCaptureWnfStateName(StateName, &v6, KeGetCurrentThread()->PreviousMode);
  if ( v5 >= 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v3 = Process[1].EndPadding[7];
    if ( v3 )
    {
      v5 = ExpWnfAcquireSubscriptionByName(v6, v3, &P);
      if ( v5 >= 0 )
      {
        ExpWnfDeleteSubscription((struct _EX_RUNDOWN_REF *)P, (__int64)Process);
        v5 = 0;
      }
    }
    else
    {
      v5 = -1073741772;
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
