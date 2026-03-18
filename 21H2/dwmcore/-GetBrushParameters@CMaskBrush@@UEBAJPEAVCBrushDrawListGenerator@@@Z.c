/*
 * XREFs of ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800DFC30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18008EE3C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18008EE7C (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18008EEE4 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008EF54 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008EFF4 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?IsValidMaskResource@CMaskBrush@@CA_NPEBVCResource@@@Z @ 0x1800DFE68 (-IsValidMaskResource@CMaskBrush@@CA_NPEBVCResource@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 */

__int64 __fastcall CMaskBrush::GetBrushParameters(CMaskBrush *this, struct CBrushDrawListGenerator *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 (__fastcall ***v7)(_QWORD, __int64); // rax
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, __int64); // rax
  __int64 v14; // rcx
  __int64 v16; // rcx
  __int64 (__fastcall ***v17[2])(_QWORD, __int64); // [rsp+30h] [rbp-39h] BYREF
  _BYTE v18[16]; // [rsp+40h] [rbp-29h] BYREF
  int v19; // [rsp+50h] [rbp-19h]
  __int128 v20; // [rsp+54h] [rbp-15h]
  __int64 (__fastcall ***v21)(_QWORD, __int64); // [rsp+68h] [rbp-1h]

  CBrushDrawListGenerator::CBrushDrawListGenerator(
    (CBrushDrawListGenerator *)v18,
    *(struct CDrawingContext **)a2,
    (const struct D2D_SIZE_F *)a2 + 1);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 12) + 320LL))(*((_QWORD *)this + 12), v18);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, v4, 0x1BDu);
    goto LABEL_18;
  }
  v7 = v21;
  v21 = 0LL;
  v17[0] = v7;
  *(_OWORD *)((char *)a2 + 20) = v20;
  CBrushDrawListGenerator::AttachInput((__int64)a2, 0, v17);
  v9 = v19;
  if ( v17[0] )
    std::default_delete<CDrawListBrush>::operator()(v8, v17[0]);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v18);
  v10 = *((_QWORD *)this + 11);
  if ( !v10 )
    goto LABEL_10;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 56LL))(v10, 111LL)
    && !CMaskBrush::IsValidMaskResource(*(const struct CResource **)(*((_QWORD *)this + 11) + 88LL)) )
  {
    v6 = -2147024846;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400000) != 0 )
      McTemplateU0q_EventWriteTransfer(v16, &EVTDESC_MASKBRUSH_DRAW_ERROR_INVALID_INPUT, 2147942450LL);
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, -2147024846, 0x1D4u);
    goto LABEL_19;
  }
  CBrushDrawListGenerator::CBrushDrawListGenerator(
    (CBrushDrawListGenerator *)v18,
    *(struct CDrawingContext **)a2,
    (const struct D2D_SIZE_F *)a2 + 1);
  v11 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 11) + 320LL))(*((_QWORD *)this + 11), v18);
  v6 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x1DCu);
LABEL_18:
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v18);
LABEL_19:
    CBrushDrawListGenerator::Reset(a2);
    return v6;
  }
  v13 = v21;
  v21 = 0LL;
  v17[0] = v13;
  CBrushDrawListGenerator::AttachInput((__int64)a2, 1u, v17);
  v9 |= v19;
  if ( v17[0] )
    std::default_delete<CDrawListBrush>::operator()(v14, v17[0]);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v18);
LABEL_10:
  *((_DWORD *)a2 + 4) = v9;
  return 0;
}
