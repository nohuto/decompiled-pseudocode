/*
 * XREFs of _GetPowerTransitionsState@4 @ 0xEC8DE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall GetPowerTransitionsState(void *a1)
{
  qmemcpy(a1, (const void *)_gPowerTransitionsState[0], 0x3Cu);
}
