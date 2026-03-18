/*
 * XREFs of ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x180054F4C
 * Callers:
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x18004F084 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUMil.c)
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x180178988 (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUMilRectF@@$0-0@gsl@@AEBU_D3D.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x1800091A4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CMultiPrimitiveDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@PEAPEAV1@@Z @ 0x18004F3C8 (-Create@CMultiPrimitiveDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@V.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x180053180 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x1800539F4 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x180055214 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180057020 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800C19C4 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800DB610 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::FillRectanglesWithDrawListBrush(
        struct CDrawingContext *a1,
        struct CMultiPrimitiveDrawListBrush *a2,
        _OWORD *a3,
        __int128 *a4)
{
  _QWORD *v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 *v11; // rcx
  __int64 v12; // rax
  char v13; // al
  int v14; // r8d
  CMultiPrimitiveDrawListBrush *v15; // rcx
  int v16; // edi
  unsigned int v17; // r8d
  __int64 (__fastcall ***v18)(_QWORD, __int64); // rdx
  CMultiPrimitiveDrawListBrush *v19; // rax
  int v20; // eax
  int DrawList; // eax
  unsigned int v22; // r8d
  _QWORD *v23; // rbx
  _QWORD *v24; // r15
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // ebx
  void (__fastcall ***v28)(_QWORD, __int64); // rcx
  unsigned int *v29; // rbx
  int v31; // r9d
  unsigned int v32; // [rsp+20h] [rbp-E0h]
  CMultiPrimitiveDrawListBrush *v33; // [rsp+30h] [rbp-D0h] BYREF
  int v34; // [rsp+38h] [rbp-C8h] BYREF
  CMultiPrimitiveDrawListBrush **v35; // [rsp+40h] [rbp-C0h]
  CMultiPrimitiveDrawListBrush *v36; // [rsp+48h] [rbp-B8h] BYREF
  char v37; // [rsp+50h] [rbp-B0h]
  __int128 v38; // [rsp+60h] [rbp-A0h] BYREF
  int v39; // [rsp+70h] [rbp-90h]
  __int16 v40; // [rsp+BCh] [rbp-44h]
  char v41; // [rsp+BEh] [rbp-42h]
  struct CDrawingContext *v42; // [rsp+C0h] [rbp-40h] BYREF
  int v43; // [rsp+C8h] [rbp-38h]
  int v44; // [rsp+CCh] [rbp-34h]
  int i; // [rsp+D0h] [rbp-30h]
  __int128 v46; // [rsp+D4h] [rbp-2Ch]
  _QWORD v47[4]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v48; // [rsp+108h] [rbp+8h] BYREF
  char v49; // [rsp+10Ch] [rbp+Ch]

  v43 = 0;
  v4 = v47;
  v44 = 0;
  v5 = 4LL;
  i = 0;
  v6 = 4LL;
  v42 = a1;
  *(_QWORD *)&v46 = 0x3F8000003F800000LL;
  *((_QWORD *)&v46 + 1) = 0x3F8000003F800000LL;
  do
  {
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v4++);
    --v6;
  }
  while ( v6 );
  v11 = *(__int64 **)a2;
  v48 = 0;
  v49 = 0;
  v38 = 0LL;
  v12 = *v11;
  v39 = 0;
  v40 = 1;
  v41 = 0;
  v13 = (*(__int64 (__fastcall **)(__int64 *))(v12 + 24))(v11);
  v14 = i;
  v33 = 0LL;
  v36 = 0LL;
  if ( v13 )
    v14 = 512;
  v35 = &v33;
  i = v14;
  v37 = 1;
  v16 = CMultiPrimitiveDrawListBrush::Create(a2, a3, &v36);
  if ( v37 )
  {
    v17 = (unsigned int)v35;
    v15 = *v35;
    *v35 = v36;
    if ( v15 )
      CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v15, 1, v17);
  }
  if ( v16 < 0 )
  {
    v31 = v16;
    v32 = 838;
    goto LABEL_39;
  }
  v18 = (__int64 (__fastcall ***)(_QWORD, __int64))v47[0];
  v19 = v33;
  v49 = 0;
  v33 = 0LL;
  v47[0] = v19;
  v46 = *a4;
  if ( v18 )
    std::default_delete<CShape>::operator()((__int64)v15, v18);
  v20 = v48;
  if ( v48 <= 1 )
    v20 = 1;
  v48 = v20;
  DrawList = CBrushDrawListGenerator::GenerateDrawList(
               (CBrushDrawListGenerator *)&v42,
               (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v38,
               (struct CDrawingContext *)((char *)a1 + 3616));
  v16 = DrawList;
  if ( DrawList < 0 )
  {
    v32 = 846;
    goto LABEL_36;
  }
  v34 = 1065353216;
  DrawList = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)a1 + 3232, &v34);
  v16 = DrawList;
  if ( DrawList < 0 )
  {
    v32 = 849;
    goto LABEL_36;
  }
  DrawList = CDrawListEntryBuilder::Render((struct CDrawingContext *)((char *)a1 + 3616), a1);
  v16 = DrawList;
  if ( DrawList < 0 )
  {
    v32 = 852;
LABEL_36:
    v31 = DrawList;
LABEL_39:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, 0LL, 0, v31, v32, 0LL);
  }
  v23 = (_QWORD *)*((_QWORD *)a1 + 457);
  v24 = (_QWORD *)*((_QWORD *)a1 + 458);
  while ( v23 != v24 )
  {
    if ( *v23 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v23 + 8LL))(*v23);
      *v23 = 0LL;
    }
    ++v23;
  }
  v25 = (__int64)(*((_QWORD *)a1 + 458) - *((_QWORD *)a1 + 457)) >> 3;
  if ( v25 )
    *((_QWORD *)a1 + 458) -= 8 * v25;
  *((_DWORD *)a1 + 928) = 0;
  v26 = *((_QWORD *)a1 + 456);
  if ( v26 )
  {
    *((_QWORD *)a1 + 456) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
  }
  if ( v33 )
    CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v33, 1, v22);
  v27 = 0;
  *(_QWORD *)&v46 = 0x3F8000003F800000LL;
  *((_QWORD *)&v46 + 1) = 0x3F8000003F800000LL;
  v49 = 0;
  for ( i = 0; v27 < v48; ++v27 )
  {
    v28 = (void (__fastcall ***)(_QWORD, __int64))v47[v27];
    v47[v27] = 0LL;
    if ( v28 )
      (**v28)(v28, 1LL);
  }
  v48 = 0;
  v29 = &v48;
  do
  {
    v29 -= 2;
    std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(v29);
    --v5;
  }
  while ( v5 );
  return (unsigned int)v16;
}
