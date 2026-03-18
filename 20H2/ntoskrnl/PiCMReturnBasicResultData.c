/*
 * XREFs of PiCMReturnBasicResultData @ 0x1406EC9F8
 * Callers:
 *     PiCMValidateDeviceInstance @ 0x1406EC1AC (PiCMValidateDeviceInstance.c)
 *     PiCMDeleteDevice @ 0x140727D7C (PiCMDeleteDevice.c)
 *     PiCMSetDeviceProblem @ 0x14072ABF8 (PiCMSetDeviceProblem.c)
 *     PiCMDeviceAction @ 0x14072AF5C (PiCMDeviceAction.c)
 *     PiCMSetObjectProperty @ 0x140765D28 (PiCMSetObjectProperty.c)
 *     PiCMCreateObject @ 0x1408B25D4 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408B278C (PiCMDeleteClassKey.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1408B28A8 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1408B2998 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1408B2BD4 (PiCMDeleteObject.c)
 *     PiCMSetRegistryProperty @ 0x1408B3970 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408B3B28 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
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
