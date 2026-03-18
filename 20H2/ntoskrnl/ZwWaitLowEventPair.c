/*
 * XREFs of ZwWaitLowEventPair @ 0x1403FBC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwWaitLowEventPair(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
