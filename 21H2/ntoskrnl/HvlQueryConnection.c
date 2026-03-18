/*
 * XREFs of HvlQueryConnection @ 0x1403AC4C0
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140296DC0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     EtwpSysModuleRunDown @ 0x140814C74 (EtwpSysModuleRunDown.c)
 *     HvlPhase0Initialize @ 0x140824AA0 (HvlPhase0Initialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryConnection(_QWORD *a1)
{
  if ( !HvlpHypercallCodeVa )
    return 3221225473LL;
  if ( a1 )
    *a1 = HvlpHypercallCodeVa;
  return 0LL;
}
