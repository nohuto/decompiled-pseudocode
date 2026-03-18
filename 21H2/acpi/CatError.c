/*
 * XREFs of CatError @ 0x1C0067084
 * Callers:
 *     AMLIInitialize @ 0x1C00BCDB8 (AMLIInitialize.c)
 * Callees:
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     RtlStringCchVPrintfA @ 0x1C0029130 (RtlStringCchVPrintfA.c)
 *     RtlStringCchCatA @ 0x1C005EFFC (RtlStringCchCatA.c)
 *     AMLIDebugger @ 0x1C0067034 (AMLIDebugger.c)
 */

ULONG CatError(const char *a1, ...)
{
  __int64 v1; // rax
  ULONG result; // eax
  va_list argList; // [rsp+58h] [rbp+10h] BYREF

  va_start(argList, a1);
  RtlStringCchCatA(byte_1C0081ACC, 0x100uLL, "\n");
  v1 = -1LL;
  do
    ++v1;
  while ( byte_1C0081ACC[v1] );
  RtlStringCchVPrintfA(&byte_1C0081ACC[v1], 256 - v1, a1, argList);
  ConPrintf(byte_1C0081ACC);
  result = ConPrintf("\n");
  if ( (gDebugger & 0x4000) != 0 )
    return AMLIDebugger();
  return result;
}
