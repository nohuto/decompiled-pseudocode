/*
 * XREFs of ?RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z @ 0x1801B3E8C
 * Callers:
 *     ?DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x180194320 (-DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x1801AFA60 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 *     ?PrepareOutputTarget@CDrawListBitmap@@QEBAJPEAVCDrawingContext@@@Z @ 0x1801E4DD4 (-PrepareOutputTarget@CDrawListBitmap@@QEBAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA_NXZ @ 0x180012BB8 (-IsNormalDesktopRender@CDrawingContext@@QEBA_NXZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008AF20 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDrawingContext::RecordBitmapResourceInfo(CDrawingContext *this, struct IBitmapResource *a2)
{
  bool IsNormalDesktopRender; // al
  __int64 v5; // rdx
  bool v6; // si
  void (__fastcall *v7)(struct IBitmapResource *, __int64, const struct CMILMatrix *); // rbx
  void (__fastcall ***v8)(_QWORD, _BYTE *); // rcx
  const struct CMILMatrix *TopByReference; // rax
  __int64 v10; // rdx
  _BYTE v11[16]; // [rsp+30h] [rbp-38h] BYREF

  IsNormalDesktopRender = CDrawingContext::IsNormalDesktopRender(this);
  v5 = *(_QWORD *)a2;
  v6 = IsNormalDesktopRender;
  LOBYTE(v5) = IsNormalDesktopRender;
  (*(void (__fastcall **)(struct IBitmapResource *, __int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, v5, 0LL);
  v7 = *(void (__fastcall **)(struct IBitmapResource *, __int64, const struct CMILMatrix *))(*(_QWORD *)a2 + 48LL);
  v8 = (void (__fastcall ***)(_QWORD, _BYTE *))(*(int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 12LL)
                                              + *((_QWORD *)this + 4)
                                              + 8LL);
  (**v8)(v8, v11);
  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 368));
  LOBYTE(v10) = v6;
  v7(a2, v10, TopByReference);
}
