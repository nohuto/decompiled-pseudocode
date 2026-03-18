/*
 * XREFs of _IsInsideMPH@0 @ 0xA19FC
 * Callers:
 *     _xxxInternalGetMessage@24 @ 0xA199C (_xxxInternalGetMessage@24.c)
 *     _xxxWaitMessageEx@12 @ 0xA19D2 (_xxxWaitMessageEx@12.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall IsInsideMPH()
{
  return *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 244) + 20) > 0;
}
