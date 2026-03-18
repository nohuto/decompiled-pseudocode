/*
 * XREFs of wcscmp @ 0x1403D35D0
 * Callers:
 *     PiDqDispatch @ 0x140646700 (PiDqDispatch.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406C8854 (SepCleanupLUIDDeviceMapDirectory.c)
 *     _CmValidateDeviceContainerName @ 0x1406E72D0 (_CmValidateDeviceContainerName.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406E9AEC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14075219C (PiDcUpdateDeviceContainerMembership.c)
 *     PiDcContainerRequiresConfiguration @ 0x140752898 (PiDcContainerRequiresConfiguration.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140753B50 (_CmGetDeviceContainerIdFromBase.c)
 *     EtwStartAutoLogger @ 0x1407ABE40 (EtwStartAutoLogger.c)
 *     HdlspAddLogEntry @ 0x1409F1AE0 (HdlspAddLogEntry.c)
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
