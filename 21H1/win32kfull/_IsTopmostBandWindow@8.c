/*
 * XREFs of _IsTopmostBandWindow@8 @ 0xA22E2
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall IsTopmostBandWindow(int a1, _DWORD *a2)
{
  return *(_DWORD *)(*(_DWORD *)(a1 + 20) + 148) != 1 && IsTopLevelParent(a2);
}
