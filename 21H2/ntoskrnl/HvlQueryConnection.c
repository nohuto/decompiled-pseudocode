/*
 * XREFs of HvlQueryConnection @ 0x1403AF460
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x14021DF60 (RtlpLookupFunctionEntryForStackWalks.c)
 *     HvlPhase0Initialize @ 0x140796CFC (HvlPhase0Initialize.c)
 *     EtwpSysModuleRunDown @ 0x140797C98 (EtwpSysModuleRunDown.c)
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
