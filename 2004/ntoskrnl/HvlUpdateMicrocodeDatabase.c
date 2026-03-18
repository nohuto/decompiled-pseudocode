/*
 * XREFs of HvlUpdateMicrocodeDatabase @ 0x14088B820
 * Callers:
 *     <none>
 * Callees:
 *     HvlpCondenseMicrocode @ 0x14088B848 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14088B8BC (HvlpDynamicUpdateMicrocode.c)
 */

__int64 __fastcall HvlUpdateMicrocodeDatabase(__int64 a1, int a2)
{
  if ( a1 || a2 )
    return HvlpDynamicUpdateMicrocode();
  else
    return HvlpCondenseMicrocode();
}
