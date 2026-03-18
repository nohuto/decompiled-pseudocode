/*
 * XREFs of ?ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z @ 0x1801F7BB4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?GetColorTransform@CVisual@@QEBAPEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BI@@@XZ @ 0x180049440 (-GetColorTransform@CVisual@@QEBAPEAV-$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFO.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?SetColorTransform@CVisual@@QEAAXPEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BI@@@@Z @ 0x1801F8444 (-SetColorTransform@CVisual@@QEAAXPEAV-$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSF.c)
 */

__int64 __fastcall CVisual::ProcessSetColorTransform(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETCOLORTRANSFORM *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  struct CResource *Resource; // rdi
  __int64 v8; // rcx
  struct CResource *ColorTransform; // rbp
  int v10; // eax
  __int64 v11; // rcx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x18u)) != 0LL )
  {
    ColorTransform = (struct CResource *)CVisual::GetColorTransform((__int64)this);
    if ( Resource != ColorTransform )
    {
      v10 = CResource::RegisterNotifier(this, Resource);
      v4 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0xC79u);
      }
      else
      {
        CResource::UnRegisterNotifierInternal(this, ColorTransform);
        CVisual::SetColorTransform(this, Resource);
        CVisual::PropagateFlags((__int64)this, 4u);
      }
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, -2003303421, 0xC71u);
  }
  return v4;
}
