/*
 * XREFs of ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x1801F373C
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x1800130D0 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?ComputeCortanaWindowRect@CortanaStoreAppExperienceManager@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@111UCRect@Geometry@@H@Z @ 0x1801F2168 (-ComputeCortanaWindowRect@CortanaStoreAppExperienceManager@@AEAA-AUtagRECT@@W4EDGEUI_TRAYSTUCKPL.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x18020F3C8 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?NotifyVisibleRectChanged@CSwitchItemGrid@@UEAAXAEBUtagRECT@@@Z @ 0x1803A7470 (-NotifyVisibleRectChanged@CSwitchItemGrid@@UEAAXAEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Geometry::CRect::Intersects(Geometry::CRect *this, const struct tagRECT *a2)
{
  LONG top; // r10d
  LONG right; // eax
  LONG left; // r8d
  LONG bottom; // r9d

  top = *((_DWORD *)this + 1);
  right = *((_DWORD *)this + 2);
  if ( top <= a2->top )
    top = a2->top;
  left = *(_DWORD *)this;
  if ( right >= a2->right )
    right = a2->right;
  bottom = *((_DWORD *)this + 3);
  if ( left <= a2->left )
    left = a2->left;
  if ( left >= right )
    return 0;
  if ( bottom >= a2->bottom )
    bottom = a2->bottom;
  return top < bottom;
}
