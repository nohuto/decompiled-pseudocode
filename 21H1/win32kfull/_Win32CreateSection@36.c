/*
 * XREFs of _Win32CreateSection@36 @ 0xA9E8E
 * Callers:
 *     _CreateDesktopHeap@8 @ 0xA9E00 (_CreateDesktopHeap@8.c)
 *     _cMapRemoteFonts@16 @ 0x1E949B (_cMapRemoteFonts@16.c)
 * Callees:
 *     <none>
 */

int __thiscall Win32CreateSection(_DWORD *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int Section; // edi

  Section = MmCreateSection(this, (char *)&loc_F001D + 2, 0, a3, 4, a5, 0, 0);
  if ( Section >= 0 )
    ObDeleteCapturedInsertInfo(*this);
  return Section;
}
