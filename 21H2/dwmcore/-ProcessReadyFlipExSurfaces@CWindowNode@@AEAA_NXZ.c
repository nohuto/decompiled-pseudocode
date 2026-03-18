/*
 * XREFs of ?ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ @ 0x1801152E0
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180115080 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?GetRenderingRealization@CCompositionSurfaceBitmap@@AEAAPEAVIBitmapRealization@@XZ @ 0x1800069D4 (-GetRenderingRealization@CCompositionSurfaceBitmap@@AEAAPEAVIBitmapRealization@@XZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?DiscardOldestFlipExSurfaces@CWindowNode@@AEAAX_K@Z @ 0x180061594 (-DiscardOldestFlipExSurfaces@CWindowNode@@AEAAX_K@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180062474 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800D18A0 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 */

char __fastcall CWindowNode::ProcessReadyFlipExSurfaces(CWindowNode *this)
{
  char v1; // si
  __int64 *v3; // rbp
  unsigned __int64 Count; // rdi
  CCompositionSurfaceBitmap *v5; // rax

  v1 = 0;
  if ( !*((_BYTE *)this + 918) )
  {
    *((_BYTE *)this + 918) = 1;
    v3 = (__int64 *)((char *)this + 808);
    Count = CPtrArrayBase::GetCount((CWindowNode *)((char *)this + 808));
    if ( Count )
    {
      while ( 1 )
      {
        v5 = (CCompositionSurfaceBitmap *)CPtrArrayBase::operator[](v3, --Count);
        if ( CCompositionSurfaceBitmap::GetRenderingRealization(v5) )
          break;
        if ( !Count )
          goto LABEL_9;
      }
      if ( !*((_BYTE *)this + 920) || Count )
      {
        *((_BYTE *)this + 920) = 1;
        CWindowNode::DiscardOldestFlipExSurfaces(this, Count);
        CVisual::PropagateFlags((__int64)this, 4u);
        v1 = 1;
      }
    }
LABEL_9:
    *((_BYTE *)this + 918) = 0;
  }
  return v1;
}
