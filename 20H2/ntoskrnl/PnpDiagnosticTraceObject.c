/*
 * XREFs of PnpDiagnosticTraceObject @ 0x140364A08
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x14036D250 (PnpDeviceCompletionRoutine.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140721440 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140721510 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14072B3D0 (PnpQueueQueryAndRemoveEvent.c)
 *     PipEnumerateDevice @ 0x140737BC8 (PipEnumerateDevice.c)
 *     IopLoadDriver @ 0x140737DD0 (IopLoadDriver.c)
 *     PnpStartDeviceNode @ 0x14073AFA8 (PnpStartDeviceNode.c)
 *     PiDevCfgProcessDevice @ 0x14073EAE0 (PiDevCfgProcessDevice.c)
 *     IopUnloadDriver @ 0x140766018 (IopUnloadDriver.c)
 *     PnpRebalance @ 0x1408BB2C4 (PnpRebalance.c)
 *     PnpInitializeBootStartDriver @ 0x140A5D948 (PnpInitializeBootStartDriver.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x140A6D950 (PnpEarlyLaunchImageNotificationPreProcess.c)
 *     PnpEarlyLaunchImageNotificationPostProcess @ 0x140A6DDC0 (PnpEarlyLaunchImageNotificationPostProcess.c)
 * Callees:
 *     EtwWriteEx @ 0x14020E0B0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PnpDiagnosticTraceObject(PCEVENT_DESCRIPTOR EventDescriptor, unsigned __int16 *a2)
{
  REGHANDLE v2; // rbx
  int v6; // r8d
  __int16 v7; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  __int64 v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v2 = PnpEtwHandle;
  if ( !PnpEtwHandle || !EtwEventEnabled(PnpEtwHandle, EventDescriptor) )
    return 0;
  v6 = *a2;
  UserData.Reserved = 0;
  v11 = 0;
  v7 = (unsigned __int16)v6 >> 1;
  UserData.Ptr = (ULONGLONG)&v7;
  v9 = *((_QWORD *)a2 + 1);
  UserData.Size = 2;
  v10 = v6;
  return EtwWriteEx(v2, EventDescriptor, 0LL, 0, 0LL, 0LL, 2u, &UserData);
}
