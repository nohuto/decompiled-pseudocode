/*
 * XREFs of PiCMReleaseObjectInputData @ 0x1406B1E28
 * Callers:
 *     PiCMValidateDeviceInstance @ 0x1406B1A38 (PiCMValidateDeviceInstance.c)
 *     PiCMGetObjectList @ 0x1406B1C58 (PiCMGetObjectList.c)
 *     PiCMGetDeviceStatus @ 0x1406B2C68 (PiCMGetDeviceStatus.c)
 *     PiCMDeleteDevice @ 0x1407179FC (PiCMDeleteDevice.c)
 *     PiCMQueryRemove @ 0x14071AEE8 (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14071B140 (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x14071FDF4 (PiCMGetDeviceDepth.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1407522A4 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMCreateObject @ 0x1408AB784 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408AB93C (PiCMDeleteClassKey.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1408ABA58 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1408ABB48 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1408ABD84 (PiCMDeleteObject.c)
 *     PiCMGetObjectPropertyKeys @ 0x1408AC4CC (PiCMGetObjectPropertyKeys.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408ACCD8 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1402E5DD0 (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleaseObjectInputData(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v1);
  return 0LL;
}
