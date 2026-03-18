/*
 * XREFs of _vsnprintf @ 0x1C00CCAA8
 * Callers:
 *     ?RtlStringCbPrintfA@@YAJPEAD_KPEBDZZ @ 0x1C002D234 (-RtlStringCbPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     ?RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1C0181234 (-RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 * Callees:
 *     _vsnprintf_l @ 0x1C00CCAC8 (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
