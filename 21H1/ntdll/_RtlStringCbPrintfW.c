/*
 * XREFs of _RtlStringCbPrintfW @ 0x4B33765B
 * Callers:
 *     _RtlQueryProcessHeapInformation@4 @ 0x4B336F80 (_RtlQueryProcessHeapInformation@4.c)
 *     _RtlpGetTagName@8 @ 0x4B35809A (_RtlpGetTagName@8.c)
 * Callees:
 *     RtlStringVPrintfWorkerW_1 @ 0x4B337693 (RtlStringVPrintfWorkerW_1.c)
 */

int RtlStringCbPrintfW(wchar_t *Buffer, unsigned int a2, wchar_t *Format, ...)
{
  int v3; // ecx
  va_list va; // [esp+14h] [ebp+14h] BYREF

  va_start(va, Format);
  v3 = a2 >> 1 != 0 ? 0 : -1073741811;
  if ( a2 >> 1 )
    return RtlStringVPrintfWorkerW_1(Buffer, (int)va, Format, va);
  return v3;
}
