/*
 * XREFs of ?RecordBitmapRealizationInfo@CDrawingContext@@QEAAXPEAVIBitmapRealization@@@Z @ 0x180060C64
 * Callers:
 *     ?RecordContentInfo@CDrawListBitmap@@QEBAXPEAVCDrawingContext@@@Z @ 0x18004DA7C (-RecordContentInfo@CDrawListBitmap@@QEBAXPEAVCDrawingContext@@@Z.c)
 *     ?FillShapeWithBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x1800604C8 (-FillShapeWithBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMI.c)
 *     ?UpdateBitmaps@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x180060B50 (-UpdateBitmaps@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?DrawBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1_NH@Z @ 0x1801748CC (-DrawBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUMilRectF@.c)
 *     ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x18018D7E0 (-DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawingContext::RecordBitmapRealizationInfo(CDrawingContext *this, struct IBitmapRealization *a2)
{
  int v4; // ebx
  char *v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  int v9; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v10[4]; // [rsp+24h] [rbp-24h] BYREF
  _BYTE v11[16]; // [rsp+28h] [rbp-20h] BYREF

  (*(void (__fastcall **)(struct IBitmapRealization *, int *))(*(_QWORD *)a2 + 16LL))(a2, &v9);
  v4 = v9;
  if ( v9 != DisplayId::None && v9 != DisplayId::All )
  {
    v7 = *((_QWORD *)this + 4) + 8LL + *(int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL);
    v8 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v7 + 8LL))(v7, v10);
    if ( v4 == v8 || v4 == DisplayId::None || v8 == DisplayId::All )
      *((_BYTE *)this + 5949) = 1;
    else
      *((_BYTE *)this + 5951) = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)a2 + 24LL))(a2) )
  {
    if ( *((_BYTE *)g_pComposition + 1129) )
      *((_BYTE *)this + 5951) = 1;
    else
      *((_BYTE *)this + 5948) = 1;
  }
  v5 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 8LL) + 8;
  v6 = *(_DWORD *)((**(__int64 (__fastcall ***)(char *, _BYTE *))v5)(v5, v11) + 8);
  if ( v6 == 1 || v6 == 3 || v6 > 9 && (v6 <= 17 || v6 == 21 || (unsigned int)(v6 - 23) <= 1) )
    *((_BYTE *)this + 5950) = 1;
}
