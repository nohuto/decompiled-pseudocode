/*
 * XREFs of ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UtagMILCMD_RECTRESOURCE@@$0IM@@@@Z @ 0x180175440
 * Callers:
 *     <none>
 * Callees:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800600DC (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x1800A34A8 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800E1C20 (--1CRectanglesShape@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801523A8 (McTemplateU0qq_EventWriteTransfer.c)
 *     gsl::final_action__lambda_b84a1ee213fa572390f758b550ef68e0___::_final_action__lambda_b84a1ee213fa572390f758b550ef68e0___ @ 0x180174260 (gsl--final_action__lambda_b84a1ee213fa572390f758b550ef68e0___--_final_action__lambda_b84a1ee213f.c)
 */

__int64 __fastcall CDrawingContext::DrawImage(__int64 a1, _QWORD *a2, __int128 *a3, float *a4)
{
  unsigned int v4; // r14d
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
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Start,
      4,
      *(_DWORD *)(a1 + 5928));
  if ( a2 && (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a2 + 56LL))(a2, 83LL) )
  {
    if ( a4 )
    {
      v12 = a4[14];
      v11 = a4[15];
      v10 = a4[16];
      v9 = a4[17];
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
      v13 = *(_DWORD *)(a1 + 264);
      *(_DWORD *)(a1 + 264) = 0;
      v17 = v13;
      v18[1] = (unsigned int *)(a1 - 16);
      v18[0] = (unsigned int *)&v17;
      v19 = 1;
      CRectanglesShape::CRectanglesShape((CRectanglesShape *)v21, (const struct MilRectF *)&v20);
      v14 = CDrawingContext::FillShapeWithBitmap(
              (CDrawingContext *)(a1 - 16),
              (struct IBitmapResource *)((char *)a2 + *(int *)(a2[7] + 8LL) + 56),
              (const struct CMILMatrix *)&CMILMatrix::Identity,
              (const struct CShape *)v21,
              0,
              *(_DWORD *)(a1 + 5928));
      v4 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x2A2u, 0LL);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v21);
      gsl::final_action__lambda_b84a1ee213fa572390f758b550ef68e0___::_final_action__lambda_b84a1ee213fa572390f758b550ef68e0___(v18);
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Stop,
      4,
      *(_DWORD *)(a1 + 5928));
  return v4;
}
