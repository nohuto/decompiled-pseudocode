/*
 * XREFs of _stricmp @ 0x18008D5F0
 * Callers:
 *     LdrpGetDelayloadDescriptor @ 0x1800CEA7C (LdrpGetDelayloadDescriptor.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x1800DAAB4 (AVrfpFindClosestThunkDuplicate.c)
 *     ImportTablepInsertFunctionSorted @ 0x1800E0520 (ImportTablepInsertFunctionSorted.c)
 * Callees:
 *     __ascii_stricmp @ 0x18008D5A0 (__ascii_stricmp.c)
 */

int __cdecl stricmp(const char *String1, const char *String2)
{
  return _ascii_stricmp((unsigned __int8 *)String1, (unsigned __int8 *)String2);
}
