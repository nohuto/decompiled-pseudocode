/*
 * XREFs of _RtlAddVectoredContinueHandler@8 @ 0x4B3383D0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpAddVectoredHandler@12 @ 0x4B2AB096 (_RtlpAddVectoredHandler@12.c)
 */

PVOID __cdecl RtlAddVectoredContinueHandler(ULONG First, PVECTORED_EXCEPTION_HANDLER Handler)
{
  int v2; // esi

  return RtlpAddVectoredHandler((int)Handler, First, v2, 1);
}
