/*
 * XREFs of _strnicmp @ 0x1403D1510
 * Callers:
 *     MiResolveImageReferences @ 0x140756358 (MiResolveImageReferences.c)
 *     CmpPreserveSystemHiveData @ 0x14087BCEC (CmpPreserveSystemHiveData.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140A4811C (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     CmpProcessForSimpleStringSub @ 0x140A482DC (CmpProcessForSimpleStringSub.c)
 *     IopStoreArcInformation @ 0x140A5C708 (IopStoreArcInformation.c)
 *     CmpAppendSection @ 0x140A6111C (CmpAppendSection.c)
 * Callees:
 *     __ascii_strnicmp @ 0x1403D14AC (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
