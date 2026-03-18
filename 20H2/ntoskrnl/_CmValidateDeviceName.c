/*
 * XREFs of _CmValidateDeviceName @ 0x14066DD50
 * Callers:
 *     _CmGetDeviceRegKeyPath @ 0x14066DBCC (_CmGetDeviceRegKeyPath.c)
 *     _PnpDispatchDevice @ 0x1406E9750 (_PnpDispatchDevice.c)
 *     PiCMDeleteDevice @ 0x140727D7C (PiCMDeleteDevice.c)
 *     PiCMSetDeviceProblem @ 0x14072ABF8 (PiCMSetDeviceProblem.c)
 *     PiCMQueryRemove @ 0x14072AD04 (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14072AF5C (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x14072FDC4 (PiCMGetDeviceDepth.c)
 *     _CmGetDeviceInterfaceName @ 0x140744F1C (_CmGetDeviceInterfaceName.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140765574 (PiCMGetRelatedDeviceInstance.c)
 *     _CmEnumSubkeyCallback @ 0x1407A7F60 (_CmEnumSubkeyCallback.c)
 *     PiCMCreateDevice @ 0x1408B1E70 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1408B2FC0 (PiCMGenerateDeviceInstance.c)
 *     PiCMRegisterDeviceInterface @ 0x1408B374C (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x140267ED4 (RtlUnalignedStringCchLengthW.c)
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
