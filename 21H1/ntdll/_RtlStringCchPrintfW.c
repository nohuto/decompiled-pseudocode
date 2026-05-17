/*
 * XREFs of _RtlStringCchPrintfW @ 0x4B34761F
 * Callers:
 *     _RtlpGetTokenNamedObjectPath@16 @ 0x4B348B45 (_RtlpGetTokenNamedObjectPath@16.c)
 * Callees:
 *     RtlStringVPrintfWorkerW_1 @ 0x4B337693 (RtlStringVPrintfWorkerW_1.c)
 */

int RtlStringCchPrintfW(wchar_t *Buffer, int a2, wchar_t *Format, ...)
{
  int v3; // ecx
  va_list va; // [esp+14h] [ebp+14h] BYREF

  va_start(va, Format);
  v3 = 0;
  if ( a2 <= 0 )
    v3 = -1073741811;
  if ( v3 >= 0 )
    return RtlStringVPrintfWorkerW_1(Buffer, a2, (int)va, Format, va);
  if ( a2 )
    *Buffer = 0;
  return v3;
}
