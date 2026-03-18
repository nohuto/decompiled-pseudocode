/*
 * XREFs of _vsnprintf @ 0x1403CDB90
 * Callers:
 *     RtlStringCbVPrintfA @ 0x14036F28C (RtlStringCbVPrintfA.c)
 *     RtlStringVPrintfWorkerA @ 0x1403A56A8 (RtlStringVPrintfWorkerA.c)
 *     RtlStringCchPrintfA @ 0x1403C4CDC (RtlStringCchPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x1403CDBB0 (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
