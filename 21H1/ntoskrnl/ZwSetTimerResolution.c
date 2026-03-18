/*
 * XREFs of ZwSetTimerResolution @ 0x1403F5930
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x140369E14 (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetTimerResolution(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
