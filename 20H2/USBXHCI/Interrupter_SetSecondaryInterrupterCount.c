/*
 * XREFs of Interrupter_SetSecondaryInterrupterCount @ 0x1C00058AC
 * Callers:
 *     Interrupter_PrepareHardware @ 0x1C006EE90 (Interrupter_PrepareHardware.c)
 *     Controller_WdfEvtDeviceFilterRemoveResourceRequirements @ 0x1C006F860 (Controller_WdfEvtDeviceFilterRemoveResourceRequirements.c)
 *     Interrupter_DetermineSecondaryInterrupterCount @ 0x1C00776C0 (Interrupter_DetermineSecondaryInterrupterCount.c)
 * Callees:
 *     <none>
 */

void __fastcall Interrupter_SetSecondaryInterrupterCount(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 20) = a2;
}
