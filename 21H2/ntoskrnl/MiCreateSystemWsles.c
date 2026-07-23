/*
 * XREFs of MiCreateSystemWsles @ 0x14023F040
 * Callers:
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
 *     MiComputeProcessUserVa @ 0x1406C0310 (MiComputeProcessUserVa.c)
 *     MiCommitPageTablesForVad @ 0x1406E8900 (MiCommitPageTablesForVad.c)
 *     MiReturnPageTablePageCommitment @ 0x140705D70 (MiReturnPageTablePageCommitment.c)
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 *     MiSessionCreate @ 0x1407863CC (MiSessionCreate.c)
 *     KiVerifyXcpt15 @ 0x140A1C320 (KiVerifyXcpt15.c)
 * Callees:
 *     <none>
 */

__int64 MiCreateSystemWsles()
{
  return 1LL;
}
