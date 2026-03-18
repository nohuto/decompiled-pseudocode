/*
 * XREFs of PopSqmCreateDwordStreamEntry @ 0x140579E60
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14076D40C (PopBatteryApplyCompositeState.c)
 * Callees:
 *     <none>
 */

void __fastcall PopSqmCreateDwordStreamEntry(_DWORD *a1, int a2)
{
  a1[2] = a2;
  *a1 = 1;
}
