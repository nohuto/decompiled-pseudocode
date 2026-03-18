/*
 * XREFs of _vsnwprintf @ 0x1C00CC344
 * Callers:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0014BC8 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C003C318 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0049078 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ @ 0x1C016F48C (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1C00CC364 (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
