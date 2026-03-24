/*
 * XREFs of ?AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801B2214
 * Callers:
 *     ?CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009FFF0 (-CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180007474 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800563A4 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$make_unique@VCComposeTop@@$$V$0A@@std@@YA?AV?$unique_ptr@VCComposeTop@@U?$default_delete@VCComposeTop@@@std@@@0@XZ @ 0x1801B2024 (--$make_unique@VCComposeTop@@$$V$0A@@std@@YA-AV-$unique_ptr@VCComposeTop@@U-$default_delete@VCCo.c)
 *     ??4?$unique_ptr@VCComposeTop@@U?$default_delete@VCComposeTop@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801B21A4 (--4-$unique_ptr@VCComposeTop@@U-$default_delete@VCComposeTop@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801F9748 (-AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CDesktopTree::AddNewComposeTopContent(
        CDesktopTree *this,
        struct IBitmapResource *a2,
        const struct CShape *a3,
        const struct CMILMatrix *a4)
{
  __int64 *v4; // rdi
  CComposeTop *v6; // rcx
  __int64 *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  __int64 (__fastcall ***v12)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v13)(_QWORD, __int64); // rdx
  unsigned int v14; // ebx
  int v15; // eax
  __int64 v16; // rcx
  void *v18; // [rsp+50h] [rbp+8h] BYREF

  v4 = (__int64 *)((char *)this + 5912);
  v6 = (CComposeTop *)*((_QWORD *)this + 739);
  if ( v6 )
    goto LABEL_10;
  v9 = std::make_unique<CComposeTop,,0>(&v18);
  std::unique_ptr<CComposeTop>::operator=(v4, v9);
  v11 = v18;
  if ( v18 )
  {
    v12 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)v18 + 20);
    if ( v12 )
      std::default_delete<CShape>::operator()(v10, v12);
    v13 = (__int64 (__fastcall ***)(_QWORD, __int64))v11[2];
    if ( v13 )
      std::default_delete<CShape>::operator()(v10, v13);
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)(v11 + 1));
    operator delete(v11);
  }
  v6 = (CComposeTop *)*v4;
  if ( *v4 )
  {
LABEL_10:
    v15 = CComposeTop::AddNewContent(v6, a2, a3, a4);
    v14 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x72u, 0LL);
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2147024882, 0x6Du, 0LL);
  }
  return v14;
}
