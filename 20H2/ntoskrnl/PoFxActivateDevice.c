/*
 * XREFs of PoFxActivateDevice @ 0x14036D6E4
 * Callers:
 *     PipProcessDevNodeTree @ 0x140735A50 (PipProcessDevNodeTree.c)
 *     PipEnumerateDevice @ 0x140737BC8 (PipEnumerateDevice.c)
 *     PiProcessQueryDeviceState @ 0x140739218 (PiProcessQueryDeviceState.c)
 *     PnpDeleteLockedDeviceNode @ 0x140741474 (PnpDeleteLockedDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x1408A5118 (PiProcessResourceRequirementsChanged.c)
 *     PnpQueryStopDeviceNode @ 0x1408BB234 (PnpQueryStopDeviceNode.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408E8010 (PopFxUpdateVetoMaskWork.c)
 *     PopIssueDirectedPowerTransition @ 0x1408F2F54 (PopIssueDirectedPowerTransition.c)
 * Callees:
 *     PopFxActivateDevice @ 0x14036D700 (PopFxActivateDevice.c)
 */

__int64 __fastcall PoFxActivateDevice(__int64 a1)
{
  return PopFxActivateDevice(a1, 0LL, 0LL);
}
