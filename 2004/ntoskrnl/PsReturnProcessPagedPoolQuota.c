/*
 * XREFs of PsReturnProcessPagedPoolQuota @ 0x140220940
 * Callers:
 *     MiDeletePartialVad @ 0x140251734 (MiDeletePartialVad.c)
 *     FsRtlCancelNotify @ 0x1403399D0 (FsRtlCancelNotify.c)
 *     ExpAllocateHandleTable @ 0x1405D0AF8 (ExpAllocateHandleTable.c)
 *     MiReturnVadQuota @ 0x1405F8B20 (MiReturnVadQuota.c)
 *     MiInsertVadCharges @ 0x1405FE050 (MiInsertVadCharges.c)
 *     LpcExitProcess @ 0x14061AD78 (LpcExitProcess.c)
 *     ExpFreeHandleTable @ 0x14065C994 (ExpFreeHandleTable.c)
 *     ExpFreeTablePagedPool @ 0x14065CAFC (ExpFreeTablePagedPool.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1406DB904 (AlpcpReleasePagedPoolQuota.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406DFC20 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406E08E0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x1406E0F00 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x1406E144C (FsRtlNotifyCleanupOneEntry.c)
 * Callees:
 *     PspReturnQuota @ 0x140288EF0 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].AffinityPadding[7], a1, 1LL, a2);
  return result;
}
