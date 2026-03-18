/*
 * XREFs of MiCreateSystemWsles @ 0x140231820
 * Callers:
 *     XmEmulateStream @ 0x140396D98 (XmEmulateStream.c)
 *     NtSetInformationThread @ 0x14060E970 (NtSetInformationThread.c)
 *     MiReturnPageTablePageCommitment @ 0x1406265B0 (MiReturnPageTablePageCommitment.c)
 *     MiCommitPageTablesForVad @ 0x14067BDF0 (MiCommitPageTablesForVad.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 *     MiUnloadSystemImage @ 0x1406CB9B0 (MiUnloadSystemImage.c)
 *     MiComputeProcessUserVa @ 0x1406EF2A0 (MiComputeProcessUserVa.c)
 *     MiSessionCreate @ 0x14078242C (MiSessionCreate.c)
 *     KiVerifyXcpt15 @ 0x140A1E320 (KiVerifyXcpt15.c)
 * Callees:
 *     <none>
 */

__int64 MiCreateSystemWsles()
{
  return 1LL;
}
