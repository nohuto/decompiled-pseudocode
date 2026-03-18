/*
 * XREFs of PiCMReturnBasicResultData @ 0x1406C2524
 * Callers:
 *     PiCMValidateDeviceInstance @ 0x1406C1CD8 (PiCMValidateDeviceInstance.c)
 *     PiCMDeleteDevice @ 0x140719D8C (PiCMDeleteDevice.c)
 *     PiCMSetDeviceProblem @ 0x14071CD5C (PiCMSetDeviceProblem.c)
 *     PiCMDeviceAction @ 0x14071D0C0 (PiCMDeviceAction.c)
 *     PiCMSetObjectProperty @ 0x1407570E8 (PiCMSetObjectProperty.c)
 *     PiCMCreateObject @ 0x1408ACAA4 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408ACC5C (PiCMDeleteClassKey.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1408ACD78 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1408ACE68 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1408AD0A4 (PiCMDeleteObject.c)
 *     PiCMSetRegistryProperty @ 0x1408ADE40 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408ADFF8 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
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
