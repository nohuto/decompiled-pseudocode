/*
 * XREFs of HvlUpdateMicrocodeDatabase @ 0x14088A500
 * Callers:
 *     <none>
 * Callees:
 *     HvlpCondenseMicrocode @ 0x14088A528 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14088A59C (HvlpDynamicUpdateMicrocode.c)
 */

__int64 __fastcall HvlUpdateMicrocodeDatabase(__int64 a1, int a2)
{
  if ( a1 || a2 )
    return HvlpDynamicUpdateMicrocode();
  else
    return HvlpCondenseMicrocode();
}
