/*
 * XREFs of ?GetD2DBitmap@CDrawListBitmap@@QEBAJPEAPEAUID2D1Bitmap1@@@Z @ 0x180040E64
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18003FAE8 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCurrentRealization@CDrawListBitmap@@IEBAJPEAPEAVIBitmapRealization@@@Z @ 0x180054078 (-GetCurrentRealization@CDrawListBitmap@@IEBAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListBitmap::GetD2DBitmap(CDrawListBitmap *this, struct ID2D1Bitmap1 **a2)
{
  int CurrentRealization; // eax
  unsigned int v5; // ecx
  __int64 v6; // r9
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // ecx
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
