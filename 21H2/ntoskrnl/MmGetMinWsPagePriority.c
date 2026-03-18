/*
 * XREFs of MmGetMinWsPagePriority @ 0x14024DA70
 * Callers:
 *     XmEmulateStream @ 0x1403A32AC (XmEmulateStream.c)
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 *     MiComputeProcessUserVa @ 0x14070A9C0 (MiComputeProcessUserVa.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     MiReturnPageTablePageCommitment @ 0x1407B92D0 (MiReturnPageTablePageCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1407BDB60 (MiCommitPageTablesForVad.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     KiVerifyXcpt15 @ 0x140AD6320 (KiVerifyXcpt15.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMinWsPagePriority()
{
  return 1LL;
}
