/*
 * XREFs of _wcsrchr @ 0x4B2FA900
 * Callers:
 *     _RtlpGetDirPath@8 @ 0x4B2B340C (_RtlpGetDirPath@8.c)
 *     _LdrpGetDataModulePath@28 @ 0x4B2B8EDE (_LdrpGetDataModulePath@28.c)
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 *     _CompatCachepLookupCdb@8 @ 0x4B2D1C4D (_CompatCachepLookupCdb@8.c)
 *     _RtlpResolveAssemblyStorageMapEntry@20 @ 0x4B2E28E9 (_RtlpResolveAssemblyStorageMapEntry@20.c)
 *     _LdrpGetModuleInfoFromVirtualMemory@28 @ 0x4B33F74C (_LdrpGetModuleInfoFromVirtualMemory@28.c)
 *     _EtwpGenerateFileName@12 @ 0x4B382A61 (_EtwpGenerateFileName@12.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsrchr(const wchar_t *Str, wchar_t Ch)
{
  const wchar_t *v2; // ecx
  __int16 v4; // ax

  v2 = Str;
  while ( *v2++ )
    ;
  do
    v4 = *--v2;
  while ( v2 != Str && v4 != Ch );
  if ( v4 == Ch )
    return (wchar_t *)v2;
  else
    return 0;
}
