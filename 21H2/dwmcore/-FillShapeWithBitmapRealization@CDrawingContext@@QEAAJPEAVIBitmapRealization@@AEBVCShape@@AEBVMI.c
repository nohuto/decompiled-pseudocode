/*
 * XREFs of ?FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x1800B10C4
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800B0C64 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x1801AFA60 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@_NHM@Z @ 0x1801AFCE0 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_ea_1801AFCE0.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x1800B05F8 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUMil.c)
 *     ??0?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x1800F9440 (--0-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithBitmapRealization(
        CDrawingContext *this,
        struct IBitmapRealization *a2,
        const struct CShape *a3,
        const struct MILMatrix3x2 *a4,
        bool a5)
{
  __int64 v9; // rcx
  char *v10; // rcx
  __int64 v11; // rdi
  SIZE_T v12; // rbx
  HANDLE ProcessHeap; // rax
  char *v14; // rax
  __int64 v15; // rcx
  void *v16; // rsi
  char *i; // rbx
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // ebx
  HANDLE v21; // rax
  _QWORD v23[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v24; // [rsp+40h] [rbp-20h] BYREF
  struct IBitmapRealization *v25; // [rsp+48h] [rbp-18h] BYREF
  bool v26; // [rsp+50h] [rbp-10h]
  unsigned int v27; // [rsp+A0h] [rbp+40h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(const struct CShape *, unsigned int *))(*(_QWORD *)a3 + 64LL))(a3, &v27) )
  {
    v24 = 0LL;
    v25 = a2;
    if ( a2 )
    {
      v10 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 4LL) + 8;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 8LL))(v10);
    }
    v11 = v27;
    v26 = a5;
    v12 = 16LL * v27;
    if ( !is_mul_ok(v27, 0x10uLL) )
      v12 = -1LL;
    ProcessHeap = GetProcessHeap();
    v14 = (char *)HeapAlloc(ProcessHeap, 0, v12);
    v16 = v14;
    if ( v14 )
    {
      for ( i = v14; v11; --v11 )
      {
        TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(i);
        i += 16;
      }
      (*(void (__fastcall **)(const struct CShape *, void *, _QWORD))(*(_QWORD *)a3 + 80LL))(a3, v16, v27);
      v23[0] = v27;
      v23[1] = v16;
      v18 = CDrawingContext::FillRectanglesWithDrawListBitmap(this, (CDrawListBitmap *)&v24, (__int64)v23, a4);
      v20 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v18, 0x866u);
        DefaultHeap::Free(v16);
      }
      else
      {
        v21 = GetProcessHeap();
        HeapFree(v21, 0, v16);
      }
    }
    else
    {
      v20 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, -2147024882, 0x860u);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v25);
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v24);
  }
  else
  {
    v20 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, -2147024809, 0x86Au);
  }
  return v20;
}
