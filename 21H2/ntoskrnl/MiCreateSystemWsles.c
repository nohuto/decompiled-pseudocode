/*
 * XREFs of MiCreateSystemWsles @ 0x1402C0BD0
 * Callers:
 *     XmEmulateStream @ 0x140397208 (XmEmulateStream.c)
 *     MiCommitPageTablesForVad @ 0x1405F91A0 (MiCommitPageTablesForVad.c)
 *     MiUnloadSystemImage @ 0x1406D11C8 (MiUnloadSystemImage.c)
 *     MiReturnPageTablePageCommitment @ 0x1406EE990 (MiReturnPageTablePageCommitment.c)
 *     NtSetInformationThread @ 0x1406FCE80 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x14070A4B0 (NtSetInformationProcess.c)
 *     MiComputeProcessUserVa @ 0x140711CC0 (MiComputeProcessUserVa.c)
 *     MiSessionCreate @ 0x14078620C (MiSessionCreate.c)
 *     KiVerifyXcpt15 @ 0x140A1B320 (KiVerifyXcpt15.c)
 * Callees:
 *     <none>
 */

__int64 MiCreateSystemWsles()
{
  return 1LL;
}
