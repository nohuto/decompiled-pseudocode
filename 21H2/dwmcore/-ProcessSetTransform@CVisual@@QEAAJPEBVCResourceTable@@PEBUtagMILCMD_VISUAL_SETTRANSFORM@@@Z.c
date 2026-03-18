/*
 * XREFs of ?ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORM@@@Z @ 0x1800E2DFC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180048E38 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetTransform(
        struct CResource **this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETTRANSFORM *a3)
{
  struct CResource *Resource; // rsi
  unsigned int v5; // edx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v12; // rcx

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 && (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0xBAu)) == 0LL )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, -2003303421, 0x980u);
  }
  else if ( Resource == this[30] )
  {
    return 0;
  }
  else
  {
    v8 = CResource::RegisterNotifier((CResource *)this, Resource);
    v10 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0xA95u);
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v10, 0x984u);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[30]);
      this[30] = Resource;
      CVisual::PropagateFlags((__int64)this, 5u);
      CVisual::OnOuterTransformChanged((CVisual *)this);
    }
  }
  return v10;
}
