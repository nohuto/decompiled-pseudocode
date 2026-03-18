/*
 * XREFs of _vsnwprintf @ 0x1C00CBE04
 * Callers:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C008FCEC (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00AA808 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00B6A58 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ @ 0x1C0166BDC (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1C00CBE24 (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
