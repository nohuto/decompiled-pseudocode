/*
 * XREFs of ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x1800D48AC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ??2KeyframeInterpolation@@SAPEAX_K@Z @ 0x18004D79C (--2KeyframeInterpolation@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UpdateBackdropVisualImageForWindowBackgroundTreatment@CVisual@@AEAAXXZ @ 0x1800D49B0 (-UpdateBackdropVisualImageForWindowBackgroundTreatment@CVisual@@AEAAXXZ.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x1800D4DD0 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x1800D4FD8 (-SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z.c)
 *     ??4?$ComPtr@VCWindowBackgroundTreatment@@@WRL@Microsoft@@QEAAAEAV012@PEAVCWindowBackgroundTreatment@@@Z @ 0x1800D5020 (--4-$ComPtr@VCWindowBackgroundTreatment@@@WRL@Microsoft@@QEAAAEAV012@PEAVCWindowBackgroundTreatm.c)
 *     ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCBrush@@@Z @ 0x1800D5090 (--0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCBrush@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ProcessSetWindowBackgroundTreatment(
        struct CComposition **this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // edx
  struct CBrush *Resource; // rbx
  __int64 v8; // rcx
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rax
  struct CComposition *v10; // rdi
  CWindowBackgroundTreatment *v11; // rax
  __int64 v12; // rcx
  struct CWindowBackgroundTreatment *v13; // rbx
  int v14; // eax
  int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-18h]
  struct CWindowBackgroundTreatment *v18; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( v5 )
  {
    Resource = (struct CBrush *)CResourceTable::GetResource((__int64)a2, v5, 0xFu);
    if ( !Resource )
    {
      v4 = -2003303421;
      v17 = 2566;
      goto LABEL_12;
    }
  }
  WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)this);
  if ( !WindowBackgroundTreatmentInternal || *((struct CBrush **)WindowBackgroundTreatmentInternal + 9) != Resource )
  {
    CResource::UnRegisterNotifierInternal((CResource *)this, WindowBackgroundTreatmentInternal);
    v10 = this[2];
    v18 = 0LL;
    v11 = (CWindowBackgroundTreatment *)KeyframeInterpolation::operator new(0x160uLL);
    if ( v11 )
      v11 = CWindowBackgroundTreatment::CWindowBackgroundTreatment(v11, v10, Resource);
    Microsoft::WRL::ComPtr<CWindowBackgroundTreatment>::operator=(&v18, v11);
    v13 = v18;
    if ( v18 )
    {
      v14 = CResource::RegisterNotifier((CResource *)this, v18);
      v4 = v14;
      if ( v14 >= 0 )
      {
        (*(void (__fastcall **)(struct CWindowBackgroundTreatment *))(*(_QWORD *)v13 + 16LL))(v13);
        CVisual::SetWindowBackgroundTreatmentInternal((CVisual *)this, v13);
        CVisual::UpdateBackdropVisualImageForWindowBackgroundTreatment((CVisual *)this);
        CVisual::PropagateFlags((__int64)this, 5u);
        return v4;
      }
      v16 = v14;
      v17 = 2577;
LABEL_16:
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v16, v17);
      return v4;
    }
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, -2147024882, 0x14u);
    v17 = 2576;
LABEL_12:
    v16 = v4;
    goto LABEL_16;
  }
  return v4;
}
