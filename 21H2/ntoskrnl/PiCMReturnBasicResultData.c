/*
 * XREFs of PiCMReturnBasicResultData @ 0x1405FF4A0
 * Callers:
 *     PiCMValidateDeviceInstance @ 0x1405FF280 (PiCMValidateDeviceInstance.c)
 *     PiCMDeleteDevice @ 0x14072BB1C (PiCMDeleteDevice.c)
 *     PiCMSetDeviceProblem @ 0x14072EDDC (PiCMSetDeviceProblem.c)
 *     PiCMDeviceAction @ 0x14072F140 (PiCMDeviceAction.c)
 *     PiCMSetObjectProperty @ 0x140747578 (PiCMSetObjectProperty.c)
 *     PiCMCreateObject @ 0x1408AFD04 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408AFEBC (PiCMDeleteClassKey.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1408AFFD8 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1408B00C8 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1408B0304 (PiCMDeleteObject.c)
 *     PiCMSetRegistryProperty @ 0x1408B10A0 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408B1258 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 */

__int64 __fastcall PiCMReturnBasicResultData(int a1, int a2, _QWORD *a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-18h]

  *a5 = 0;
  v6 = 0;
  if ( a4 >= 8 && a2 == 8 )
  {
    LODWORD(v8) = 8;
    HIDWORD(v8) = a1;
    ProbeForWrite(a3, a4, 4u);
    *a3 = v8;
    *a5 = 8;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
