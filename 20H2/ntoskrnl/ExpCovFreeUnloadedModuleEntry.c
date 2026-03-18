/*
 * XREFs of ExpCovFreeUnloadedModuleEntry @ 0x140959B7C
 * Callers:
 *     ExpCovCreateUnloadedModuleEntry @ 0x14095987C (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x140959B00 (ExpCovDeleteUnloadedModuleEntry.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpCovFreeUnloadedModuleEntry(UNICODE_STRING *P)
{
  wchar_t *Buffer; // rcx

  if ( !P )
    return 3221225485LL;
  if ( P[1].Buffer )
    RtlFreeAnsiString(P + 1);
  if ( P[2].Buffer )
    RtlFreeAnsiString(P + 2);
  Buffer = P[3].Buffer;
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
  ExFreePoolWithTag(P, 0);
  return 0LL;
}
