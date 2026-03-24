/*
 * XREFs of PnpDiagnosticTraceObject @ 0x140364C6C
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x14036F820 (PnpDeviceCompletionRoutine.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140725CE0 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140725DB0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14072F3E8 (PnpQueueQueryAndRemoveEvent.c)
 *     PiDevCfgProcessDevice @ 0x140739D90 (PiDevCfgProcessDevice.c)
 *     PnpStartDeviceNode @ 0x14073DF04 (PnpStartDeviceNode.c)
 *     IopLoadDriver @ 0x140740868 (IopLoadDriver.c)
 *     PipEnumerateDevice @ 0x140746E28 (PipEnumerateDevice.c)
 *     IopUnloadDriver @ 0x140769798 (IopUnloadDriver.c)
 *     PnpRebalance @ 0x1408B87A4 (PnpRebalance.c)
 *     PnpInitializeBootStartDriver @ 0x140A5E4B4 (PnpInitializeBootStartDriver.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x140A6AD90 (PnpEarlyLaunchImageNotificationPreProcess.c)
 *     PnpEarlyLaunchImageNotificationPostProcess @ 0x140A6B200 (PnpEarlyLaunchImageNotificationPostProcess.c)
 * Callees:
 *     EtwEventEnabled @ 0x14021BF30 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x14025DD10 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
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
