/*
 * XREFs of ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x180048898
 * Callers:
 *     ?UpdateBackdropCounts@CVisual@@IEAAXPEBV1@_N@Z @ 0x1800460B0 (-UpdateBackdropCounts@CVisual@@IEAAXPEBV1@_N@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x1800474A4 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800487B4 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?UpdateHasWindowBackdropInputFlag@CVisual@@IEAAX_N@Z @ 0x18008C634 (-UpdateHasWindowBackdropInputFlag@CVisual@@IEAAX_N@Z.c)
 *     ?UpdateHasBackdropInputFlag@CVisual@@IEAAXPEBVCBackdropBrush@@@Z @ 0x18008C6E4 (-UpdateHasBackdropInputFlag@CVisual@@IEAAXPEBVCBackdropBrush@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::PropagateBackdropUpdates(CVisual *this, int a2, int a3)
{
  CVisual *v3; // rax

  if ( a2 || a3 )
  {
    v3 = this;
    do
    {
      *((_DWORD *)this + 66) += a2;
      *((_DWORD *)this + 67) += a3;
      this = (CVisual *)*((_QWORD *)this + 11);
      if ( v3 )
      {
        v3 = (CVisual *)*((_QWORD *)v3 + 11);
        if ( v3 )
          v3 = (CVisual *)*((_QWORD *)v3 + 11);
      }
    }
    while ( this != v3 );
  }
}
