/*
 * XREFs of PiCMReleaseObjectInputData @ 0x140638B40
 * Callers:
 *     PiCMGetObjectList @ 0x140638970 (PiCMGetObjectList.c)
 *     PiCMGetDeviceStatus @ 0x14069FD88 (PiCMGetDeviceStatus.c)
 *     PiCMValidateDeviceInstance @ 0x14069FF40 (PiCMValidateDeviceInstance.c)
 *     PiCMDeleteDevice @ 0x14072B66C (PiCMDeleteDevice.c)
 *     PiCMQueryRemove @ 0x14072ED1C (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14072EF74 (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x140733DF8 (PiCMGetDeviceDepth.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1407687E4 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMCreateObject @ 0x1408AFBA4 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408AFD5C (PiCMDeleteClassKey.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1408AFE78 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1408AFF68 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1408B01A4 (PiCMDeleteObject.c)
 *     PiCMGetObjectPropertyKeys @ 0x1408B08EC (PiCMGetObjectPropertyKeys.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408B10F8 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1402647E0 (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleaseObjectInputData(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v1);
  return 0LL;
}
