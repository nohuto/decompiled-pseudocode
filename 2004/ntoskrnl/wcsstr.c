/*
 * XREFs of wcsstr @ 0x1403D0B90
 * Callers:
 *     BcpGetProgressMessages @ 0x1403B959C (BcpGetProgressMessages.c)
 *     SmUniqueIdParseProductName @ 0x140597DB0 (SmUniqueIdParseProductName.c)
 *     PiGetDeviceRegProperty @ 0x1405DD1A8 (PiGetDeviceRegProperty.c)
 *     PfSnIsHostingApplication @ 0x1406B8B60 (PfSnIsHostingApplication.c)
 *     EtwpGenerateFileName @ 0x1406C6434 (EtwpGenerateFileName.c)
 *     SiIsWinPEBoot @ 0x1406F2CC0 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceName @ 0x1406F2D34 (SiGetBootDeviceName.c)
 *     SiGetBiosSystemPartition @ 0x140768614 (SiGetBiosSystemPartition.c)
 *     BiIsWinPEBoot @ 0x1407709E4 (BiIsWinPEBoot.c)
 *     IopCheckIfNotNativeDriver @ 0x14088E1D0 (IopCheckIfNotNativeDriver.c)
 *     PiGetDeviceRegistryProperty @ 0x14089B418 (PiGetDeviceRegistryProperty.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x14096EE50 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x14096FE4C (BiUpdateObjectReferenceInEfiEntry.c)
 *     SubstringMatch @ 0x14097C904 (SubstringMatch.c)
 *     PopGetBitlockerKeyLocation @ 0x1409939E0 (PopGetBitlockerKeyLocation.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsstr(const wchar_t *Str, const wchar_t *SubStr)
{
  wchar_t *v3; // r8
  wchar_t v5; // ax
  signed __int64 i; // r9
  const wchar_t *v7; // rdx

  v3 = (wchar_t *)Str;
  if ( !*SubStr )
    return (wchar_t *)Str;
  v5 = *Str;
  if ( !*Str )
    return 0LL;
  for ( i = (char *)Str - (char *)SubStr; ; i += 2LL )
  {
    v7 = SubStr;
    if ( v5 )
      break;
LABEL_9:
    if ( !*v7 )
      return v3;
    v5 = *++v3;
    if ( !*v3 )
      return 0LL;
  }
  while ( *v7 )
  {
    if ( *(const wchar_t *)((char *)v7 + i) == *v7 )
    {
      if ( *(const wchar_t *)((char *)++v7 + i) )
        continue;
    }
    goto LABEL_9;
  }
  return v3;
}
