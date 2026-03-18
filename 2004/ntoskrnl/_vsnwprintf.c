/*
 * XREFs of _vsnwprintf @ 0x1403CDA70
 * Callers:
 *     RtlStringVPrintfWorkerW @ 0x140202AE4 (RtlStringVPrintfWorkerW.c)
 *     RtlStringCchPrintfW @ 0x140272280 (RtlStringCchPrintfW.c)
 *     RtlStringCbPrintfW @ 0x14027DBC4 (RtlStringCbPrintfW.c)
 *     StringCchPrintfW @ 0x140358D18 (StringCchPrintfW.c)
 *     RtlUnicodeStringPrintf @ 0x14036BE8C (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x14036BF50 (RtlUnicodeStringPrintfEx.c)
 *     StringVPrintfWorkerW @ 0x1405BE4F8 (StringVPrintfWorkerW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1403CDA90 (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
