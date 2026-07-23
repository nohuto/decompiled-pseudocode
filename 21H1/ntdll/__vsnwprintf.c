/*
 * XREFs of __vsnwprintf @ 0x4B2F78B0
 * Callers:
 *     RtlStringVPrintfWorkerW @ 0x4B2A77A4 (RtlStringVPrintfWorkerW.c)
 *     RtlStringVPrintfWorkerW_0 @ 0x4B32E12F (RtlStringVPrintfWorkerW_0.c)
 *     StringVPrintfWorkerW @ 0x4B334D98 (StringVPrintfWorkerW.c)
 *     RtlStringVPrintfWorkerW_1 @ 0x4B337693 (RtlStringVPrintfWorkerW_1.c)
 * Callees:
 *     __vsnwprintf_l @ 0x4B2F78CD (__vsnwprintf_l.c)
 */

int __cdecl _vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  va_list savedregs; // [esp+0h] [ebp+0h]

  return _vsnwprintf_l(Buffer, BufferCount, 0, (const _locale_t)Format, savedregs);
}
