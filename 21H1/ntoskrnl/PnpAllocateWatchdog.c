/*
 * XREFs of PnpAllocateWatchdog @ 0x14035BBB8
 * Callers:
 *     PnpEnableWatchdog @ 0x14070AF34 (PnpEnableWatchdog.c)
 * Callees:
 *     PnpQueryWatchdogTimeout @ 0x14035BC4C (PnpQueryWatchdogTimeout.c)
 *     PnpWatchdogTimerAllocate @ 0x14070B010 (PnpWatchdogTimerAllocate.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

_QWORD *PnpAllocateWatchdog()
{
  _QWORD *PoolWithTag; // rax
  __int64 v1; // rcx
  _QWORD *v2; // rbx
  __int64 v3; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-38h] BYREF
  int WatchdogTimeout; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+3Ch] [rbp-1Ch]
  void (__fastcall __noreturn *v8)(); // [rsp+40h] [rbp-18h]

  v5[1] = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x57647050u);
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    v5[0] = PoolWithTag;
    LOBYTE(v1) = 1;
    *(_OWORD *)PoolWithTag = 0LL;
    *((_OWORD *)PoolWithTag + 1) = 0LL;
    PoolWithTag[4] = 0LL;
    v5[2] = PnpWatchdogWorkItem;
    WatchdogTimeout = PnpQueryWatchdogTimeout(v1);
    v8 = PnpWatchdogBugcheck;
    v7 = PnpQueryWatchdogTimeout(0LL);
    v3 = PnpWatchdogTimerAllocate(v5);
    v2[1] = v3;
    if ( !v3 )
    {
      ExFreePoolWithTag(v2, 0x57647050u);
      return 0LL;
    }
  }
  return v2;
}
