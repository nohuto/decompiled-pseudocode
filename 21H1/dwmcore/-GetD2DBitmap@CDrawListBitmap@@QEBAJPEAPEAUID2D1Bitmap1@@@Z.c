/*
 * XREFs of ?GetD2DBitmap@CDrawListBitmap@@QEBAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800719F8
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180070974 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentRealization@CDrawListBitmap@@IEBAJPEAPEAVIBitmapRealization@@@Z @ 0x18004A468 (-GetCurrentRealization@CDrawListBitmap@@IEBAJPEAPEAVIBitmapRealization@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListBitmap::GetD2DBitmap(CDrawListBitmap *this, struct ID2D1Bitmap1 **a2)
{
  int CurrentRealization; // eax
  __int64 v5; // rcx
  __int64 v6; // r9
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  struct IBitmapRealization *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  CurrentRealization = CDrawListBitmap::GetCurrentRealization(this, &v11);
  v7 = CurrentRealization;
  if ( CurrentRealization < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, CurrentRealization, 0xE5u, 0LL);
  }
  else
  {
    LOBYTE(v6) = *((_BYTE *)this + 40);
    v8 = (*(__int64 (__fastcall **)(struct IBitmapRealization *, char *, struct ID2D1Bitmap1 **, __int64))(*(_QWORD *)v11 + 56LL))(
           v11,
           (char *)this + 16,
           a2,
           v6);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xE9u, 0LL);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v11);
  return v7;
}
