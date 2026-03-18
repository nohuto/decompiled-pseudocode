/*
 * XREFs of PiCMReturnBasicResultData @ 0x1406B2284
 * Callers:
 *     PiCMValidateDeviceInstance @ 0x1406B1A38 (PiCMValidateDeviceInstance.c)
 *     PiCMDeleteDevice @ 0x1407179FC (PiCMDeleteDevice.c)
 *     PiCMSetDeviceProblem @ 0x14071ADDC (PiCMSetDeviceProblem.c)
 *     PiCMDeviceAction @ 0x14071B140 (PiCMDeviceAction.c)
 *     PiCMSetObjectProperty @ 0x14072CA48 (PiCMSetObjectProperty.c)
 *     PiCMCreateObject @ 0x1408AB784 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408AB93C (PiCMDeleteClassKey.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1408ABA58 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1408ABB48 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1408ABD84 (PiCMDeleteObject.c)
 *     PiCMSetRegistryProperty @ 0x1408ACB20 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408ACCD8 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
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
