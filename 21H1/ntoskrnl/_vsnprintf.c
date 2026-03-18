/*
 * XREFs of _vsnprintf @ 0x1403CCD50
 * Callers:
 *     RtlStringCbVPrintfA @ 0x14036E65C (RtlStringCbVPrintfA.c)
 *     RtlStringVPrintfWorkerA @ 0x1403A9378 (RtlStringVPrintfWorkerA.c)
 *     RtlStringCchPrintfA @ 0x1403B33E4 (RtlStringCchPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x1403CCD70 (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
