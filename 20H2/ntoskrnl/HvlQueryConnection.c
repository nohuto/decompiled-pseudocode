/*
 * XREFs of HvlQueryConnection @ 0x1403A8A50
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140228100 (RtlpLookupFunctionEntryForStackWalks.c)
 *     HvlPhase0Initialize @ 0x14078C780 (HvlPhase0Initialize.c)
 *     EtwpSysModuleRunDown @ 0x14078D8E8 (EtwpSysModuleRunDown.c)
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
