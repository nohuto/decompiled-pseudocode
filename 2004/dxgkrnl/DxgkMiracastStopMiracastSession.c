/*
 * XREFs of DxgkMiracastStopMiracastSession @ 0x1C0055868
 * Callers:
 *     DxgkNetDispStopMiracastDisplayDevice @ 0x1C0224D80 (DxgkNetDispStopMiracastDisplayDevice.c)
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0053200 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0053450 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C02CDE1C (DpiMiracastGetDeviceContextFromName.c)
 */

__int64 __fastcall DxgkMiracastStopMiracastSession(const WCHAR *a1, struct _KEVENT *a2)
{
  char *DeviceContextFromName; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int *v6; // rdi
  __int64 v7; // rax
  unsigned int v9; // ebx

  DeviceContextFromName = (char *)DpiMiracastGetDeviceContextFromName(a1);
  v6 = (int *)DeviceContextFromName;
  if ( DeviceContextFromName )
  {
    v9 = DpiMiracastStopMiracastSessionSync(DeviceContextFromName, 0, 0LL, a2, 0x80u, 0);
    DpiMiracastReleaseMiracastDeviceContext(v6, (__int64)v6);
    return v9;
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = -2147483642LL;
    WdLogEvent5_WdError(v7);
    if ( a2 )
      ObfDereferenceObject(a2);
    return 2147483654LL;
  }
}
