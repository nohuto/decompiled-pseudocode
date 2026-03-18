/*
 * XREFs of NtUnsubscribeWnfStateChange @ 0x140651490
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExpWnfDeleteSubscription @ 0x1406510F0 (ExpWnfDeleteSubscription.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x14065154C (ExpWnfAcquireSubscriptionByName.c)
 *     ExpCaptureWnfStateName @ 0x1406546E4 (ExpCaptureWnfStateName.c)
 */

__int64 __fastcall NtUnsubscribeWnfStateChange(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rbx
  unsigned __int64 v5; // rdx
  int v7; // [rsp+24h] [rbp-14h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  P = 0LL;
  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LOBYTE(a3) = KeGetCurrentThread()->PreviousMode;
  v7 = ExpCaptureWnfStateName(a1, &v8, a3);
  if ( v7 >= 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v5 = Process[1].EndPadding[7];
    if ( v5 )
    {
      v7 = ExpWnfAcquireSubscriptionByName(v8, v5, &P);
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v7;
}
