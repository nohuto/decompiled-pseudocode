/*
 * XREFs of PnpAllocateWatchdog @ 0x1402D5A78
 * Callers:
 *     PnpEnableWatchdog @ 0x14074ECA8 (PnpEnableWatchdog.c)
 * Callees:
 *     PnpQueryWatchdogTimeout @ 0x1402D5AFC (PnpQueryWatchdogTimeout.c)
 *     PnpWatchdogTimerAllocate @ 0x14074F7B8 (PnpWatchdogTimerAllocate.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

_QWORD *PnpAllocateWatchdog()
{
  __int64 Pool2; // rax
  __int64 v1; // rcx
  _QWORD *v2; // rbx
  __int64 v3; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-38h] BYREF
  int WatchdogTimeout; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+3Ch] [rbp-1Ch]
  void (__fastcall __noreturn *v8)(); // [rsp+40h] [rbp-18h]

  v5[1] = 0LL;
  Pool2 = ExAllocatePool2(64LL, 40LL, 1466200144LL);
  v2 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    v5[0] = Pool2;
    LOBYTE(v1) = 1;
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
