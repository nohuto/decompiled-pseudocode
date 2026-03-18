/*
 * XREFs of PiCMReleaseObjectInputData @ 0x1406BACAC
 * Callers:
 *     PiCMDeviceAction @ 0x14065F3BC (PiCMDeviceAction.c)
 *     PiCMQueryRemove @ 0x14065F7D4 (PiCMQueryRemove.c)
 *     PiCMOpenDeviceKey @ 0x1406BA720 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x1406BA8F4 (PiCMOpenObjectKey.c)
 *     PiCMValidateDeviceInstance @ 0x140789AEC (PiCMValidateDeviceInstance.c)
 *     PiCMGetDeviceStatus @ 0x140789CFC (PiCMGetDeviceStatus.c)
 *     PiCMGetObjectList @ 0x140789E04 (PiCMGetObjectList.c)
 *     PiCMGetRelatedDeviceInstance @ 0x14078A748 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x140806A24 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMOpenClassKey @ 0x14081C354 (PiCMOpenClassKey.c)
 *     PiCMCreateObject @ 0x140954BA8 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140954D10 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140954E2C (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140955184 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140955274 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1409554B0 (PiCMDeleteObject.c)
 *     PiCMGetDeviceDepth @ 0x140955BAC (PiCMGetDeviceDepth.c)
 *     PiCMGetObjectPropertyKeys @ 0x140955CA4 (PiCMGetObjectPropertyKeys.c)
 *     PiCMUnregisterDeviceInterface @ 0x14095644C (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1402DF554 (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleaseObjectInputData(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v1);
  return 0LL;
}
