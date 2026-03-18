/*
 * XREFs of wcsstr @ 0x1403CFD50
 * Callers:
 *     BcpGetProgressMessages @ 0x1403B876C (BcpGetProgressMessages.c)
 *     SmUniqueIdParseProductName @ 0x1405976C0 (SmUniqueIdParseProductName.c)
 *     PfSnIsHostingApplication @ 0x1406509D0 (PfSnIsHostingApplication.c)
 *     EtwpGenerateFileName @ 0x140677150 (EtwpGenerateFileName.c)
 *     PiGetDeviceRegProperty @ 0x1406AFA48 (PiGetDeviceRegProperty.c)
 *     SiIsWinPEBoot @ 0x1406D1D00 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceName @ 0x1406D1D74 (SiGetBootDeviceName.c)
 *     SiGetBiosSystemPartition @ 0x14076622C (SiGetBiosSystemPartition.c)
 *     BiIsWinPEBoot @ 0x14076E5D4 (BiIsWinPEBoot.c)
 *     IopCheckIfNotNativeDriver @ 0x14088CEB0 (IopCheckIfNotNativeDriver.c)
 *     PiGetDeviceRegistryProperty @ 0x14089A0F8 (PiGetDeviceRegistryProperty.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x14096DAB0 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x14096EAAC (BiUpdateObjectReferenceInEfiEntry.c)
 *     SubstringMatch @ 0x14097B564 (SubstringMatch.c)
 *     PopGetBitlockerKeyLocation @ 0x1409923A0 (PopGetBitlockerKeyLocation.c)
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
