/*
 * XREFs of _CmValidateDeviceName @ 0x1405E1FC0
 * Callers:
 *     _CmGetDeviceRegKeyPath @ 0x1405E1E3C (_CmGetDeviceRegKeyPath.c)
 *     _PnpDispatchDevice @ 0x1406BEE10 (_PnpDispatchDevice.c)
 *     PiCMDeleteDevice @ 0x140719D8C (PiCMDeleteDevice.c)
 *     PiCMSetDeviceProblem @ 0x14071CD5C (PiCMSetDeviceProblem.c)
 *     PiCMQueryRemove @ 0x14071CE68 (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14071D0C0 (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x140721CB4 (PiCMGetDeviceDepth.c)
 *     _CmGetDeviceInterfaceName @ 0x140735A90 (_CmGetDeviceInterfaceName.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140756934 (PiCMGetRelatedDeviceInstance.c)
 *     _CmEnumSubkeyCallback @ 0x140798C30 (_CmEnumSubkeyCallback.c)
 *     PiCMCreateDevice @ 0x1408AC340 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1408AD490 (PiCMGenerateDeviceInstance.c)
 *     PiCMRegisterDeviceInterface @ 0x1408ADC1C (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x140202C64 (RtlUnalignedStringCchLengthW.c)
 */

__int64 __fastcall CmValidateDeviceName(__int64 a1, const wchar_t *a2)
{
  int v2; // ebx
  int v3; // edi
  NTSTATUS v4; // r8d
  __int16 *v5; // r11
  __int16 v6; // ax
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 1;
  if ( !a2 )
    return 3221225485LL;
  v4 = RtlUnalignedStringCchLengthW(a2, 0xC8uLL, &pcchLength);
  if ( v4 >= 0 )
  {
    v6 = *v5;
    if ( *v5 )
    {
      while ( (unsigned __int16)(v6 - 33) <= 0x5Eu && v6 != 44 )
      {
        if ( v6 == 92 )
        {
          if ( !v2 )
            return 3221225523LL;
          v2 = 0;
          ++v3;
        }
        else
        {
          ++v2;
        }
        v6 = v5[1];
        ++v5;
        if ( !v6 )
        {
          if ( v2 && v3 == 3 )
            return (unsigned int)v4;
          return 3221225523LL;
        }
      }
    }
  }
  return 3221225523LL;
}
