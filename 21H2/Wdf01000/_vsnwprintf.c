/*
 * XREFs of _vsnwprintf @ 0x1C00358A4
 * Callers:
 *     RtlWideCharArrayVPrintfWorker @ 0x1C0032CD8 (RtlWideCharArrayVPrintfWorker.c)
 *     RtlStringVPrintfWorkerW @ 0x1C0052D64 (RtlStringVPrintfWorkerW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1C00358C4 (_vsnwprintf_l.c)
 */

int __fastcall vsnwprintf(wchar_t *string, unsigned __int64 count, const wchar_t *format, char *ap)
{
  return vsnwprintf_l(string, count, format, 0LL, ap);
}
