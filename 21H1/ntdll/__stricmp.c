/*
 * XREFs of __stricmp @ 0x4B2F7400
 * Callers:
 *     _LdrpGetDelayloadDescriptor@8 @ 0x4B32F7C7 (_LdrpGetDelayloadDescriptor@8.c)
 *     _AVrfpFindClosestThunkDuplicate@12 @ 0x4B338F06 (_AVrfpFindClosestThunkDuplicate@12.c)
 *     _ImportTablepInsertModuleSorted@8 @ 0x4B33E4EE (_ImportTablepInsertModuleSorted@8.c)
 * Callees:
 *     <none>
 */

int __cdecl _stricmp(const char *String1, const char *String2)
{
  return __ascii_stricmp(String1, String2);
}
