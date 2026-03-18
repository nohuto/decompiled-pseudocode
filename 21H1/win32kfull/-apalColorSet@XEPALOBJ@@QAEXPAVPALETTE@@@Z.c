/*
 * XREFs of ?apalColorSet@XEPALOBJ@@QAEXPAVPALETTE@@@Z @ 0x1D37C0
 * Callers:
 *     _GreCreateDIBitmapReal@52 @ 0x76A92 (_GreCreateDIBitmapReal@52.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YGHPAUHPALETTE__@@PAUHDEV__@@@Z @ 0xF62D8 (-DxEngSyncPaletteTableWithDevice@@YGHPAUHPALETTE__@@PAUHDEV__@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall XEPALOBJ::apalColorSet(XEPALOBJ *this, struct PALETTE *a2)
{
  int v3; // eax
  int v4; // ecx

  v3 = *(_DWORD *)this;
  v4 = *(_DWORD *)(*(_DWORD *)this + 80);
  if ( v4 != v3 )
    DEC_SHARE_REF_CNT(v4);
  INC_SHARE_REF_CNT(a2);
  *(_DWORD *)(*(_DWORD *)this + 20) = *((_DWORD *)a2 + 5);
  *(_DWORD *)(*(_DWORD *)this + 76) = *((_DWORD *)a2 + 19);
  *(_DWORD *)(*(_DWORD *)this + 80) = a2;
}
