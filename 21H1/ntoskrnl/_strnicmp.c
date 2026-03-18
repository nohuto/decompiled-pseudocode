/*
 * XREFs of _strnicmp @ 0x1403CDA40
 * Callers:
 *     MiResolveImageReferences @ 0x140745BF8 (MiResolveImageReferences.c)
 *     CmpPreserveSystemHiveData @ 0x140874E8C (CmpPreserveSystemHiveData.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140A48EEC (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     CmpProcessForSimpleStringSub @ 0x140A490AC (CmpProcessForSimpleStringSub.c)
 *     IopStoreArcInformation @ 0x140A56308 (IopStoreArcInformation.c)
 *     CmpAppendSection @ 0x140A5AD1C (CmpAppendSection.c)
 * Callees:
 *     __ascii_strnicmp @ 0x1403CD9DC (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
