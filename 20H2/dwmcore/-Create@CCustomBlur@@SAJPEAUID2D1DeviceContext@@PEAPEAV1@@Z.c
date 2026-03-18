/*
 * XREFs of ?Create@CCustomBlur@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z @ 0x1800D8054
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18004C688 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180066E94 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CCustomBlur@@AEAAJPEAUID2D1DeviceContext@@@Z @ 0x1800D80F8 (-Initialize@CCustomBlur@@AEAAJPEAUID2D1DeviceContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCustomBlur::Create(struct ID2D1DeviceContext *a1, struct CCustomBlur **a2)
{
  CCustomBlur *v4; // rax
  __int64 v5; // rcx
  CCustomBlur *v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi

  v4 = (CCustomBlur *)DefaultHeap::Alloc(0x40uLL);
  v6 = v4;
  if ( v4 )
  {
    *((_QWORD *)v4 + 2) = 0LL;
    *((_QWORD *)v4 + 3) = 0LL;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 5) = 0LL;
    *((_QWORD *)v4 + 6) = 0LL;
    *((_QWORD *)v4 + 7) = 0LL;
    *((_DWORD *)v4 + 2) = 0;
    *(_QWORD *)v4 = &CCustomBlur::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    (**(void (__fastcall ***)(CCustomBlur *))v6)(v6);
    v7 = CCustomBlur::Initialize(v6, a1);
    v9 = v7;
    if ( v7 >= 0 )
    {
      *a2 = v6;
      return v9;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x28u, 0LL);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x26u, 0LL);
  }
  if ( v6 )
    (*(void (__fastcall **)(CCustomBlur *))(*(_QWORD *)v6 + 8LL))(v6);
  return v9;
}
