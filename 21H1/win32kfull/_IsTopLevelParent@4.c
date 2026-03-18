/*
 * XREFs of _IsTopLevelParent@4 @ 0x2FF80
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _IsParentBandValid@8 @ 0x2FF3A (_IsParentBandValid@8.c)
 *     _IsTopmostBandWindow@8 @ 0xA22E2 (_IsTopmostBandWindow@8.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsTopLevelParent(_DWORD *this)
{
  int v1; // eax
  BOOL result; // eax

  result = 1;
  if ( this )
  {
    v1 = this[3];
    if ( this != *(_DWORD **)(v1 + 52) && this != *(_DWORD **)(*(_DWORD *)(v1 + 4) + 12) )
      return 0;
  }
  return result;
}
