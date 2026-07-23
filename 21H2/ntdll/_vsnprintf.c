/*
 * XREFs of _vsnprintf @ 0x18008E1A0
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x180051B08 (vDbgPrintExWithPrefixInternal.c)
 *     RtlStringCbPrintfA @ 0x18007C1AC (RtlStringCbPrintfA.c)
 *     StringCbPrintfA @ 0x1800CDF10 (StringCbPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x18008E1BC (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  return vsnprintf_l(Buffer, BufferCount, Format, 0LL, ArgList);
}
