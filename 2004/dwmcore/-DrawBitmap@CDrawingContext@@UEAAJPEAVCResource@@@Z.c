/*
 * XREFs of ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x1801763C0
 * Callers:
 *     ?Draw@CSnapshot@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801F5FCC (-Draw@CSnapshot@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x1800419F4 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?RecordBitmapResourceInfo@CDrawingContext@@QEAAXPEAVIBitmapResource@@@Z @ 0x18004C678 (-RecordBitmapResourceInfo@CDrawingContext@@QEAAXPEAVIBitmapResource@@@Z.c)
 *     ?FillShapeWithBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x18004E758 (-FillShapeWithBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMI.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180072960 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800E19B0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmap(CDrawingContext *this, struct CResource *a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  struct IBitmapRealization *v13; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v14[6]; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v15[20]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v16; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v17[80]; // [rsp+B0h] [rbp-50h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 83LL) )
  {
    CDrawingContext::RecordBitmapResourceInfo(
      (CDrawingContext *)((char *)this - 16),
      (struct CResource *)((char *)a2 + *(int *)(*((_QWORD *)a2 + 7) + 8LL) + 56));
    v5 = (__int64 *)((char *)a2 + *(int *)(*((_QWORD *)a2 + 7) + 8LL) + 56);
    v6 = *v5;
    v13 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64 *, struct IBitmapRealization **))(v6 + 48))(v5, &v13);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xA6Bu, 0LL);
    }
    else
    {
      v15[16] = 0;
      v16 = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(struct IBitmapRealization *, _DWORD *, __int128 *))(*(_QWORD *)v13 + 8LL))(
             v13,
             v15,
             &v16) )
      {
        CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v15, (__int64)&v16, (float *)&v16);
      }
      CRectanglesShape::CRectanglesShape((CRectanglesShape *)v17, (const struct MilRectF *)&v16);
      v14[0] = v15[0];
      v14[1] = v15[1];
      v14[2] = v15[4];
      v14[3] = v15[5];
      v14[4] = v15[12];
      v14[5] = v15[13];
      v10 = CDrawingContext::FillShapeWithBitmapRealization(
              (CDrawingContext *)((char *)this - 16),
              v13,
              (const struct CShape *)v17,
              (const struct MILMatrix3x2 *)v14,
              0);
      v9 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xA78u, 0LL);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v17);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v13);
  }
  else
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024809, 0xA7Cu, 0LL);
  }
  return v9;
}
