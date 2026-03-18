/*
 * XREFs of HvlQueryConnection @ 0x1403A7200
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1402E86A0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     HvlPhase0Initialize @ 0x14077F23C (HvlPhase0Initialize.c)
 *     EtwpSysModuleRunDown @ 0x14077FFD8 (EtwpSysModuleRunDown.c)
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
