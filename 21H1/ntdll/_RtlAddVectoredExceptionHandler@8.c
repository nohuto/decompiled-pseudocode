/*
 * XREFs of _RtlAddVectoredExceptionHandler@8 @ 0x4B2AB080
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpAddVectoredHandler@12 @ 0x4B2AB096 (_RtlpAddVectoredHandler@12.c)
 */

int __stdcall RtlAddVectoredExceptionHandler(int a1, int a2)
{
  return RtlpAddVectoredHandler(0);
}
