/*
 * XREFs of _vsnwprintf @ 0x1403CCC30
 * Callers:
 *     RtlStringCbPrintfW @ 0x14025B494 (RtlStringCbPrintfW.c)
 *     RtlStringCchPrintfW @ 0x1402E2030 (RtlStringCchPrintfW.c)
 *     RtlStringVPrintfWorkerW @ 0x1402E5FB8 (RtlStringVPrintfWorkerW.c)
 *     StringCchPrintfW @ 0x14031B268 (StringCchPrintfW.c)
 *     RtlUnicodeStringPrintf @ 0x14036A8CC (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x14036A990 (RtlUnicodeStringPrintfEx.c)
 *     StringVPrintfWorkerW @ 0x1405BDDD8 (StringVPrintfWorkerW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1403CCC50 (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
