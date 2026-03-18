/*
 * XREFs of PiCMReturnBufferResultData @ 0x1405DB0D4
 * Callers:
 *     PiCMGetObjectProperty @ 0x1405D848C (PiCMGetObjectProperty.c)
 *     PiCMGetDeviceInterfaceList @ 0x1406BDFC8 (PiCMGetDeviceInterfaceList.c)
 *     PiCMGetObjectList @ 0x1406C1EF8 (PiCMGetObjectList.c)
 *     PiCMGetDeviceIdList @ 0x1406F6DF4 (PiCMGetDeviceIdList.c)
 *     PiCMGetRegistryProperty @ 0x1406FA554 (PiCMGetRegistryProperty.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x140719558 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMQueryRemove @ 0x14071CE68 (PiCMQueryRemove.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140756934 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMCreateDevice @ 0x1408AC340 (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x1408AD26C (PiCMEnumerateSubKeys.c)
 *     PiCMGetObjectPropertyKeys @ 0x1408AD7EC (PiCMGetObjectPropertyKeys.c)
 *     PiCMRegisterDeviceInterface @ 0x1408ADC1C (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
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
