/*
 * XREFs of ?ndisLiveBugCheck@@YAX_K000@Z @ 0x1C005EE2C
 * Callers:
 *     ndisReportTimeoutWaitingForExternalDriver @ 0x1C0121C58 (ndisReportTimeoutWaitingForExternalDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisLiveBugCheck(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  DbgkWerCaptureLiveKernelDump(L"NDIS", 350LL, a1, a2, a3, a4, 0LL, 0LL, 0);
}
