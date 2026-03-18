/*
 * XREFs of wcscmp @ 0x1403D0940
 * Callers:
 *     PiDqDispatch @ 0x1405D20D0 (PiDqDispatch.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406BF1AC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmValidateDeviceContainerName @ 0x1406C2BC0 (_CmValidateDeviceContainerName.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406F57C4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1407435BC (PiDcUpdateDeviceContainerMembership.c)
 *     PiDcContainerRequiresConfiguration @ 0x140743CB8 (PiDcContainerRequiresConfiguration.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140744F70 (_CmGetDeviceContainerIdFromBase.c)
 *     EtwStartAutoLogger @ 0x14079CB10 (EtwStartAutoLogger.c)
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
