/*
 * XREFs of ?RemoveProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18007D4D8
 * Callers:
 *     ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x180003778 (-SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18007DE6C (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     memmove_0 @ 0x1800EBD77 (memmove_0.c)
 */

void __fastcall CComposition::RemoveProjectedShadowCasterVisual(CComposition *this, struct CVisual *a2)
{
  struct CVisual **v2; // r8
  struct CVisual **i; // rcx

  v2 = (struct CVisual **)*((_QWORD *)this + 117);
  for ( i = (struct CVisual **)*((_QWORD *)this + 116); i != v2 && *i != a2; ++i )
    ;
  if ( i != v2 )
  {
    memmove_0(i, i + 1, (char *)v2 - (char *)(i + 1));
    *((_QWORD *)this + 117) -= 8LL;
  }
}
