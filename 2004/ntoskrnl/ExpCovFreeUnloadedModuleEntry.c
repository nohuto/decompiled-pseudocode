/*
 * XREFs of ExpCovFreeUnloadedModuleEntry @ 0x140953DBC
 * Callers:
 *     ExpCovCreateUnloadedModuleEntry @ 0x140953ABC (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x140953D40 (ExpCovDeleteUnloadedModuleEntry.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
