/*
 * XREFs of ?SetGlobalDesktopPattern@@YGHPAUHBITMAP__@@@Z @ 0x1852F8
 * Callers:
 *     _SetDesktopPattern@8 @ 0xE9318 (_SetDesktopPattern@8.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
int __thiscall SetGlobalDesktopPattern(void *this)
{
  int v2; // edi

  v2 = 0;
  if ( this != (void *)_g_hbmDesktopPattern )
  {
    if ( _g_hbmDesktopPattern )
      GreDeleteObject(_g_hbmDesktopPattern);
    if ( this )
      GreSetBitmapOwner(this, 0);
    v2 = 1;
    _g_hbmDesktopPattern = this;
  }
  return v2;
}
