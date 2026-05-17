/*
 * XREFs of _vsnprintf @ 0x18008DAA0
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x1800509A8 (vDbgPrintExWithPrefixInternal.c)
 *     RtlStringCbPrintfA @ 0x18007B07C (RtlStringCbPrintfA.c)
 *     StringCbPrintfA @ 0x1800CDDB0 (StringCbPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x18008DABC (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  return vsnprintf_l(Buffer, BufferCount, Format, 0LL, ArgList);
}
