/*
 * XREFs of _RtlAddVectoredContinueHandler@8 @ 0x4B3383D0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpAddVectoredHandler@12 @ 0x4B2AB096 (_RtlpAddVectoredHandler@12.c)
 */

_DWORD *__stdcall RtlAddVectoredContinueHandler(int a1, int a2)
{
  return RtlpAddVectoredHandler(a1, a2, 1);
}
