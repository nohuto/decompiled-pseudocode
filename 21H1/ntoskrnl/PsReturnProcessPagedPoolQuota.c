/*
 * XREFs of PsReturnProcessPagedPoolQuota @ 0x140279990
 * Callers:
 *     MiDeletePartialVad @ 0x1402AA764 (MiDeletePartialVad.c)
 *     FsRtlCancelNotify @ 0x1402FC690 (FsRtlCancelNotify.c)
 *     ExpFreeHandleTable @ 0x1405D6204 (ExpFreeHandleTable.c)
 *     ExpFreeTablePagedPool @ 0x1405D636C (ExpFreeTablePagedPool.c)
 *     MiReturnVadQuota @ 0x14062DB60 (MiReturnVadQuota.c)
 *     MiInsertVadCharges @ 0x140633090 (MiInsertVadCharges.c)
 *     LpcExitProcess @ 0x140660498 (LpcExitProcess.c)
 *     ExpAllocateHandleTable @ 0x140671618 (ExpAllocateHandleTable.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1406BA5F4 (AlpcpReleasePagedPoolQuota.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406BF6A0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406C0360 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x1406C0980 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x1406C0ECC (FsRtlNotifyCleanupOneEntry.c)
 * Callees:
 *     PspReturnQuota @ 0x14024C650 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessPagedPoolQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(char **)(a1 + 1384), a1, 1u, a2);
  return result;
}
