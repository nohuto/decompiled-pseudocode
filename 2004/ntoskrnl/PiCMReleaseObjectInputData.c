/*
 * XREFs of PiCMReleaseObjectInputData @ 0x1406C20C8
 * Callers:
 *     PiCMValidateDeviceInstance @ 0x1406C1CD8 (PiCMValidateDeviceInstance.c)
 *     PiCMGetObjectList @ 0x1406C1EF8 (PiCMGetObjectList.c)
 *     PiCMGetDeviceStatus @ 0x140705D6C (PiCMGetDeviceStatus.c)
 *     PiCMDeleteDevice @ 0x140719D8C (PiCMDeleteDevice.c)
 *     PiCMQueryRemove @ 0x14071CE68 (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14071D0C0 (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x140721CB4 (PiCMGetDeviceDepth.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140756934 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMCreateObject @ 0x1408ACAA4 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408ACC5C (PiCMDeleteClassKey.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1408ACD78 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1408ACE68 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1408AD0A4 (PiCMDeleteObject.c)
 *     PiCMGetObjectPropertyKeys @ 0x1408AD7EC (PiCMGetObjectPropertyKeys.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408ADFF8 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1402024E0 (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleaseObjectInputData(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v1);
  return 0LL;
}
