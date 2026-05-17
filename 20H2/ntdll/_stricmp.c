/*
 * XREFs of _stricmp @ 0x18008D6F0
 * Callers:
 *     LdrpGetDelayloadDescriptor @ 0x1800CEC5C (LdrpGetDelayloadDescriptor.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x1800DAE54 (AVrfpFindClosestThunkDuplicate.c)
 *     ImportTablepInsertFunctionSorted @ 0x1800E08C0 (ImportTablepInsertFunctionSorted.c)
 * Callees:
 *     __ascii_stricmp @ 0x18008D6A0 (__ascii_stricmp.c)
 */

int __cdecl stricmp(const char *String1, const char *String2)
{
  return _ascii_stricmp((unsigned __int8 *)String1, (unsigned __int8 *)String2);
}
