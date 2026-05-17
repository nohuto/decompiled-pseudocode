/*
 * XREFs of _RtlRemoveVectoredContinueHandler@4 @ 0x4B3383F0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpRemoveVectoredHandler@8 @ 0x4B2AB233 (_RtlpRemoveVectoredHandler@8.c)
 */

int __stdcall RtlRemoveVectoredContinueHandler(_DWORD *a1)
{
  return RtlpRemoveVectoredHandler(a1, 1);
}
