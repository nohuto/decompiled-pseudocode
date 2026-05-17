/*
 * XREFs of _vsnprintf @ 0x18008DBA0
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x1800509F8 (vDbgPrintExWithPrefixInternal.c)
 *     RtlStringCbPrintfA @ 0x18007B17C (RtlStringCbPrintfA.c)
 *     StringCbPrintfA @ 0x1800CDF90 (StringCbPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x18008DBBC (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  return vsnprintf_l(Buffer, BufferCount, Format, 0LL, ArgList);
}
