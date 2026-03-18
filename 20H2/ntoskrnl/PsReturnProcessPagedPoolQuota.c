/*
 * XREFs of PsReturnProcessPagedPoolQuota @ 0x140230470
 * Callers:
 *     MiDeletePartialVad @ 0x14024FC00 (MiDeletePartialVad.c)
 *     FsRtlCancelNotify @ 0x14030C1F0 (FsRtlCancelNotify.c)
 *     MiInsertVadCharges @ 0x1406239C0 (MiInsertVadCharges.c)
 *     MiReturnVadQuota @ 0x140625D80 (MiReturnVadQuota.c)
 *     ExpFreeHandleTable @ 0x140631954 (ExpFreeHandleTable.c)
 *     ExpFreeTablePagedPool @ 0x140631ABC (ExpFreeTablePagedPool.c)
 *     LpcExitProcess @ 0x1406613A8 (LpcExitProcess.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1406854E4 (AlpcpReleasePagedPoolQuota.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406B7570 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406B8230 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x1406B8850 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x1406B8D9C (FsRtlNotifyCleanupOneEntry.c)
 *     ExpAllocateHandleTable @ 0x1406F55C8 (ExpAllocateHandleTable.c)
 * Callees:
 *     PspReturnQuota @ 0x1402175A0 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessPagedPoolQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(char **)(a1 + 1384), a1, 1u, a2);
  return result;
}
