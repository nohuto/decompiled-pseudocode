/*
 * XREFs of _RtlStringCbPrintfA @ 0x4B2AE791
 * Callers:
 *     _RtlpVerCompare@20 @ 0x4B2B0391 (_RtlpVerCompare@20.c)
 * Callees:
 *     RtlStringVPrintfWorkerA @ 0x4B2AE7CD (RtlStringVPrintfWorkerA.c)
 */

int RtlStringCbPrintfA(char *Buffer, int a2, int a3, ...)
{
  int v3; // ecx
  va_list va; // [esp+14h] [ebp+14h] BYREF

  va_start(va, a3);
  v3 = 0;
  if ( a2 <= 0 )
    v3 = -1073741811;
  if ( v3 >= 0 )
    return RtlStringVPrintfWorkerA(Buffer, (int)va, a3, va);
  if ( a2 )
    *Buffer = 0;
  return v3;
}
