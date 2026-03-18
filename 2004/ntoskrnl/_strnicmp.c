/*
 * XREFs of _strnicmp @ 0x1403CE880
 * Callers:
 *     MiResolveImageReferences @ 0x140747778 (MiResolveImageReferences.c)
 *     CmpPreserveSystemHiveData @ 0x14087617C (CmpPreserveSystemHiveData.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140A41E7C (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     CmpProcessForSimpleStringSub @ 0x140A4203C (CmpProcessForSimpleStringSub.c)
 *     IopStoreArcInformation @ 0x140A4D76C (IopStoreArcInformation.c)
 *     CmpAppendSection @ 0x140A59DB8 (CmpAppendSection.c)
 * Callees:
 *     __ascii_strnicmp @ 0x1403CE81C (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
