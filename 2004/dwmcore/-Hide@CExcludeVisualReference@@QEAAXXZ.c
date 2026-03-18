/*
 * XREFs of ?Hide@CExcludeVisualReference@@QEAAXXZ @ 0x180175B4C
 * Callers:
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800DAB64 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?HideVisuals@CVisualGroup@@QEAAXXZ @ 0x1801AD680 (-HideVisuals@CVisualGroup@@QEAAXXZ.c)
 * Callees:
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1800E0F88 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 */

void __fastcall CExcludeVisualReference::Hide(CExcludeVisualReference *this)
{
  struct CVisual *Visual; // rax
  __int64 v2; // rcx
  char v3; // dl

  Visual = CExcludeVisualReference::GetVisual(this);
  if ( Visual )
  {
    v3 = *((_BYTE *)Visual + 94);
    *((_BYTE *)Visual + 94) = v3 | 4;
    *(_BYTE *)(v2 + 20) = (v3 & 4) != 0;
    *(_DWORD *)(v2 + 16) = 2;
  }
}
