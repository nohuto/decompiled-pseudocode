/*
 * XREFs of RawInputManagerDeviceObjectReference @ 0x1C00176A0
 * Callers:
 *     RIMStartDeviceSpecificRead @ 0x1C0015ACC (RIMStartDeviceSpecificRead.c)
 *     rimOnPnpArrived @ 0x1C0016384 (rimOnPnpArrived.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0016CB0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     HMCreateHandleForObject @ 0x1C0017550 (HMCreateHandleForObject.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C005B9F0 (RIMFindSiblingPointerDeviceForMouse.c)
 *     RIMFindSiblingMouseDevice @ 0x1C01640F4 (RIMFindSiblingMouseDevice.c)
 *     RIMFindTouchDigitizerWithSize @ 0x1C0166BF0 (RIMFindTouchDigitizerWithSize.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C016E5C4 (RIMSignalOnPnpNotificationAndWait.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C01829AC (RIMHandleTTMDeviceArrival.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectReference(void *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  NTSTATUS v3; // ebx
  __int64 v4; // r8
  __int64 v5; // r9

  v3 = ObReferenceObjectByPointer(a1, 3u, ExRawInputManagerObjectType, 0);
  if ( v3 < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v4, v5);
  return (unsigned int)v3;
}
