/*
 * XREFs of ZwMapUserPhysicalPagesScatter @ 0x1403F2390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwMapUserPhysicalPagesScatter()
{
  _disable();
  __readeflags();
  return KiServiceInternal();
}
