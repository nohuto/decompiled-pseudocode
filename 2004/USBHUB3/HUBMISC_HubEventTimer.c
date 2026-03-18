/*
 * XREFs of HUBMISC_HubEventTimer @ 0x1C002B720
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x1C000AFFC (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBMISC_HubEventTimer(__int64 a1, __int64 a2)
{
  return HUBSM_AddEvent(a2 + 1264, 1002);
}
