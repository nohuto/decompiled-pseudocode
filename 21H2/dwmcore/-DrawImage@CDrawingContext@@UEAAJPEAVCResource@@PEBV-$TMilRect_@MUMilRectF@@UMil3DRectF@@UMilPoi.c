/*
 * XREFs of ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UtagMILCMD_RECTRESOURCE@@$0IL@@@@Z @ 0x1801B07D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800B0C64 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800D324C (--1CRectanglesShape@@UEAA@XZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x1800D3284 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801117F6 (McTemplateU0qq_EventWriteTransfer.c)
 *     gsl::final_action__lambda_f4147c70b2756a3d994ea7e0ab72763c___::_final_action__lambda_f4147c70b2756a3d994ea7e0ab72763c___ @ 0x1801AF3F4 (gsl--final_action__lambda_f4147c70b2756a3d994ea7e0ab72763c___--_final_action__lambda_f4147c70b27.c)
 */

__int64 __fastcall CDrawingContext::DrawImage(__int64 a1, _QWORD *a2, __int128 *a3, float *a4)
{
  unsigned int v4; // esi
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm3_4
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  int v17; // [rsp+30h] [rbp-69h] BYREF
  unsigned int *v18[2]; // [rsp+38h] [rbp-61h] BYREF
  char v19; // [rsp+48h] [rbp-51h]
  __int128 v20; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v21[80]; // [rsp+60h] [rbp-39h] BYREF

  v4 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Start,
      4,
      *(_DWORD *)(a1 + 7944));
  if ( a2 && (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a2 + 56LL))(a2, 83LL) )
  {
    if ( a4 )
    {
      v12 = a4[16];
      v11 = a4[17];
      v10 = a4[18];
      v9 = a4[19];
      *(_QWORD *)&v20 = __PAIR64__(LODWORD(v11), LODWORD(v12));
      *((_QWORD *)&v20 + 1) = __PAIR64__(LODWORD(v9), LODWORD(v10));
    }
    else
    {
      v20 = *a3;
      v9 = *((float *)&v20 + 3);
      v10 = *((float *)&v20 + 2);
      v11 = *((float *)&v20 + 1);
      LODWORD(v12) = v20;
    }
    if ( (float)(v10 - v12) >= 2.220446e-16 && (float)(v9 - v11) >= 2.220446e-16 )
    {
      v13 = *(_DWORD *)(a1 + 292);
      *(_DWORD *)(a1 + 292) = 0;
      v17 = v13;
      v18[1] = (unsigned int *)(a1 - 16);
      v18[0] = (unsigned int *)&v17;
      v19 = 1;
      CRectanglesShape::CRectanglesShape((CRectanglesShape *)v21, (const struct MilRectF *)&v20);
      v14 = CDrawingContext::FillShapeWithBitmap(
              (CDrawingContext *)(a1 - 16),
              (struct IBitmapResource *)((char *)a2 + *(int *)(a2[8] + 8LL) + 64),
              (const struct CMILMatrix *)&CMILMatrix::Identity,
              (const struct CShape *)v21,
              0,
              *(_DWORD *)(a1 + 7944));
      v4 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x2B2u);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v21);
      gsl::final_action__lambda_f4147c70b2756a3d994ea7e0ab72763c___::_final_action__lambda_f4147c70b2756a3d994ea7e0ab72763c___(v18);
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      (const EVENT_DESCRIPTOR *)"3",
      4,
      *(_DWORD *)(a1 + 7944));
  return v4;
}
