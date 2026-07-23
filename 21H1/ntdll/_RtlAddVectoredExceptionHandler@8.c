/*
 * XREFs of _RtlAddVectoredExceptionHandler@8 @ 0x4B2AB080
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpAddVectoredHandler@12 @ 0x4B2AB096 (_RtlpAddVectoredHandler@12.c)
 */

PVOID __cdecl RtlAddVectoredExceptionHandler(ULONG First, PVECTORED_EXCEPTION_HANDLER Handler)
{
  return (PVOID)RtlpAddVectoredHandler(0);
}
