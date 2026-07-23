/*
 * XREFs of _RtlpMuiRegLoadRegistryInfo@8 @ 0x4B2ACDB0
 * Callers:
 *     _RtlpMuiRegCreateAndLoadRegistryInfo@4 @ 0x4B2AC270 (_RtlpMuiRegCreateAndLoadRegistryInfo@4.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     __RtlpMuiRegLoadInstalled@16 @ 0x4B2AC2C1 (__RtlpMuiRegLoadInstalled@16.c)
 *     _RtlpMuiRegFreeRegistryInfo@8 @ 0x4B2ACEB0 (_RtlpMuiRegFreeRegistryInfo@8.c)
 *     _RtlpLoadLanguageConfigList@12 @ 0x4B2ACFED (_RtlpLoadLanguageConfigList@12.c)
 *     _RtlpSetProcUserMachineLangList@8 @ 0x4B2D3D47 (_RtlpSetProcUserMachineLangList@8.c)
 *     _RtlpMuiRegLoadLicInformation@4 @ 0x4B2D50DF (_RtlpMuiRegLoadLicInformation@4.c)
 */

int __thiscall RtlpMuiRegLoadRegistryInfo(void *this, LANGID *a2, __int16 a3)
{
  int result; // eax
  void *v4; // [esp-4h] [ebp-14h]

  result = 0;
  if ( !a2 )
    return -1073741811;
  if ( (a3 & 0x800) != 0 )
  {
    result = RtlpMuiRegLoadLicInformation(a2);
    if ( result < 0 )
    {
      DbgPrint("*** RtlpMuiRegLoadLicInformation failed with status %x", result);
      this = v4;
      result = 0;
    }
  }
  if ( (a3 & 1) != 0 )
    result = _RtlpMuiRegLoadInstalled(a2, (int)this, (int)this);
  if ( result >= 0 )
  {
    if ( (a3 & 4) == 0 || (RtlpMuiRegFreeRegistryInfo(a2, 4), result = RtlpLoadLanguageConfigList(a2), result >= 0) )
    {
      if ( (a3 & 8) == 0 || (RtlpMuiRegFreeRegistryInfo(a2, 8), result = RtlpLoadLanguageConfigList(a2), result >= 0) )
      {
        if ( (a3 & 0x20) != 0 )
        {
          RtlpMuiRegFreeRegistryInfo(a2, 32);
          result = RtlpSetProcUserMachineLangList(a2, 1);
        }
        if ( result >= 0 )
        {
          if ( (a3 & 0x10) != 0 )
          {
            RtlpMuiRegFreeRegistryInfo(a2, 16);
            result = RtlpSetProcUserMachineLangList(a2, 0);
          }
          if ( result >= 0 )
            return (a3 & 0x200) == 0 ? result : 0;
        }
      }
    }
  }
  return result;
}
