/*
 * XREFs of _RtlRemoveVectoredExceptionHandler@4 @ 0x4B2AB220
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpRemoveVectoredHandler@8 @ 0x4B2AB233 (_RtlpRemoveVectoredHandler@8.c)
 */

int __stdcall RtlRemoveVectoredExceptionHandler(int a1)
{
  return RtlpRemoveVectoredHandler(a1, 0);
}
