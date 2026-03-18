/*
 * XREFs of ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x180278D30
 * Callers:
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801E4460 (-Initialize@CComputeScribbleRenderer@@AEAAJXZ.c)
 *     ?CreateScribble@CGenericInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x180215330 (-CreateScribble@CGenericInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComp.c)
 *     ?IsSuperWetCompatible@CGenericInk@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@_N@Z @ 0x180215DD0 (-IsSuperWetCompatible@CGenericInk@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@_N@Z.c)
 *     ?SetContextMsgRoutingInfo@CGenericInk@@AEAAJPEAVCD3DDevice@@@Z @ 0x1802165A8 (-SetContextMsgRoutingInfo@CGenericInk@@AEAAJPEAVCD3DDevice@@@Z.c)
 *     ?CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x180240ED0 (-CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@.c)
 *     ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ @ 0x18027DC58 (-EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ @ 0x1802792BC (-LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ.c)
 */

__int64 __fastcall CD2DContext::GetDirectInkFactory(
        struct IDCompositionDirectInkFactoryPartner **this,
        struct IDCompositionDirectInkFactoryPartner **a2)
{
  int inited; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  struct IDCompositionDirectInkFactoryPartner *v7; // rcx

  inited = CD2DContext::LazyInitDirectInkFactory((CD2DContext *)this);
  v6 = inited;
  if ( inited < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, inited, 0x11Bu);
  }
  else
  {
    v7 = this[40];
    if ( v7 )
    {
      (*(void (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *))(*(_QWORD *)v7 + 8LL))(v7);
      v7 = this[40];
    }
    *a2 = v7;
    return 0;
  }
  return v6;
}
