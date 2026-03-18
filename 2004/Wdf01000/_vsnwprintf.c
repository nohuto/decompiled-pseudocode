/*
 * XREFs of _vsnwprintf @ 0x1C001A3B4
 * Callers:
 *     RtlStringVPrintfWorkerW @ 0x1C002E3D0 (RtlStringVPrintfWorkerW.c)
 *     RtlWideCharArrayVPrintfWorker @ 0x1C002E558 (RtlWideCharArrayVPrintfWorker.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1C001A3D4 (_vsnwprintf_l.c)
 */

int __fastcall vsnwprintf(wchar_t *string, unsigned __int64 count, const wchar_t *format, char *ap)
{
  return vsnwprintf_l(string, count, format, 0LL, ap);
}
