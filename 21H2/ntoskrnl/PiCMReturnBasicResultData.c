/*
 * XREFs of PiCMReturnBasicResultData @ 0x1406A0160
 * Callers:
 *     PiCMValidateDeviceInstance @ 0x14069FF40 (PiCMValidateDeviceInstance.c)
 *     PiCMDeleteDevice @ 0x14072B66C (PiCMDeleteDevice.c)
 *     PiCMSetDeviceProblem @ 0x14072EC10 (PiCMSetDeviceProblem.c)
 *     PiCMDeviceAction @ 0x14072EF74 (PiCMDeviceAction.c)
 *     PiCMSetObjectProperty @ 0x1407473B8 (PiCMSetObjectProperty.c)
 *     PiCMCreateObject @ 0x1408AFBA4 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408AFD5C (PiCMDeleteClassKey.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1408AFE78 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1408AFF68 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1408B01A4 (PiCMDeleteObject.c)
 *     PiCMSetRegistryProperty @ 0x1408B0F40 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408B10F8 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     ProbeForWrite @ 0x1406547A0 (ProbeForWrite.c)
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
