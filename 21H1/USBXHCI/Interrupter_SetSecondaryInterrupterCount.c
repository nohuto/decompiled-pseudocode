/*
 * XREFs of Interrupter_SetSecondaryInterrupterCount @ 0x1C00058AC
 * Callers:
 *     Interrupter_PrepareHardware @ 0x1C006BBE0 (Interrupter_PrepareHardware.c)
 *     Controller_WdfEvtDeviceFilterRemoveResourceRequirements @ 0x1C006C550 (Controller_WdfEvtDeviceFilterRemoveResourceRequirements.c)
 *     Interrupter_DetermineSecondaryInterrupterCount @ 0x1C00761F0 (Interrupter_DetermineSecondaryInterrupterCount.c)
 * Callees:
 *     <none>
 */

void __fastcall Interrupter_SetSecondaryInterrupterCount(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 20) = a2;
}
