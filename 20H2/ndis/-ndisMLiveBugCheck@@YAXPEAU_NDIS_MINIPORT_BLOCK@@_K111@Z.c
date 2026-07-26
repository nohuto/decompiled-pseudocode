/*
 * XREFs of ?ndisMLiveBugCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K111@Z @ 0x1C005EBE4
 * Callers:
 *     ndisNblTrackerWatchdogWorkerRoutine @ 0x1C0117710 (ndisNblTrackerWatchdogWorkerRoutine.c)
 *     ndisReportTimeoutWaitingForExternalDriver @ 0x1C0121C98 (ndisReportTimeoutWaitingForExternalDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMLiveBugCheck(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  DbgkWerCaptureLiveKernelDump(L"NDIS", 350LL, a2, a3, a4, a5, a1, ndisFailedAdapterLiveDumpCallback, 0);
}
