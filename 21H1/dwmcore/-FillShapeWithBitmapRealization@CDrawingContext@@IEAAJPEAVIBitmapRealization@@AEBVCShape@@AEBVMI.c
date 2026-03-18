/*
 * XREFs of ?FillShapeWithBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x180049BC0
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800497D4 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x180178FD0 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 *     ?DrawBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1_NH@Z @ 0x1801791AC (-DrawBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUMilRectF@.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180033304 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x180049F00 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUMil.c)
 *     ?RecordBitmapRealizationInfo@CDrawingContext@@QEAAXPEAVIBitmapRealization@@@Z @ 0x18004A354 (-RecordBitmapRealizationInfo@CDrawingContext@@QEAAXPEAVIBitmapRealization@@@Z.c)
 *     ?EnsureDeviceResource@CDrawListBitmap@@QEBAJPEBVCDrawingContext@@@Z @ 0x18004A720 (-EnsureDeviceResource@CDrawListBitmap@@QEBAJPEBVCDrawingContext@@@Z.c)
 *     ??0?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x1800DC3D0 (--0-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithBitmapRealization(
        CDrawingContext *this,
        struct IBitmapRealization *a2,
        const struct CShape *a3,
        const struct MILMatrix3x2 *a4,
        bool a5)
{
  __int64 v8; // rsi
  SIZE_T v9; // rbx
  HANDLE ProcessHeap; // rax
  char *v11; // rax
  __int64 v12; // rcx
  void *v13; // rdi
  char *i; // rbx
  __int64 v15; // rbx
  char *v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // ebx
  int v20; // eax
  __int64 v21; // rcx
  HANDLE v22; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int128 v27; // [rsp+40h] [rbp-30h] BYREF
  __int64 v28; // [rsp+50h] [rbp-20h]
  int v29; // [rsp+58h] [rbp-18h]
  __int64 v30; // [rsp+5Ch] [rbp-14h]
  int v31; // [rsp+64h] [rbp-Ch]
  bool v32; // [rsp+68h] [rbp-8h]
  unsigned int v33; // [rsp+B0h] [rbp+40h] BYREF

  CDrawingContext::RecordBitmapRealizationInfo(this, a2);
  if ( !(*(unsigned __int8 (__fastcall **)(const struct CShape *, unsigned int *))(*(_QWORD *)a3 + 40LL))(a3, &v33) )
  {
    v19 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2147024809, 0x7EBu, 0LL);
    return (unsigned int)v19;
  }
  v8 = v33;
  v30 = 0LL;
  v31 = 0;
  v28 = 0LL;
  v27 = 0LL;
  v29 = 0;
  v9 = 16LL * v33;
  v32 = 0;
  if ( !is_mul_ok(v33, 0x10uLL) )
    v9 = -1LL;
  ProcessHeap = GetProcessHeap();
  v11 = (char *)HeapAlloc(ProcessHeap, 0, v9);
  v13 = v11;
  if ( v11 )
  {
    for ( i = v11; v8; --v8 )
    {
      TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(i);
      i += 16;
    }
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13 )
  {
    v19 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x7DDu, 0LL);
    goto LABEL_17;
  }
  (*(void (__fastcall **)(const struct CShape *, void *, _QWORD))(*(_QWORD *)a3 + 48LL))(a3, v13, v33);
  v15 = *((_QWORD *)&v27 + 1);
  *((_QWORD *)&v27 + 1) = a2;
  if ( a2 )
  {
    v16 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v16 + 8LL))(v16);
  }
  if ( v15 )
  {
    v24 = v15 + *(int *)(*(_QWORD *)(v15 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  v17 = CDrawListBitmap::EnsureDeviceResource((CDrawListBitmap *)&v27, this);
  v19 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x43u, 0LL);
  else
    v32 = 0;
  if ( v19 < 0 )
  {
    v25 = *((_QWORD *)&v27 + 1);
    *((_QWORD *)&v27 + 1) = 0LL;
    if ( v25 )
    {
      v26 = v25 + 8 + *(int *)(*(_QWORD *)(v25 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v19, 0x7E1u, 0LL);
    goto LABEL_26;
  }
  v32 = a5;
  v20 = CDrawingContext::FillRectanglesWithDrawListBitmap(this, (CDrawListBitmap *)&v27);
  v19 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x7E7u, 0LL);
LABEL_26:
    operator delete(v13);
    goto LABEL_17;
  }
  v22 = GetProcessHeap();
  HeapFree(v22, 0, v13);
LABEL_17:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v27 + 8);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v27);
  return (unsigned int)v19;
}
