/*
 * XREFs of _vsnwprintf @ 0x1403D0700
 * Callers:
 *     RtlStringCbPrintfW @ 0x14020AEFC (RtlStringCbPrintfW.c)
 *     RtlStringVPrintfWorkerW @ 0x140267D54 (RtlStringVPrintfWorkerW.c)
 *     StringCchPrintfW @ 0x140329088 (StringCchPrintfW.c)
 *     RtlStringCchPrintfW @ 0x140340D00 (RtlStringCchPrintfW.c)
 *     RtlUnicodeStringPrintf @ 0x14036DE6C (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x14036DF30 (RtlUnicodeStringPrintfEx.c)
 *     StringVPrintfWorkerW @ 0x1405C2170 (StringVPrintfWorkerW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1403D0720 (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
