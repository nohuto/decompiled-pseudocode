/*
 * XREFs of TtmpCalloutWatchdogCallback @ 0x1408FF2B0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14088B590 (DbgkWerCaptureLiveKernelDump.c)
 *     TtmiLogCalloutWatchdogCrashSkipped @ 0x140903F34 (TtmiLogCalloutWatchdogCrashSkipped.c)
 */

__int64 __fastcall TtmpCalloutWatchdogCallback(
        __int64 a1,
        ULONG a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  int v9; // ecx
  int v11; // [rsp+50h] [rbp-18h] BYREF
  _DWORD v12[2]; // [rsp+58h] [rbp-10h] BYREF

  v11 = 0;
  v12[1] = 0;
  v12[0] = 37;
  if ( NtPowerInformation(PowerInformationInternal, v12, 8u, &v11, 4u) < 0 )
  {
    v9 = -1;
  }
  else
  {
    v9 = v11;
    if ( TtmpDeviceCalloutCrashDumpEnabled && !v11 )
      KeBugCheckEx(a2, a3, a4, BugCheckParameter3, BugCheckParameter4);
  }
  TtmiLogCalloutWatchdogCrashSkipped(v9, a2, a3, a4, BugCheckParameter3, BugCheckParameter4);
  DbgkWerCaptureLiveKernelDump(
    L"TTMDCallout",
    a2,
    a3,
    a4,
    BugCheckParameter3,
    BugCheckParameter4,
    0LL,
    (__int64)xHalGetInterruptTranslator,
    0);
  return 0LL;
}
