/*
 * XREFs of MiCreateSystemWsles @ 0x14025A450
 * Callers:
 *     XmEmulateStream @ 0x1403948D8 (XmEmulateStream.c)
 *     MiReturnPageTablePageCommitment @ 0x1406084D0 (MiReturnPageTablePageCommitment.c)
 *     NtSetInformationThread @ 0x140673B60 (NtSetInformationThread.c)
 *     MiCommitPageTablesForVad @ 0x1406970B0 (MiCommitPageTablesForVad.c)
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 *     MiComputeProcessUserVa @ 0x1406B4A38 (MiComputeProcessUserVa.c)
 *     MiSessionCreate @ 0x140773E2C (MiSessionCreate.c)
 *     KiVerifyXcpt15 @ 0x140A18320 (KiVerifyXcpt15.c)
 * Callees:
 *     <none>
 */

__int64 MiCreateSystemWsles()
{
  return 1LL;
}
