/*
 * XREFs of RaidAdapterIsRegisteredForIdleDetection @ 0x1C002C32C
 * Callers:
 *     StorPortUnitIdleState @ 0x1C0040970 (StorPortUnitIdleState.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0072FB0 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidAdapterIsRegisteredForIdleDetection(__int64 a1)
{
  return *(_QWORD *)(a1 + 5088) != 0LL;
}
