/*
 * XREFs of ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x180004A9C
 * Callers:
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x180004548 (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUMilRectF@@$0-0@gsl@@AEBU_D3D.c)
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x1800B05F8 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUMil.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@M$01$01$09@@QEAA_NPEAM@Z @ 0x180004C70 (-Pop@-$CWatermarkStack@M$01$01$09@@QEAA_NPEAM@Z.c)
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x180004C88 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Create@CMultiPrimitiveDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@PEAPEAV1@@Z @ 0x180004D14 (-Create@CMultiPrimitiveDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@V.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x18008EE08 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18008EE3C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008EF54 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008EFF4 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x18008F04C (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180094700 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x1800B0158 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x1800B0560 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::FillRectanglesWithDrawListBrush(
        struct CDrawingContext *a1,
        __int64 **a2,
        __int64 a3,
        __int128 *a4)
{
  __int64 *v8; // rcx
  __int64 v9; // rax
  char v10; // al
  int v11; // r8d
  CMultiPrimitiveDrawListBrush *v12; // rcx
  int v13; // ebx
  CMultiPrimitiveDrawListBrush *v14; // rax
  __int128 v15; // xmm0
  int DrawList; // eax
  int v17; // eax
  unsigned int v18; // ecx
  int v20; // r9d
  unsigned int v21; // [rsp+20h] [rbp-E0h]
  CMultiPrimitiveDrawListBrush *v22; // [rsp+30h] [rbp-D0h] BYREF
  CMultiPrimitiveDrawListBrush *v23; // [rsp+38h] [rbp-C8h] BYREF
  CMultiPrimitiveDrawListBrush **v24; // [rsp+40h] [rbp-C0h]
  CMultiPrimitiveDrawListBrush *v25; // [rsp+48h] [rbp-B8h] BYREF
  char v26; // [rsp+50h] [rbp-B0h]
  __int128 v27; // [rsp+60h] [rbp-A0h] BYREF
  int v28; // [rsp+70h] [rbp-90h]
  int v29; // [rsp+BCh] [rbp-44h]
  char v30; // [rsp+C0h] [rbp-40h]
  _BYTE v31[16]; // [rsp+D0h] [rbp-30h] BYREF
  int v32; // [rsp+E0h] [rbp-20h]
  __int128 v33; // [rsp+E4h] [rbp-1Ch]

  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v31, a1);
  v8 = *a2;
  v28 = 0;
  v27 = 0LL;
  v29 = 257;
  v9 = *v8;
  v30 = 0;
  v10 = (*(__int64 (__fastcall **)(__int64 *))(v9 + 24))(v8);
  v11 = v32;
  v23 = 0LL;
  v25 = 0LL;
  if ( v10 )
    v11 = 512;
  v24 = &v23;
  v32 = v11;
  v26 = 1;
  v13 = CMultiPrimitiveDrawListBrush::Create(a2, a3, &v25);
  if ( v26 )
  {
    v12 = *v24;
    *v24 = v25;
    if ( v12 )
      CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v12, 1u);
  }
  if ( v13 < 0 )
  {
    v20 = v13;
    v21 = 858;
    goto LABEL_21;
  }
  v14 = v23;
  v15 = *a4;
  v23 = 0LL;
  v22 = v14;
  v33 = v15;
  CBrushDrawListGenerator::AttachInput(v31, 0LL, &v22);
  if ( v22 )
    std::default_delete<CDrawListBrush>::operator()();
  DrawList = CBrushDrawListGenerator::GenerateDrawList(
               (CBrushDrawListGenerator *)v31,
               (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v27,
               (struct CDrawingContext *)((char *)a1 + 3488));
  v13 = DrawList;
  if ( DrawList < 0 )
  {
    v21 = 866;
    goto LABEL_19;
  }
  LODWORD(v22) = (_DWORD)FLOAT_1_0;
  DrawList = CWatermarkStack<float,64,2,10>::Push((char *)a1 + 3104, &v22);
  v13 = DrawList;
  if ( DrawList < 0 )
  {
    v21 = 869;
LABEL_19:
    v20 = DrawList;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v12, 0LL, 0, v20, v21, 0LL);
    goto LABEL_12;
  }
  v17 = CDrawListEntryBuilder::Render((struct CDrawingContext *)((char *)a1 + 3488), a1);
  v13 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x368u, 0LL);
  CWatermarkStack<float,2,2,10>::Pop((char *)a1 + 3104);
LABEL_12:
  CDrawListEntryBuilder::Reset((struct CDrawingContext *)((char *)a1 + 3488));
  if ( v23 )
    CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v23, 1u);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v31);
  return (unsigned int)v13;
}
