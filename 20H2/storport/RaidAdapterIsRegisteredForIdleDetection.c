/*
 * XREFs of RaidAdapterIsRegisteredForIdleDetection @ 0x1C002D184
 * Callers:
 *     StorPortUnitIdleState @ 0x1C0041890 (StorPortUnitIdleState.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C00758E4 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidAdapterIsRegisteredForIdleDetection(__int64 a1)
{
  return *(_QWORD *)(a1 + 5088) != 0LL;
}
