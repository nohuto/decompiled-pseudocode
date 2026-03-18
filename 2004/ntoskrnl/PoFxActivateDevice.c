/*
 * XREFs of PoFxActivateDevice @ 0x14036B704
 * Callers:
 *     PipProcessDevNodeTree @ 0x140726FC0 (PipProcessDevNodeTree.c)
 *     PipEnumerateDevice @ 0x140729138 (PipEnumerateDevice.c)
 *     PiProcessQueryDeviceState @ 0x14072A788 (PiProcessQueryDeviceState.c)
 *     PnpDeleteLockedDeviceNode @ 0x1407320D0 (PnpDeleteLockedDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x14089F5E8 (PiProcessResourceRequirementsChanged.c)
 *     PnpQueryStopDeviceNode @ 0x1408B5614 (PnpQueryStopDeviceNode.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408E21D0 (PopFxUpdateVetoMaskWork.c)
 *     PopIssueDirectedPowerTransition @ 0x1408ED344 (PopIssueDirectedPowerTransition.c)
 * Callees:
 *     PopFxActivateDevice @ 0x14036B720 (PopFxActivateDevice.c)
 */

__int64 __fastcall PoFxActivateDevice(__int64 a1)
{
  return PopFxActivateDevice(a1, 0LL, 0LL);
}
