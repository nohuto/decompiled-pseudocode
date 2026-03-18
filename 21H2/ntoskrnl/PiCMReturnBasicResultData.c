/*
 * XREFs of PiCMReturnBasicResultData @ 0x14078A584
 * Callers:
 *     PiCMDeviceAction @ 0x14065F3BC (PiCMDeviceAction.c)
 *     PiCMSetObjectProperty @ 0x1406DC724 (PiCMSetObjectProperty.c)
 *     PiCMValidateDeviceInstance @ 0x140789AEC (PiCMValidateDeviceInstance.c)
 *     PiCMCreateObject @ 0x140954BA8 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140954D10 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140954E2C (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140955184 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140955274 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1409554B0 (PiCMDeleteObject.c)
 *     PiCMSetDeviceProblem @ 0x14095618C (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x140956298 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x14095644C (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
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
