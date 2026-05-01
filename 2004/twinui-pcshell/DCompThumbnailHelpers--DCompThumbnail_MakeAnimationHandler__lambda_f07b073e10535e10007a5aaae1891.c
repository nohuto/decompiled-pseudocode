/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_f07b073e10535e10007a5aaae1891d57___ @ 0x18041FD00
 * Callers:
 *     ?Destroy@GhostDivider@@UEAAXXZ @ 0x180420110 (-Destroy@GhostDivider@@UEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180139F2C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_5464665cf186818e8ef685f1f658efac___lambda_f07b073e10535e10007a5aaae1891d57___::CAnimationCallbackHandler__lambda_5464665cf186818e8ef685f1f658efac___lambda_f07b073e10535e10007a5aaae1891d57___ @ 0x18041FF58 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_5464665cf186818e8ef685f1f658efac___lamb.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x18042043C (-InternalRelease@-$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_f07b073e10535e10007a5aaae1891d57___(
        __int64 *a1,
        volatile int *a2,
        _QWORD *a3)
{
  __int64 v4; // rcx
  void *v6; // rax
  __int64 v7; // rdx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // rax
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // rdi
  unsigned int v10; // ebx
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = (__int64)a2;
  *a3 = 0LL;
  v4 = *a1;
  v12 = v4;
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(
      v4,
      a2);
  *a3 = 0LL;
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6
    && (v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_5464665cf186818e8ef685f1f658efac___lambda_f07b073e10535e10007a5aaae1891d57___::CAnimationCallbackHandler__lambda_5464665cf186818e8ef685f1f658efac___lambda_f07b073e10535e10007a5aaae1891d57___(
                                                                   v6,
                                                                   v7,
                                                                   &v12,
                                                                   0LL),
        (v9 = v8) != 0LL) )
  {
    v10 = (**v8)(v8, &GUID_bac5f55a_ba7c_414c_b599_fbf850f553c6, a3);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v9)[2])(v9);
  }
  else
  {
    v10 = -2147024882;
  }
  Microsoft::WRL::ComPtr<CVirtualDesktopForegroundPolicy>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<CVirtualDesktopForegroundPolicy>::InternalRelease(a1);
  return v10;
}
