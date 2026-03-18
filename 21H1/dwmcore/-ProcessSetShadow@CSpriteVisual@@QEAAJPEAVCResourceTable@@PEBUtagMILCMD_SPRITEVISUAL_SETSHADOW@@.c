/*
 * XREFs of ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x1800AA244
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x180045CA0 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007B22C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18007CF48 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800809A4 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z @ 0x1800AA054 (-RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z.c)
 *     ?SetDropShadow@CSpriteVisual@@AEAAXPEAVCDropShadow@@@Z @ 0x1800AA308 (-SetDropShadow@CSpriteVisual@@AEAAXPEAVCDropShadow@@@Z.c)
 *     ?GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ @ 0x1800AA3DC (-GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ.c)
 */

__int64 __fastcall CSpriteVisual::ProcessSetShadow(
        CSpriteVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SPRITEVISUAL_SETSHADOW *a3)
{
  unsigned int v5; // esi
  struct CDropShadow *Resource; // rax
  __int64 v7; // rcx
  struct CResource *v8; // rbp
  int v9; // eax
  __int64 v10; // rcx
  CDropShadow *DropShadow; // rax
  struct CResource *v13; // rax

  v5 = 0;
  Resource = (struct CDropShadow *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x35u);
  v8 = Resource;
  if ( *((_DWORD *)a3 + 2) && !Resource )
  {
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003303421, 0x54u, 0LL);
  }
  else if ( Resource != CSpriteVisual::GetDropShadow(this) )
  {
    CVisual::ClearContentTreeDataCaches(this);
    if ( (**((_DWORD **)this + 28) & 0x10000) != 0 )
    {
      DropShadow = CSpriteVisual::GetDropShadow(this);
      CDropShadow::RemoveVisualFromCache(DropShadow, this);
    }
    v9 = CResource::RegisterNotifier(this, v8);
    v5 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x64u, 0LL);
    }
    else
    {
      if ( (**((_DWORD **)this + 28) & 0x10000) != 0 )
      {
        v13 = CSpriteVisual::GetDropShadow(this);
        CResource::UnRegisterNotifierInternal(this, v13);
      }
      CSpriteVisual::SetDropShadow(this, v8);
      CVisual::PropagateFlags((__int64)this, 5u);
    }
  }
  return v5;
}
