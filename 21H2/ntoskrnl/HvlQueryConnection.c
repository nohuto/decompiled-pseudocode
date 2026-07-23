/*
 * XREFs of HvlQueryConnection @ 0x1403AF5D0
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1402C2860 (RtlpLookupFunctionEntryForStackWalks.c)
 *     HvlPhase0Initialize @ 0x140796EFC (HvlPhase0Initialize.c)
 *     EtwpSysModuleRunDown @ 0x140797E98 (EtwpSysModuleRunDown.c)
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
