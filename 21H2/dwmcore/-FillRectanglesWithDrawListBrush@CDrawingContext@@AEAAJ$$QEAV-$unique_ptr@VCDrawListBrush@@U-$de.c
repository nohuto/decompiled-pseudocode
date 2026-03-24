/*
 * XREFs of ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800944A0
 * Callers:
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x180053988 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUMil.c)
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801771A8 (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUMilRectF@@$0-0@gsl@@AEBU_D3D.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180007474 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x180054450 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180054CC4 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x180093DB4 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x180094130 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18009463C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x180094694 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x1800947C8 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800947FC (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Create@CMultiPrimitiveDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@PEAPEAV1@@Z @ 0x180094A48 (-Create@CMultiPrimitiveDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@V.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
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
  int v11; // edx
  CMultiPrimitiveDrawListBrush *v12; // rcx
  int v13; // ebx
  CMultiPrimitiveDrawListBrush *v14; // rax
  __int128 v15; // xmm0
  __int64 v16; // rcx
  CDrawListEntryBuilder *v17; // rdi
  int DrawList; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // r8d
  unsigned int v26; // r8d
  CMultiPrimitiveDrawListBrush *v27; // [rsp+30h] [rbp-D0h] BYREF
  CMultiPrimitiveDrawListBrush *v28; // [rsp+38h] [rbp-C8h] BYREF
  CMultiPrimitiveDrawListBrush **v29; // [rsp+40h] [rbp-C0h]
  CMultiPrimitiveDrawListBrush *v30; // [rsp+48h] [rbp-B8h] BYREF
  char v31; // [rsp+50h] [rbp-B0h]
  __int128 v32; // [rsp+60h] [rbp-A0h] BYREF
  int v33; // [rsp+70h] [rbp-90h]
  __int16 v34; // [rsp+BCh] [rbp-44h]
  char v35; // [rsp+BEh] [rbp-42h]
  _BYTE v36[16]; // [rsp+C0h] [rbp-40h] BYREF
  int v37; // [rsp+D0h] [rbp-30h]
  __int128 v38; // [rsp+D4h] [rbp-2Ch]
  char v39; // [rsp+10Ch] [rbp+Ch]

  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v36, a1);
  v8 = *a2;
  v32 = 0LL;
  v33 = 0;
  v34 = 1;
  v9 = *v8;
  v35 = 0;
  v10 = (*(__int64 (__fastcall **)(__int64 *))(v9 + 24))(v8);
  v11 = v37;
  v28 = 0LL;
  v30 = 0LL;
  if ( v10 )
    v11 = 512;
  v31 = 1;
  v37 = v11;
  v29 = &v28;
  v13 = CMultiPrimitiveDrawListBrush::Create(a2, a3, &v30);
  if ( v31 )
  {
    v26 = (unsigned int)v29;
    v12 = *v29;
    *v29 = v30;
    if ( v12 )
      CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v12, 1, v26);
  }
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v12, 0LL, 0, v13, 0x35Au, 0LL);
    v17 = (struct CDrawingContext *)((char *)a1 + 3616);
  }
  else
  {
    v14 = v28;
    v15 = *a4;
    v39 = 0;
    v28 = 0LL;
    v38 = v15;
    v27 = v14;
    CBrushDrawListGenerator::AttachInput(v36, 0LL, &v27);
    if ( v27 )
      std::default_delete<CShape>::operator()(v16, (__int64 (__fastcall ***)(_QWORD, __int64))v27);
    v17 = (struct CDrawingContext *)((char *)a1 + 3616);
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)v36,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v32,
                 (struct CDrawingContext *)((char *)a1 + 3616));
    v13 = DrawList;
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, DrawList, 0x362u, 0LL);
    }
    else
    {
      LODWORD(v27) = (_DWORD)FLOAT_1_0;
      v20 = CWatermarkStack<float,64,2,10>::Push((char *)a1 + 3232, &v27);
      v13 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x365u, 0LL);
      }
      else
      {
        v22 = CDrawListEntryBuilder::Render((struct CDrawListEntry ***)a1 + 452, a1);
        v13 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x368u, 0LL);
      }
    }
  }
  CDrawListEntryBuilder::Reset(v17);
  if ( v28 )
    CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v28, 1, v24);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v36);
  return (unsigned int)v13;
}
