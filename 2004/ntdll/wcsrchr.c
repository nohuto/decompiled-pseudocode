/*
 * XREFs of wcsrchr @ 0x180091FA0
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180034EA0 (LdrLoadAlternateResourceModuleEx.c)
 *     EtwpGenerateFileName @ 0x18005814C (EtwpGenerateFileName.c)
 *     LdrpGetDataModulePath @ 0x18006A008 (LdrpGetDataModulePath.c)
 *     RtlpGetDirPath @ 0x18006CD64 (RtlpGetDirPath.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180072550 (RtlpResolveAssemblyStorageMapEntry.c)
 *     CompatCachepLookupCdb @ 0x180073484 (CompatCachepLookupCdb.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180084144 (LdrpGetModuleInfoFromVirtualMemory.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsrchr(const wchar_t *Str, wchar_t Ch)
{
  const wchar_t *v2; // r9
  wchar_t *v3; // r8
  __int16 v5; // ax

  v2 = Str;
  v3 = 0LL;
  while ( *Str++ )
    ;
  do
    v5 = *--Str;
  while ( Str != v2 && v5 != Ch );
  if ( v5 == Ch )
    return (wchar_t *)Str;
  return v3;
}
