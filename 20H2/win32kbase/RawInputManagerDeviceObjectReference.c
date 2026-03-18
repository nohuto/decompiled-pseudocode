/*
 * XREFs of RawInputManagerDeviceObjectReference @ 0x1C0021BF0
 * Callers:
 *     RIMStartDeviceSpecificRead @ 0x1C0020CCC (RIMStartDeviceSpecificRead.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0021000 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     HMCreateHandleForObject @ 0x1C0021AA0 (HMCreateHandleForObject.c)
 *     rimOnPnpArrived @ 0x1C00240B8 (rimOnPnpArrived.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C006F364 (RIMFindSiblingPointerDeviceForMouse.c)
 *     RIMFindSiblingMouseDevice @ 0x1C0161B94 (RIMFindSiblingMouseDevice.c)
 *     RIMFindTouchDigitizerWithSize @ 0x1C0164690 (RIMFindTouchDigitizerWithSize.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C016C194 (RIMSignalOnPnpNotificationAndWait.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C018046C (RIMHandleTTMDeviceArrival.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
