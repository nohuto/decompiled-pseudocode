/*
 * XREFs of PspSetJobEnergyTrackingStateCallback @ 0x140713F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSetJobEnergyTrackingStateCallback(__int64 a1, _QWORD *a2)
{
  *(_QWORD *)(a1 + 1576) = *a2;
  return 0LL;
}
