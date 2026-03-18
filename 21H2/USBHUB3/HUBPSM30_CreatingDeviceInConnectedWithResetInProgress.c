/*
 * XREFs of HUBPSM30_CreatingDeviceInConnectedWithResetInProgress @ 0x1C0010AD0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_CreateNewDSM @ 0x1C002E6B0 (HUBMISC_CreateNewDSM.c)
 */

__int64 __fastcall HUBPSM30_CreatingDeviceInConnectedWithResetInProgress(__int64 a1)
{
  return HUBMISC_CreateNewDSM(*(_QWORD *)(a1 + 960));
}
