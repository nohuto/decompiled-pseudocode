/*
 * XREFs of HvlUpdateMicrocodeDatabase @ 0x14088EA70
 * Callers:
 *     <none>
 * Callees:
 *     HvlpCondenseMicrocode @ 0x14088EA98 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14088EB0C (HvlpDynamicUpdateMicrocode.c)
 */

__int64 __fastcall HvlUpdateMicrocodeDatabase(__int64 a1, int a2)
{
  if ( a1 || a2 )
    return HvlpDynamicUpdateMicrocode();
  else
    return HvlpCondenseMicrocode();
}
