/*
 * XREFs of RawInputManagerDeviceObjectReference @ 0x1C005A910
 * Callers:
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C004E030 (RIMFindSiblingPointerDeviceForMouse.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0059A04 (RIMStartDeviceSpecificRead.c)
 *     rimOnPnpArrived @ 0x1C0059E98 (rimOnPnpArrived.c)
 *     HMCreateHandleForObject @ 0x1C005A7C0 (HMCreateHandleForObject.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C005A970 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     RIMFindSiblingMouseDevice @ 0x1C016A444 (RIMFindSiblingMouseDevice.c)
 *     RIMFindTouchDigitizerWithSize @ 0x1C016CF40 (RIMFindTouchDigitizerWithSize.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C01748F4 (RIMSignalOnPnpNotificationAndWait.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C01886AC (RIMHandleTTMDeviceArrival.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectReference(void *a1)
{
  __int64 v1; // rcx
  NTSTATUS v2; // ebx

  v2 = ObReferenceObjectByPointer(a1, 3u, ExRawInputManagerObjectType, 0);
  if ( v2 < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v1);
  return (unsigned int)v2;
}
