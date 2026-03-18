/*
 * XREFs of ?RemoveProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x180049460
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18004A90C (--1CVisual@@MEAA@XZ.c)
 *     ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x180201D40 (-SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 */

void __fastcall CComposition::RemoveProjectedShadowCasterVisual(CComposition *this, struct CVisual *a2)
{
  struct CVisual **v2; // r8
  struct CVisual **i; // rcx

  v2 = (struct CVisual **)*((_QWORD *)this + 136);
  for ( i = (struct CVisual **)*((_QWORD *)this + 135); i != v2; ++i )
  {
    if ( *i == a2 )
    {
      memmove_0(i, i + 1, (char *)v2 - (char *)(i + 1));
      *((_QWORD *)this + 136) -= 8LL;
      return;
    }
  }
}
