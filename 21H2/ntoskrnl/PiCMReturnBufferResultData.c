/*
 * XREFs of PiCMReturnBufferResultData @ 0x140637784
 * Callers:
 *     PiCMGetObjectProperty @ 0x140634B3C (PiCMGetObjectProperty.c)
 *     PiCMGetObjectList @ 0x140638970 (PiCMGetObjectList.c)
 *     PiCMGetDeviceIdList @ 0x1406A6D64 (PiCMGetDeviceIdList.c)
 *     PiCMGetRegistryProperty @ 0x1406AAA50 (PiCMGetRegistryProperty.c)
 *     PiCMGetDeviceInterfaceList @ 0x1406ACD88 (PiCMGetDeviceInterfaceList.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x14072AE3C (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMQueryRemove @ 0x14072ED1C (PiCMQueryRemove.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1407687E4 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMCreateDevice @ 0x1408AF440 (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x1408B036C (PiCMEnumerateSubKeys.c)
 *     PiCMGetObjectPropertyKeys @ 0x1408B08EC (PiCMGetObjectPropertyKeys.c)
 *     PiCMRegisterDeviceInterface @ 0x1408B0D1C (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     memmove @ 0x140413F40 (memmove.c)
 *     ProbeForWrite @ 0x1406547A0 (ProbeForWrite.c)
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
