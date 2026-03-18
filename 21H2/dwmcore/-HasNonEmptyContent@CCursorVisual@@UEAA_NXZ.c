/*
 * XREFs of ?HasNonEmptyContent@CCursorVisual@@UEAA_NXZ @ 0x180211C60
 * Callers:
 *     <none>
 * Callees:
 *     ?HasNonEmptyContent@CVisual@@UEAA_NXZ @ 0x1800C9650 (-HasNonEmptyContent@CVisual@@UEAA_NXZ.c)
 *     ?IsVisible@CCursorVisual@@IEBA_NXZ @ 0x180211CC4 (-IsVisible@CCursorVisual@@IEBA_NXZ.c)
 */

char __fastcall CCursorVisual::HasNonEmptyContent(CCursorVisual *this)
{
  CVisual *v1; // rcx
  char v2; // bl

  v2 = 0;
  if ( CCursorVisual::IsVisible(this) || CVisual::HasNonEmptyContent(v1) )
    return 1;
  return v2;
}
