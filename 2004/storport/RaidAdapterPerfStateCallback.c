/*
 * XREFs of RaidAdapterPerfStateCallback @ 0x1C003D900
 * Callers:
 *     <none>
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0011F5C (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaidAdapterPerfStateCallback(__int64 a1)
{
  return RaCallMiniportAdapterControl(a1 + 304);
}
