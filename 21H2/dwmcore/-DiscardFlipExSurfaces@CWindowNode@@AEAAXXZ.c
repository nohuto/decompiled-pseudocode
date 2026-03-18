/*
 * XREFs of ?DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ @ 0x18006156C
 * Callers:
 *     ??1CWindowNode@@MEAA@XZ @ 0x180061494 (--1CWindowNode@@MEAA@XZ.c)
 *     ?SetFlipExSurface@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x1802446E8 (-SetFlipExSurface@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 * Callees:
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180062474 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 */

void __fastcall CWindowNode::DiscardFlipExSurfaces(CWindowNode *this)
{
  unsigned __int64 Count; // rax
  CWindowNode *v2; // r8

  Count = CPtrArrayBase::GetCount((CWindowNode *)((char *)this + 808));
  CWindowNode::DiscardOldestFlipExSurfaces(v2, Count);
}
