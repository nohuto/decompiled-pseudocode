/*
 * XREFs of ?CreateDrawingContext@CBackdropVisualImage@@EEAAXPEAPEAVCDrawingContext@@@Z @ 0x1800534A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CDrawingContext@@SAXPEAPEAV1@@Z @ 0x180052C34 (-Create@CDrawingContext@@SAXPEAPEAV1@@Z.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x180053AAC (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ @ 0x18008B550 (-EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008D5F4 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 */

void __fastcall CBackdropVisualImage::CreateDrawingContext(CBackdropVisualImage *this, struct CDrawingContext **a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  char v6; // [rsp+30h] [rbp+8h] BYREF
  char v7; // [rsp+38h] [rbp+10h] BYREF

  CDrawingContext::Create(a2);
  *((_QWORD *)*a2 + 21) = this;
  CBackdropVisualImage::EnsureAncestorList(this);
  v4 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v6, &byte_18032C47F);
  v5 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v7, "BVI-FullRender");
  CBackdropVisualImage::LogEtwEvent(this, v5, v4);
}
