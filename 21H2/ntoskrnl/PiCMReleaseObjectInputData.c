/*
 * XREFs of PiCMReleaseObjectInputData @ 0x14062D950
 * Callers:
 *     PiCMGetDeviceStatus @ 0x1405FF0C8 (PiCMGetDeviceStatus.c)
 *     PiCMValidateDeviceInstance @ 0x1405FF280 (PiCMValidateDeviceInstance.c)
 *     PiCMGetObjectList @ 0x14062D780 (PiCMGetObjectList.c)
 *     PiCMDeleteDevice @ 0x14072BB1C (PiCMDeleteDevice.c)
 *     PiCMQueryRemove @ 0x14072EEE8 (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14072F140 (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x140733FB8 (PiCMGetDeviceDepth.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1407689A4 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMCreateObject @ 0x1408AFD04 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408AFEBC (PiCMDeleteClassKey.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1408AFFD8 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1408B00C8 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1408B0304 (PiCMDeleteObject.c)
 *     PiCMGetObjectPropertyKeys @ 0x1408B0A4C (PiCMGetObjectPropertyKeys.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408B1258 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140252870 (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleaseObjectInputData(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v1);
  return 0LL;
}
