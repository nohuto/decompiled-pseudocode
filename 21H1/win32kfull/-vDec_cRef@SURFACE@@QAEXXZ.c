/*
 * XREFs of ?vDec_cRef@SURFACE@@QAEXXZ @ 0x1D8765
 * Callers:
 *     _GreDrawStream@12 @ 0x5C150 (_GreDrawStream@12.c)
 *     ?bEndDocInternal@@YGHPAUHDC__@@KG@Z @ 0xF6AD2 (-bEndDocInternal@@YGHPAUHDC__@@KG@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall SURFACE::vDec_cRef(SURFACE *this)
{
  int v3; // [esp-4h] [ebp-8h]

  DEC_SHARE_REF_CNT(this);
  if ( (*((_DWORD *)this + 28))-- == 1 )
  {
    if ( (*(_DWORD *)this & 0x800000) != 0 && (*((_WORD *)this + 33) & 0x400) != 0 )
    {
      v3 = *(_DWORD *)this;
      *((_WORD *)this + 33) &= ~0x400u;
      GreMakeBitmapNonStock(v3);
    }
    *((_DWORD *)this + 27) = 0;
  }
}
