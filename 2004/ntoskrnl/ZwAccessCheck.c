/*
 * XREFs of ZwAccessCheck @ 0x1403F35C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwAccessCheck()
{
  _disable();
  __readeflags();
  return KiServiceInternal();
}
