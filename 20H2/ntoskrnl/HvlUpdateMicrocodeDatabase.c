/*
 * XREFs of HvlUpdateMicrocodeDatabase @ 0x140891370
 * Callers:
 *     <none>
 * Callees:
 *     HvlpCondenseMicrocode @ 0x140891398 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14089140C (HvlpDynamicUpdateMicrocode.c)
 */

__int64 __fastcall HvlUpdateMicrocodeDatabase(__int64 a1, int a2)
{
  if ( a1 || a2 )
    return HvlpDynamicUpdateMicrocode();
  else
    return HvlpCondenseMicrocode();
}
