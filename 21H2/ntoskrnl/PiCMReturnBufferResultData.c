/*
 * XREFs of PiCMReturnBufferResultData @ 0x14062C594
 * Callers:
 *     PiCMGetDeviceIdList @ 0x140604994 (PiCMGetDeviceIdList.c)
 *     PiCMGetRegistryProperty @ 0x140609140 (PiCMGetRegistryProperty.c)
 *     PiCMGetDeviceInterfaceList @ 0x14060B478 (PiCMGetDeviceInterfaceList.c)
 *     PiCMGetObjectProperty @ 0x14062994C (PiCMGetObjectProperty.c)
 *     PiCMGetObjectList @ 0x14062D780 (PiCMGetObjectList.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x14072B2EC (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMQueryRemove @ 0x14072EEE8 (PiCMQueryRemove.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1407689A4 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMCreateDevice @ 0x1408AF5A0 (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x1408B04CC (PiCMEnumerateSubKeys.c)
 *     PiCMGetObjectPropertyKeys @ 0x1408B0A4C (PiCMGetObjectPropertyKeys.c)
 *     PiCMRegisterDeviceInterface @ 0x1408B0E7C (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
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
