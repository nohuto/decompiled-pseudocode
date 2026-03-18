/*
 * XREFs of PnpDiagnosticTraceObject @ 0x1402D2774
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x1402DE5C0 (PnpDeviceCompletionRoutine.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14065FA0C (PnpQueueQueryAndRemoveEvent.c)
 *     PiDevCfgProcessDevice @ 0x140747740 (PiDevCfgProcessDevice.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140748E80 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PnpStartDeviceNode @ 0x140749C4C (PnpStartDeviceNode.c)
 *     IopLoadDriver @ 0x14074A178 (IopLoadDriver.c)
 *     PipEnumerateDevice @ 0x14074B420 (PipEnumerateDevice.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1407F3CF0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     IopUnloadDriver @ 0x140856DC0 (IopUnloadDriver.c)
 *     PnpRebalance @ 0x14095A02C (PnpRebalance.c)
 *     PnpInitializeBootStartDriver @ 0x140B11D58 (PnpInitializeBootStartDriver.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x140B24550 (PnpEarlyLaunchImageNotificationPreProcess.c)
 *     PnpEarlyLaunchImageNotificationPostProcess @ 0x140B25270 (PnpEarlyLaunchImageNotificationPostProcess.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
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
