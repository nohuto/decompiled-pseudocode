/*
 * XREFs of HvlQueryConnection @ 0x1403AAED0
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x14032D7E0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     HvlPhase0Initialize @ 0x14077FA4C (HvlPhase0Initialize.c)
 *     EtwpSysModuleRunDown @ 0x1407809B8 (EtwpSysModuleRunDown.c)
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
