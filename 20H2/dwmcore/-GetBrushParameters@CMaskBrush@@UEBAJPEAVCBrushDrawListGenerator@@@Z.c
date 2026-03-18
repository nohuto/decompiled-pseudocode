/*
 * XREFs of ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800C5300
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180008B94 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18009F37C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18009F53C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18009F57C (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18009F5E8 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?IsValidMaskResource@CMaskBrush@@CA_NPEBVCResource@@@Z @ 0x1800C965C (-IsValidMaskResource@CMaskBrush@@CA_NPEBVCResource@@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180152344 (McTemplateU0q_EventWriteTransfer.c)
 */

__int64 __fastcall CMaskBrush::GetBrushParameters(CMaskBrush *this, struct CBrushDrawListGenerator *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int128 v7; // xmm0
  __int64 (__fastcall ***v8)(_QWORD, __int64); // rax
  __int64 v9; // rcx
  int v10; // esi
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 (__fastcall ***v14)(_QWORD, __int64); // rax
  __int64 v15; // rcx
  __int64 v17; // rcx
  __int64 (__fastcall ***v18[2])(_QWORD, __int64); // [rsp+30h] [rbp-39h] BYREF
  _BYTE v19[16]; // [rsp+40h] [rbp-29h] BYREF
  int v20; // [rsp+50h] [rbp-19h]
  __int128 v21; // [rsp+54h] [rbp-15h]
  __int64 (__fastcall ***v22)(_QWORD, __int64); // [rsp+68h] [rbp-1h]
  char v23; // [rsp+8Ch] [rbp+23h]

  CBrushDrawListGenerator::CBrushDrawListGenerator(
    (CBrushDrawListGenerator *)v19,
    *(struct CDrawingContext **)a2,
    (const struct D2D_SIZE_F *)a2 + 1);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 11) + 328LL))(*((_QWORD *)this + 11), v19);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x1BDu, 0LL);
    goto LABEL_18;
  }
  v7 = v21;
  *((_BYTE *)a2 + 76) = v23;
  v8 = v22;
  v22 = 0LL;
  v18[0] = v8;
  *(_OWORD *)((char *)a2 + 20) = v7;
  CBrushDrawListGenerator::AttachInput((__int64)a2, 0, v18);
  v10 = v20;
  if ( v18[0] )
    std::default_delete<CShape>::operator()(v9, v18[0]);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v19);
  v11 = *((_QWORD *)this + 10);
  if ( !v11 )
    goto LABEL_10;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 56LL))(v11, 111LL)
    && !CMaskBrush::IsValidMaskResource(*(const struct CResource **)(*((_QWORD *)this + 10) + 80LL)) )
  {
    v6 = -2147024846;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
      McTemplateU0q_EventWriteTransfer(v17, &EVTDESC_MASKBRUSH_DRAW_ERROR_INVALID_INPUT, 2147942450LL);
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024846, 0x1D6u, 0LL);
    goto LABEL_19;
  }
  CBrushDrawListGenerator::CBrushDrawListGenerator(
    (CBrushDrawListGenerator *)v19,
    *(struct CDrawingContext **)a2,
    (const struct D2D_SIZE_F *)a2 + 1);
  v12 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 10) + 328LL))(*((_QWORD *)this + 10), v19);
  v6 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1DEu, 0LL);
LABEL_18:
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v19);
LABEL_19:
    CBrushDrawListGenerator::Reset(a2);
    return v6;
  }
  v14 = v22;
  v22 = 0LL;
  v18[0] = v14;
  CBrushDrawListGenerator::AttachInput((__int64)a2, 1u, v18);
  v10 |= v20;
  if ( v18[0] )
    std::default_delete<CShape>::operator()(v15, v18[0]);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v19);
LABEL_10:
  *((_DWORD *)a2 + 4) = v10;
  return 0;
}
