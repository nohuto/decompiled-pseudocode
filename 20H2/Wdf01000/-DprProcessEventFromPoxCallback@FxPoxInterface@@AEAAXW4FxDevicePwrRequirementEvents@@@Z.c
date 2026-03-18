/*
 * XREFs of ?DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C008C088
 * Callers:
 *     ?PowerRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x1C000E4A4 (-PowerRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z.c)
 *     ?PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x1C000E50C (-PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z.c)
 *     ?DirectedPowerDownCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x1C008C650 (-DirectedPowerDownCallback@FxPoxInterface@@CAXPEAXK@Z.c)
 *     ?DirectedPowerUpCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x1C008C6C0 (-DirectedPowerUpCallback@FxPoxInterface@@CAXPEAXK@Z.c)
 * Callees:
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C000EF08 (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 */

void __fastcall FxPoxInterface::DprProcessEventFromPoxCallback(
        FxPoxInterface *this,
        FxDevicePwrRequirementEvents Event)
{
  KIRQL v4; // bl

  v4 = KfRaiseIrql(2u);
  FxDevicePwrRequirementMachine::ProcessEvent(this->m_DevicePowerRequirementMachine, Event);
  KeLowerIrql(v4);
}
