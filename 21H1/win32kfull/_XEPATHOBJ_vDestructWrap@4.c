/*
 * XREFs of _XEPATHOBJ_vDestructWrap@4 @ 0x1E6382
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall XEPATHOBJ_vDestructWrap(EPATHOBJ *a1)
{
  EPATHOBJ::vUnlock(a1);
}
