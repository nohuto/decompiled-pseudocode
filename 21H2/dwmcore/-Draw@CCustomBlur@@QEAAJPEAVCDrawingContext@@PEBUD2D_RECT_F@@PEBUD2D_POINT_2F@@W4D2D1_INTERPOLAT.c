/*
 * XREFs of ?Draw@CCustomBlur@@QEAAJPEAVCDrawingContext@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x180040B08
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18003FAE8 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCustomBlur::Draw(
        CCustomBlur *this,
        struct CDrawingContext *a2,
        const struct D2D_RECT_F *a3,
        const struct D2D_POINT_2F *a4)
{
  __int64 v4; // r10
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx

  v4 = (*((_QWORD *)a2 + 5) + 16LL) & -(__int64)(*((_QWORD *)a2 + 5) != 0LL);
  v5 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, const struct D2D_RECT_F *, _QWORD, int, int))(*(_QWORD *)v4 + 96LL))(
         v4,
         (char *)a2 + 24,
         *((_QWORD *)this + 7),
         a3,
         0LL,
         1,
         10);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xDAu, 0LL);
  return v7;
}
