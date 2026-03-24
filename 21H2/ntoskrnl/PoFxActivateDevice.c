/*
 * XREFs of PoFxActivateDevice @ 0x14036FCB4
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140738574 (PnpDeleteLockedDeviceNode.c)
 *     PipProcessDevNodeTree @ 0x140741204 (PipProcessDevNodeTree.c)
 *     PipEnumerateDevice @ 0x140746E28 (PipEnumerateDevice.c)
 *     PiProcessQueryDeviceState @ 0x140749A3C (PiProcessQueryDeviceState.c)
 *     PiProcessResourceRequirementsChanged @ 0x1408A26E8 (PiProcessResourceRequirementsChanged.c)
 *     PnpQueryStopDeviceNode @ 0x1408B8714 (PnpQueryStopDeviceNode.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408E5810 (PopFxUpdateVetoMaskWork.c)
 *     PopIssueDirectedPowerTransition @ 0x1408F0754 (PopIssueDirectedPowerTransition.c)
 * Callees:
 *     PopFxActivateDevice @ 0x14036FCD0 (PopFxActivateDevice.c)
 */

__int64 __fastcall PoFxActivateDevice(__int64 a1)
{
  return PopFxActivateDevice(a1, 0LL, 0LL);
}
