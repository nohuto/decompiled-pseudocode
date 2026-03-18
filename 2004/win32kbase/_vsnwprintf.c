/*
 * XREFs of _vsnwprintf @ 0x1C00CCBF4
 * Callers:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C002C0D4 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0049268 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0056EF8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ @ 0x1C016913C (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1C00CCC14 (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
