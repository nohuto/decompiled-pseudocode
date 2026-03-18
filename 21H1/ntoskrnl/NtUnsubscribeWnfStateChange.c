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

__int64 __fastcall NtUnsubscribeWnfStateChange(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _KPROCESS *Process; // rbx
  int v9; // [rsp+24h] [rbp-14h]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  P = 0LL;
  v10 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LOBYTE(a3) = KeGetCurrentThread()->PreviousMode;
  v9 = ExpCaptureWnfStateName(a1, &v10, a3);
  if ( v9 >= 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v4 = Process[1].EndPadding[7];
    if ( v4 )
    {
      v9 = ExpWnfAcquireSubscriptionByName(v10, v4, &P);
      if ( v9 >= 0 )
      {
        ExpWnfDeleteSubscription((struct _EX_RUNDOWN_REF *)P, (__int64)Process);
        v9 = 0;
      }
    }
    else
    {
      v9 = -1073741772;
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v4, v5, v6);
  return (unsigned int)v9;
}
