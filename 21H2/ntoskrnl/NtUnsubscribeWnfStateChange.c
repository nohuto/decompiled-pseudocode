/*
 * XREFs of NtUnsubscribeWnfStateChange @ 0x1407928B0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExpWnfDeleteSubscription @ 0x14079240C (ExpWnfDeleteSubscription.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x14079296C (ExpWnfAcquireSubscriptionByName.c)
 *     ExpCaptureWnfStateName @ 0x14079474C (ExpCaptureWnfStateName.c)
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
    v5 = Process[1].EndPadding[2];
    if ( v5 )
    {
      v7 = ExpWnfAcquireSubscriptionByName(v8, v5, &P);
      if ( v7 >= 0 )
      {
        ExpWnfDeleteSubscription((struct _EX_RUNDOWN_REF *)P, Process);
        v7 = 0;
      }
    }
    else
    {
      v7 = -1073741772;
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v7;
}
