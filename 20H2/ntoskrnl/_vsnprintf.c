/*
 * XREFs of _vsnprintf @ 0x1403D0820
 * Callers:
 *     RtlStringCbVPrintfA @ 0x1403711DC (RtlStringCbVPrintfA.c)
 *     RtlStringVPrintfWorkerA @ 0x1403A7AA8 (RtlStringVPrintfWorkerA.c)
 *     RtlStringCchPrintfA @ 0x1403B6BA4 (RtlStringCchPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x1403D0840 (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
