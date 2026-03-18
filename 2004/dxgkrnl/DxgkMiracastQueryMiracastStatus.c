/*
 * XREFs of DxgkMiracastQueryMiracastStatus @ 0x1C02CF5A8
 * Callers:
 *     DxgkNetDispQueryMiracastDisplayDeviceStatus @ 0x1C02248E0 (DxgkNetDispQueryMiracastDisplayDeviceStatus.c)
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0053200 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C02CDE1C (DpiMiracastGetDeviceContextFromName.c)
 */

__int64 __fastcall DxgkMiracastQueryMiracastStatus(const WCHAR *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 DeviceContextFromName; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 result; // rax

  DeviceContextFromName = DpiMiracastGetDeviceContextFromName(a1);
  v8 = DeviceContextFromName;
  if ( DeviceContextFromName )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromName + 32);
    *a2 = *(_DWORD *)(v8 + 408);
    *a3 = *(_DWORD *)(v8 + 416);
    *(_QWORD *)(v8 + 88) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v8 + 32);
    DpiMiracastReleaseMiracastDeviceContext((int *)v8, v8);
    return 0LL;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = -2147483642LL;
    WdLogEvent5_WdError(v9);
    result = 3221226021LL;
    *a3 = -2147483642;
  }
  return result;
}
