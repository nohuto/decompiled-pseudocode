/*
 * XREFs of __vsnprintf @ 0x4B2F7800
 * Callers:
 *     _vDbgPrintExWithPrefixInternal@24 @ 0x4B2AB8F1 (_vDbgPrintExWithPrefixInternal@24.c)
 *     RtlStringVPrintfWorkerA @ 0x4B2AE7CD (RtlStringVPrintfWorkerA.c)
 *     StringVPrintfWorkerA @ 0x4B32E810 (StringVPrintfWorkerA.c)
 * Callees:
 *     __vsnprintf_l @ 0x4B2F781D (__vsnprintf_l.c)
 */

int __cdecl _vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  return _vsnprintf_l(Buffer, BufferCount, Format, 0, ArgList);
}
