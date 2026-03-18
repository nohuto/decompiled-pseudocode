/*
 * XREFs of ZwOpenIoCompletion @ 0x1403FA550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenIoCompletion(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
