/*
 * XREFs of HUBSM_AddPsm20Event @ 0x1C000A260
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x1C000B3FC (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBSM_AddPsm20Event(__int64 a1, __int64 a2)
{
  return HUBSM_AddEvent(a1 + 272, a2);
}
