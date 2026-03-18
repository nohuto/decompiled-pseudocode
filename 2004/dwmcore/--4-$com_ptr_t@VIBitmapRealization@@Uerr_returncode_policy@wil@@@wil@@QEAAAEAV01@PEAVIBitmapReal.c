/*
 * XREFs of ??4?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapRealization@@@Z @ 0x18004C4B4
 * Callers:
 *     ?Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z @ 0x18003BF38 (-Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x18004C460 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?ProcessSource@CBitmapResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z @ 0x18008FFF8 (-ProcessSource@CBitmapResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z.c)
 *     ?Initialize@CColorKeyBitmap@@IEAAJPEAVIBitmapRealization@@@Z @ 0x1802666C0 (-Initialize@CColorKeyBitmap@@IEAAJPEAVIBitmapRealization@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
  {
    v5 = *(int *)(*(_QWORD *)(a2 + 8) + 4LL) + a2 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  if ( v2 )
  {
    v6 = v2 + *(int *)(*(_QWORD *)(v2 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return a1;
}
