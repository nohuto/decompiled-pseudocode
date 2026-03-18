/*
 * XREFs of _MNMarkDelayedFreePopup@8 @ 0x1846F6
 * Callers:
 *     _xxxMNStartMenuState@12 @ 0x184D3D (_xxxMNStartMenuState@12.c)
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     <none>
 */

int *__fastcall MNMarkDelayedFreePopup(int **a1, int ***a2)
{
  int *result; // eax

  *(_DWORD *)**a1 |= 0x10000u;
  result = (int *)*a2;
  if ( **a2 )
  {
    *(_DWORD *)(**a1 + 36) = (**a2)[9];
    *(_DWORD *)**a1 |= 0x20000000u;
    result = **a2;
    result[9] = **a1;
  }
  return result;
}
