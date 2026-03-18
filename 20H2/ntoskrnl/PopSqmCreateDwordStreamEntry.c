/*
 * XREFs of PopSqmCreateDwordStreamEntry @ 0x14057D890
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14077BE3C (PopBatteryApplyCompositeState.c)
 * Callees:
 *     <none>
 */

void __fastcall PopSqmCreateDwordStreamEntry(_DWORD *a1, int a2)
{
  a1[2] = a2;
  *a1 = 1;
}
