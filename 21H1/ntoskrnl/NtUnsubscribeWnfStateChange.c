/*
 * XREFs of NtUnsubscribeWnfStateChange @ 0x140665F70
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExpWnfDeleteSubscription @ 0x140665BD0 (ExpWnfDeleteSubscription.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x14066602C (ExpWnfAcquireSubscriptionByName.c)
 *     ExpCaptureWnfStateName @ 0x140668C54 (ExpCaptureWnfStateName.c)
 */

NTSTATUS __cdecl NtUnsubscribeWnfStateChange(PCWNF_STATE_NAME StateName)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  _KPROCESS *Process; // rbx
  NTSTATUS v7; // [rsp+24h] [rbp-14h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  P = 0LL;
  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = ExpCaptureWnfStateName(StateName, &v8, KeGetCurrentThread()->PreviousMode);
  if ( v7 >= 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v2 = Process[1].EndPadding[7];
    if ( v2 )
    {
      v7 = ExpWnfAcquireSubscriptionByName(v8, v2, &P);
      if ( v7 >= 0 )
      {
        ExpWnfDeleteSubscription((struct _EX_RUNDOWN_REF *)P, (__int64)Process);
        v7 = 0;
      }
    }
    else
    {
      v7 = -1073741772;
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v2, v3, v4);
  return v7;
}
