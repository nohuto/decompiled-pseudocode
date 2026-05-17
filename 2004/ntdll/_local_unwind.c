/*
 * XREFs of _local_unwind @ 0x18008D010
 * Callers:
 *     EvtIntReportEventWorker @ 0x18004ED30 (EvtIntReportEventWorker.c)
 *     LdrAddDllDirectory @ 0x18008B610 (LdrAddDllDirectory.c)
 * Callees:
 *     RtlUnwind @ 0x180050DC0 (RtlUnwind.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  RtlUnwind(a1, a2, 0LL, 0LL);
}
