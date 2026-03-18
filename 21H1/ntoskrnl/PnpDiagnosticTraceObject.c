/*
 * XREFs of PnpDiagnosticTraceObject @ 0x14036206C
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x14036B1A0 (PnpDeviceCompletionRoutine.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x1407118A0 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140711970 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14071B5B4 (PnpQueueQueryAndRemoveEvent.c)
 *     PnpStartDeviceNode @ 0x140723644 (PnpStartDeviceNode.c)
 *     IopLoadDriver @ 0x140725EF8 (IopLoadDriver.c)
 *     PipEnumerateDevice @ 0x14072C4B8 (PipEnumerateDevice.c)
 *     PiDevCfgProcessDevice @ 0x140734D34 (PiDevCfgProcessDevice.c)
 *     IopUnloadDriver @ 0x140754A50 (IopUnloadDriver.c)
 *     PnpRebalance @ 0x1408B4384 (PnpRebalance.c)
 *     PnpInitializeBootStartDriver @ 0x140A57548 (PnpInitializeBootStartDriver.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x140A66CA0 (PnpEarlyLaunchImageNotificationPreProcess.c)
 *     PnpEarlyLaunchImageNotificationPostProcess @ 0x140A67110 (PnpEarlyLaunchImageNotificationPostProcess.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C70 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
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
