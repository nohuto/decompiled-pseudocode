/*
 * XREFs of wcsstr @ 0x1403D3820
 * Callers:
 *     BcpGetProgressMessages @ 0x1403BBA28 (BcpGetProgressMessages.c)
 *     SmUniqueIdParseProductName @ 0x14059B850 (SmUniqueIdParseProductName.c)
 *     PfSnIsHostingApplication @ 0x14064C6C0 (PfSnIsHostingApplication.c)
 *     PiGetDeviceRegProperty @ 0x140668D88 (PiGetDeviceRegProperty.c)
 *     SiIsWinPEBoot @ 0x1406C60A0 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceName @ 0x1406C6114 (SiGetBootDeviceName.c)
 *     EtwpGenerateFileName @ 0x140711F88 (EtwpGenerateFileName.c)
 *     SiGetBiosSystemPartition @ 0x140776C1C (SiGetBiosSystemPartition.c)
 *     BiIsWinPEBoot @ 0x14077EFE4 (BiIsWinPEBoot.c)
 *     IopCheckIfNotNativeDriver @ 0x140893D20 (IopCheckIfNotNativeDriver.c)
 *     PiGetDeviceRegistryProperty @ 0x1408A0F48 (PiGetDeviceRegistryProperty.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140974C20 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140975C1C (BiUpdateObjectReferenceInEfiEntry.c)
 *     SubstringMatch @ 0x1409826D4 (SubstringMatch.c)
 *     PopGetBitlockerKeyLocation @ 0x140999B40 (PopGetBitlockerKeyLocation.c)
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
