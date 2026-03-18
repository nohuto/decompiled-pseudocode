/*
 * XREFs of wcscmp @ 0x1403CFB00
 * Callers:
 *     PiDqDispatch @ 0x1406A09B0 (PiDqDispatch.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406AC24C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D2BF4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     _CmValidateDeviceContainerName @ 0x1406D9DE0 (_CmValidateDeviceContainerName.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140741A3C (PiDcUpdateDeviceContainerMembership.c)
 *     PiDcContainerRequiresConfiguration @ 0x140742138 (PiDcContainerRequiresConfiguration.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1407433F0 (_CmGetDeviceContainerIdFromBase.c)
 *     EtwStartAutoLogger @ 0x1407A05CC (EtwStartAutoLogger.c)
 *     HdlspAddLogEntry @ 0x1409EBAE0 (HdlspAddLogEntry.c)
 * Callees:
 *     <none>
 */

int __cdecl wcscmp(const wchar_t *Str1, const wchar_t *Str2)
{
  int v2; // eax
  unsigned int v3; // r8d
  signed __int64 v4; // rcx

  v2 = *Str2;
  v3 = *Str1 - v2;
  if ( !v3 )
  {
    v4 = (char *)Str1 - (char *)Str2;
    do
    {
      if ( !(_WORD)v2 )
        break;
      v2 = *++Str2;
      v3 = *(const wchar_t *)((char *)Str2 + v4) - v2;
    }
    while ( !v3 );
  }
  return ((int)v3 > 0) - (v3 >> 31);
}
