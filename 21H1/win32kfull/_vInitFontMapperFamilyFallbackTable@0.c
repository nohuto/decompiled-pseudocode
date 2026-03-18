/*
 * XREFs of _vInitFontMapperFamilyFallbackTable@0 @ 0x293242
 * Callers:
 *     <none>
 * Callees:
 *     _PREALLOCMEM2@20 @ 0xEA002 (_PREALLOCMEM2@20.c)
 */

char *__stdcall vInitFontMapperFamilyFallbackTable()
{
  char *result; // eax
  int v1; // ecx
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [esp+0h] [ebp-3Ch] BYREF
  int v3; // [esp+1Ch] [ebp-20h]
  int v4; // [esp+20h] [ebp-1Ch]
  int v5; // [esp+24h] [ebp-18h]
  unsigned int Context; // [esp+38h] [ebp-4h] BYREF

  QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)QueryRegistryFontMapperFamilyFallbackListRoutine;
  Context = 0;
  memset(&QueryTable.Flags, 0, 24);
  v3 = 0;
  v4 = 0;
  v5 = 0;
  result = (char *)RtlQueryRegistryValues(3u, L"FontMapperFamilyFallbackDeprecated", &QueryTable, &Context, 0);
  if ( Context > gcfmffTable )
  {
    result = PREALLOCMEM2(gpfmffTable, gcfmffTable << 7, gcfmffTable << 7, 1179012423, v1);
    if ( result )
      gpfmffTable = (struct _FONTMAPPERFAMILYFALLBACK *)result;
  }
  return result;
}
