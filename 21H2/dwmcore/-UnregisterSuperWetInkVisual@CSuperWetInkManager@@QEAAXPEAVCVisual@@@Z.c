/*
 * XREFs of ?UnregisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z @ 0x1801A8DEC
 * Callers:
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x1800471B0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18004A90C (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 */

void __fastcall CSuperWetInkManager::UnregisterSuperWetInkVisual(CSuperWetInkManager *this, struct CVisual *a2)
{
  struct CVisual **v3; // rcx
  struct CVisual **v4; // r8

  v3 = (struct CVisual **)*((_QWORD *)this + 2);
  v4 = (struct CVisual **)*((_QWORD *)this + 3);
  while ( v3 != v4 )
  {
    if ( *v3 == a2 )
    {
      memmove_0(v3, v3 + 1, (char *)v4 - (char *)(v3 + 1));
      *((_QWORD *)this + 3) -= 8LL;
      return;
    }
    ++v3;
  }
}
