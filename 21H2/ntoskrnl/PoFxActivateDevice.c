/*
 * XREFs of PoFxActivateDevice @ 0x14036FE64
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140738734 (PnpDeleteLockedDeviceNode.c)
 *     PipProcessDevNodeTree @ 0x1407413C4 (PipProcessDevNodeTree.c)
 *     PipEnumerateDevice @ 0x140746FE8 (PipEnumerateDevice.c)
 *     PiProcessQueryDeviceState @ 0x140749BFC (PiProcessQueryDeviceState.c)
 *     PiProcessResourceRequirementsChanged @ 0x1408A2848 (PiProcessResourceRequirementsChanged.c)
 *     PnpQueryStopDeviceNode @ 0x1408B8874 (PnpQueryStopDeviceNode.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408E5970 (PopFxUpdateVetoMaskWork.c)
 *     PopIssueDirectedPowerTransition @ 0x1408F08B4 (PopIssueDirectedPowerTransition.c)
 * Callees:
 *     PopFxActivateDevice @ 0x14036FE80 (PopFxActivateDevice.c)
 */

__int64 __fastcall PoFxActivateDevice(__int64 a1)
{
  return PopFxActivateDevice(a1, 0LL, 0LL);
}
