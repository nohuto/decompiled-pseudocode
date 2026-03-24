/*
 * XREFs of _vsnwprintf @ 0x1C001A554
 * Callers:
 *     RtlStringVPrintfWorkerW @ 0x1C002E450 (RtlStringVPrintfWorkerW.c)
 *     RtlWideCharArrayVPrintfWorker @ 0x1C002E5D8 (RtlWideCharArrayVPrintfWorker.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1C001A574 (_vsnwprintf_l.c)
 */

int __fastcall vsnwprintf(wchar_t *string, unsigned __int64 count, const wchar_t *format, char *ap)
{
  return vsnwprintf_l(string, count, format, 0LL, ap);
}
