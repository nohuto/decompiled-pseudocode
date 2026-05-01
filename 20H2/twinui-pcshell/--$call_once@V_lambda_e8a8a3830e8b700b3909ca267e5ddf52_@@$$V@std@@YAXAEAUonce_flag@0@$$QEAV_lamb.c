/*
 * XREFs of ??$call_once@V_lambda_e8a8a3830e8b700b3909ca267e5ddf52_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lambda_e8a8a3830e8b700b3909ca267e5ddf52_@@@Z @ 0x180373668
 * Callers:
 *     ?GetThumbnailDevice@ThumbnailDeviceFactory@@UEAA?AV?$ComPtr@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x180374710 (-GetThumbnailDevice@ThumbnailDeviceFactory@@UEAA-AV-$ComPtr@UIDesktopThumbnailDevice@Desktop@Mul.c)
 *     ?PreCreateThumbnailDevice@ThumbnailDeviceFactory@@UEAAXXZ @ 0x180374FC0 (-PreCreateThumbnailDevice@ThumbnailDeviceFactory@@UEAAXXZ.c)
 * Callees:
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1802EC754 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1802EE918 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

void __fastcall std::call_once<_lambda_e8a8a3830e8b700b3909ca267e5ddf52_,>(struct std::once_flag *a1, __int64 a2)
{
  std::exception_ptr *v4; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v6[2]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v7[24]; // [rsp+40h] [rbp-18h] BYREF

  __ExceptionPtrCreate(v5);
  v6[0] = v5;
  v6[1] = a2;
  if ( std::_Execute_once(
         a1,
         (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_e8a8a3830e8b700b3909ca267e5ddf52_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
         v6) )
  {
    __ExceptionPtrDestroy(v5);
  }
  else
  {
    if ( __ExceptionPtrToBool(v5) )
    {
      v4 = std::exception_ptr::exception_ptr((std::exception_ptr *)v7, (const struct std::exception_ptr *)v5);
      std::rethrow_exception(v4);
      __debugbreak();
    }
    std::_XGetLastError();
    __debugbreak();
    std::call_once__lambda_e8a8a3830e8b700b3909ca267e5ddf52____::_1_::dtor_0();
  }
}
