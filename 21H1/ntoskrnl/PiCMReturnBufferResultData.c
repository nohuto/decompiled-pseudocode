/*
 * XREFs of PiCMReturnBufferResultData @ 0x1406A9704
 * Callers:
 *     PiCMGetObjectProperty @ 0x1406A6ABC (PiCMGetObjectProperty.c)
 *     PiCMGetRegistryProperty @ 0x1406B1180 (PiCMGetRegistryProperty.c)
 *     PiCMGetObjectList @ 0x1406B1C58 (PiCMGetObjectList.c)
 *     PiCMGetDeviceInterfaceList @ 0x1406B3B78 (PiCMGetDeviceInterfaceList.c)
 *     PiCMGetDeviceIdList @ 0x1406D4004 (PiCMGetDeviceIdList.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1407171C8 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMQueryRemove @ 0x14071AEE8 (PiCMQueryRemove.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1407522A4 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMCreateDevice @ 0x1408AB020 (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x1408ABF4C (PiCMEnumerateSubKeys.c)
 *     PiCMGetObjectPropertyKeys @ 0x1408AC4CC (PiCMGetObjectPropertyKeys.c)
 *     PiCMRegisterDeviceInterface @ 0x1408AC8FC (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 */

__int64 __fastcall PiCMReturnBufferResultData(
        unsigned int a1,
        unsigned int a2,
        int a3,
        const void *a4,
        unsigned int Size,
        int a6,
        _DWORD *Address,
        unsigned int Length,
        _DWORD *a9)
{
  unsigned int v10; // ebx
  __int128 v12; // [rsp+20h] [rbp-38h]

  *a9 = 0;
  v10 = 0;
  if ( Length >= Size + 20 && a6 == 20 )
  {
    LODWORD(v12) = 20;
    *(_QWORD *)((char *)&v12 + 4) = __PAIR64__(a2, a1);
    HIDWORD(v12) = a3;
    ProbeForWrite(Address, Length, 4u);
    *(_OWORD *)Address = v12;
    Address[4] = 0;
    if ( Size )
      memmove(Address + 4, a4, Size);
    *a9 = Size + 20;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v10;
}
