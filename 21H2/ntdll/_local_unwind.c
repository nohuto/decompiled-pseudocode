/*
 * XREFs of _local_unwind @ 0x18008D710
 * Callers:
 *     EvtIntReportEventWorker @ 0x18004FE90 (EvtIntReportEventWorker.c)
 *     LdrAddDllDirectory @ 0x18008BD10 (LdrAddDllDirectory.c)
 * Callees:
 *     RtlUnwind @ 0x180051E70 (RtlUnwind.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  RtlUnwind(a1, a2, 0LL, 0LL);
}
