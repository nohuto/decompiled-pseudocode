/*
 * XREFs of wcsrchr @ 0x1800926A0
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180034EA0 (LdrLoadAlternateResourceModuleEx.c)
 *     EtwpGenerateFileName @ 0x18004C468 (EtwpGenerateFileName.c)
 *     LdrpGetDataModulePath @ 0x1800537A4 (LdrpGetDataModulePath.c)
 *     RtlpGetDirPath @ 0x18006DEA4 (RtlpGetDirPath.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180073680 (RtlpResolveAssemblyStorageMapEntry.c)
 *     CompatCachepLookupCdb @ 0x1800745B4 (CompatCachepLookupCdb.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180084644 (LdrpGetModuleInfoFromVirtualMemory.c)
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
