/*
 * XREFs of ZwWaitForMultipleObjects @ 0x1403F4120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwWaitForMultipleObjects(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
