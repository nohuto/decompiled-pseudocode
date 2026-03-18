/*
 * XREFs of ?SetFlipExSurface@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x1802446E8
 * Callers:
 *     ?ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETCOMPOSITIONSURFACE@@@Z @ 0x180244304 (-ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SET.c)
 * Callees:
 *     ?GetRenderingRealization@CCompositionSurfaceBitmap@@AEAAPEAVIBitmapRealization@@XZ @ 0x1800069D4 (-GetRenderingRealization@CCompositionSurfaceBitmap@@AEAAPEAVIBitmapRealization@@XZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x180046F60 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ @ 0x18006156C (-DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ.c)
 *     ?DiscardOldestFlipExSurfaces@CWindowNode@@AEAAX_K@Z @ 0x180061594 (-DiscardOldestFlipExSurfaces@CWindowNode@@AEAAX_K@Z.c)
 *     ?HasNonEmptyContent@CWindowNode@@UEAA_NXZ @ 0x180062330 (-HasNonEmptyContent@CWindowNode@@UEAA_NXZ.c)
 *     ?Contains@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800623D0 (-Contains@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180062474 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?RemoveAt@CPtrArrayBase@@IEAAX_K0@Z @ 0x180062490 (-RemoveAt@CPtrArrayBase@@IEAAX_K0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800D18A0 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

__int64 __fastcall CWindowNode::SetFlipExSurface(CWindowNode *this, struct CCompositionSurfaceBitmap *a2)
{
  unsigned int v4; // esi
  char v5; // r14
  char HasNonEmptyContent; // r15
  CPtrArrayBase *v7; // rcx
  __int64 *v8; // rcx
  struct CResource *v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  unsigned __int64 Count; // rax
  CPtrArrayBase *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // edi

  v4 = 0;
  v5 = 0;
  HasNonEmptyContent = CWindowNode::HasNonEmptyContent(this);
  v7 = (CWindowNode *)((char *)this + 808);
  if ( a2 )
  {
    if ( !CPtrArrayBase::Contains(v7) )
    {
      if ( CCompositionSurfaceBitmap::GetRenderingRealization(a2) )
      {
        CWindowNode::DiscardFlipExSurfaces(this);
        *((_BYTE *)this + 920) = 1;
        v5 = 1;
      }
      else if ( CPtrArrayBase::GetCount((CWindowNode *)((char *)this + 808)) == 16 )
      {
        if ( *((_BYTE *)this + 920) )
        {
          v9 = (struct CResource *)CPtrArrayBase::operator[](v8, 1uLL);
          CResource::UnRegisterNotifierInternal(this, v9);
          CPtrArrayBase::RemoveAt((CWindowNode *)((char *)this + 808), 1uLL, 1uLL);
        }
        else
        {
          CWindowNode::DiscardOldestFlipExSurfaces(this, 1uLL);
        }
      }
      v10 = CResource::RegisterNotifier(this, a2);
      v4 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x313u);
        return v4;
      }
      Count = CPtrArrayBase::GetCount((CWindowNode *)((char *)this + 808));
      v14 = CPtrArrayBase::InsertAt(v13, (__int64)a2, Count);
      v4 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x314u);
        return v4;
      }
    }
  }
  else if ( CPtrArrayBase::GetCount(v7) )
  {
    CWindowNode::DiscardFlipExSurfaces(this);
    v5 = *((_BYTE *)this + 920);
    *((_BYTE *)this + 920) = 0;
  }
  v16 = v5 != 0 ? 4 : 0;
  if ( HasNonEmptyContent != CWindowNode::HasNonEmptyContent(this) )
    v16 |= 1u;
  if ( v16 )
    CVisual::PropagateFlags((__int64)this, v16);
  return v4;
}
