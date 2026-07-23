/*
 * XREFs of _RtlStringCchPrintfW @ 0x4B34761F
 * Callers:
 *     _RtlpGetTokenNamedObjectPath@16 @ 0x4B348B45 (_RtlpGetTokenNamedObjectPath@16.c)
 * Callees:
 *     RtlStringVPrintfWorkerW_1 @ 0x4B337693 (RtlStringVPrintfWorkerW_1.c)
 */

int __cdecl RtlStringCchPrintfW(wchar_t *Buffer, int a2, int a3, wchar_t Format)
{
  int v4; // ecx

  v4 = 0;
  if ( a2 <= 0 )
    v4 = -1073741811;
  if ( v4 >= 0 )
    return RtlStringVPrintfWorkerW_1(Buffer, a2, (int)&Format, a3, &Format);
  if ( a2 )
    *Buffer = 0;
  return v4;
}
