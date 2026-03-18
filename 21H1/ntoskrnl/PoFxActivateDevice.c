/*
 * XREFs of PoFxActivateDevice @ 0x14036B634
 * Callers:
 *     PipProcessDevNodeTree @ 0x140726894 (PipProcessDevNodeTree.c)
 *     PipEnumerateDevice @ 0x14072C4B8 (PipEnumerateDevice.c)
 *     PiProcessQueryDeviceState @ 0x14072E914 (PiProcessQueryDeviceState.c)
 *     PnpDeleteLockedDeviceNode @ 0x140733DB4 (PnpDeleteLockedDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x14089E2C8 (PiProcessResourceRequirementsChanged.c)
 *     PnpQueryStopDeviceNode @ 0x1408B42F4 (PnpQueryStopDeviceNode.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408E0F50 (PopFxUpdateVetoMaskWork.c)
 *     PopIssueDirectedPowerTransition @ 0x1408EC0C4 (PopIssueDirectedPowerTransition.c)
 * Callees:
 *     PopFxActivateDevice @ 0x14036B650 (PopFxActivateDevice.c)
 */

__int64 __fastcall PoFxActivateDevice(__int64 a1)
{
  return PopFxActivateDevice(a1, 0LL, 0LL);
}
