/*
 * XREFs of ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x1801AFA60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x1800B10C4 (-FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMI.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800D324C (--1CRectanglesShape@@UEAA@XZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x1800D3284 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z @ 0x1801B3E8C (-RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmap(CDrawingContext *this, struct CResource *a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rcx
  struct IBitmapRealization *v14; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v15[6]; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v16[20]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v17; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v18[80]; // [rsp+B0h] [rbp-50h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 83LL) )
  {
    CDrawingContext::RecordBitmapResourceInfo(
      (CDrawingContext *)((char *)this - 16),
      (struct CResource *)((char *)a2 + *(int *)(*((_QWORD *)a2 + 8) + 8LL) + 64));
    v5 = (__int64 *)((char *)a2 + *(int *)(*((_QWORD *)a2 + 8) + 8LL) + 64);
    v6 = *v5;
    v14 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64 *, struct IBitmapRealization **))(v6 + 56))(v5, &v14);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0xAFBu);
    }
    else
    {
      v16[16] = 0;
      v17 = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(struct IBitmapRealization *, _DWORD *, __int128 *))(*(_QWORD *)v14 + 8LL))(
             v14,
             v16,
             &v17) )
      {
        CMILMatrix::Transform2DBoundsHelper<0>((__int64)v16, (__int64)&v17, (float *)&v17, v10);
      }
      CRectanglesShape::CRectanglesShape((CRectanglesShape *)v18, (const struct MilRectF *)&v17);
      v15[0] = v16[0];
      v15[1] = v16[1];
      v15[2] = v16[4];
      v15[3] = v16[5];
      v15[4] = v16[12];
      v15[5] = v16[13];
      v11 = CDrawingContext::FillShapeWithBitmapRealization(
              (CDrawingContext *)((char *)this - 16),
              v14,
              (const struct CShape *)v18,
              (const struct MILMatrix3x2 *)v15,
              0);
      v9 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0xB08u);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v18);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v14);
  }
  else
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0LL, -2147024809, 0xB0Cu);
  }
  return v9;
}
