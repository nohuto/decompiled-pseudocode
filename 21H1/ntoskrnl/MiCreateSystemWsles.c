/*
 * XREFs of MiCreateSystemWsles @ 0x1402B3480
 * Callers:
 *     XmEmulateStream @ 0x140393D08 (XmEmulateStream.c)
 *     MiCommitPageTablesForVad @ 0x1405EDBB0 (MiCommitPageTablesForVad.c)
 *     NtSetInformationThread @ 0x1405FBA80 (NtSetInformationThread.c)
 *     MiReturnPageTablePageCommitment @ 0x14063D620 (MiReturnPageTablePageCommitment.c)
 *     MiComputeProcessUserVa @ 0x14064F668 (MiComputeProcessUserVa.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 *     MiSessionCreate @ 0x140771A1C (MiSessionCreate.c)
 *     KiVerifyXcpt15 @ 0x140A18320 (KiVerifyXcpt15.c)
 * Callees:
 *     <none>
 */

__int64 MiCreateSystemWsles()
{
  return 1LL;
}
