/*
 * XREFs of _vsnwprintf @ 0x18008DB70
 * Callers:
 *     RtlStringCchPrintfW @ 0x18004457C (RtlStringCchPrintfW.c)
 *     StringCbPrintfW @ 0x180058248 (StringCbPrintfW.c)
 *     RtlStringVPrintfWorkerW @ 0x180066484 (RtlStringVPrintfWorkerW.c)
 *     RtlStringVPrintfWorkerW_0 @ 0x1800698F8 (RtlStringVPrintfWorkerW_0.c)
 *     RtlStringCbPrintfW @ 0x1800D8570 (RtlStringCbPrintfW.c)
 *     StringCchPrintfW @ 0x1800DDFE8 (StringCchPrintfW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x18008DB8C (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Buffer, BufferCount, Format, 0LL, Args);
}
