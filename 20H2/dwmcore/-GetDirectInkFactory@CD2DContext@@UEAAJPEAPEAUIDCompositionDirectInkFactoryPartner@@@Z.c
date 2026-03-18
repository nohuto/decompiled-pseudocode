/*
 * XREFs of ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x180239DF0
 * Callers:
 *     ??1CComputeScribbleRenderer@@UEAA@XZ @ 0x18019EE80 (--1CComputeScribbleRenderer@@UEAA@XZ.c)
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x18019F160 (-Initialize@CComputeScribbleRenderer@@AEAAJXZ.c)
 *     ?CreateScribble@CGenericInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x1801C1C60 (-CreateScribble@CGenericInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComp.c)
 *     ?IsSuperWetCompatible@CGenericInk@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@@Z @ 0x1801C2650 (-IsSuperWetCompatible@CGenericInk@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@@Z.c)
 *     ?SetContextMsgRoutingInfo@CGenericInk@@AEAAJPEAVCD3DDevice@@@Z @ 0x1801C2C78 (-SetContextMsgRoutingInfo@CGenericInk@@AEAAJPEAVCD3DDevice@@@Z.c)
 *     ?CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x1801EEA00 (-CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@.c)
 *     ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ @ 0x18023C578 (-EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ @ 0x18023A2FC (-LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, inited, 0x109u, 0LL);
  }
  else
  {
    v7 = this[46];
    if ( v7 )
    {
      (*(void (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *))(*(_QWORD *)v7 + 8LL))(v7);
      v7 = this[46];
    }
    *a2 = v7;
    return 0;
  }
  return v6;
}
