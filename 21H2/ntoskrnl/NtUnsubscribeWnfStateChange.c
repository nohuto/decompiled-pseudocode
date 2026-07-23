/*
 * XREFs of NtUnsubscribeWnfStateChange @ 0x1406A1090
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExpCaptureWnfStateName @ 0x14069EDF4 (ExpCaptureWnfStateName.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x1406A114C (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfDeleteSubscription @ 0x1406A2BD8 (ExpWnfDeleteSubscription.c)
 */

NTSTATUS __cdecl NtUnsubscribeWnfStateChange(PCWNF_STATE_NAME StateName)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  NTSTATUS v6; // [rsp+24h] [rbp-14h]
  unsigned __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  P = 0LL;
  v7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = ExpCaptureWnfStateName((__int64 *)StateName, &v7, KeGetCurrentThread()->PreviousMode);
  if ( v6 >= 0 )
  {
    v2 = KeGetCurrentThread()->ApcState.Process[1].EndPadding[7];
    if ( v2 )
    {
      v6 = ExpWnfAcquireSubscriptionByName(v7, v2, &P);
      if ( v6 >= 0 )
      {
        ExpWnfDeleteSubscription(P);
        v6 = 0;
      }
    }
    else
    {
      v6 = -1073741772;
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v2, v3, v4);
  return v6;
}
