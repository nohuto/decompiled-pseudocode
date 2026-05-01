/*
 * XREFs of CDCompBatchAnimationCallback_CreateInstance__lambda_55e0f220ed6030f2589a6e9858a32f89___ @ 0x1803AFA78
 * Callers:
 *     ?BeginAnimation@MultitaskingViewAnimationCoordinatorBase@@UEAAJXZ @ 0x1803B0590 (-BeginAnimation@MultitaskingViewAnimationCoordinatorBase@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89_____lambda_55e0f220ed6030f2589a6e9858a32f89__&_ @ 0x1803AFC04 (Microsoft--WRL--Details--Make_CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32.c)
 */

__int64 __fastcall CDCompBatchAnimationCallback_CreateInstance__lambda_55e0f220ed6030f2589a6e9858a32f89_(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, _QWORD *); // rbx
  unsigned int v5; // esi
  __int64 (__fastcall ***v7)(_QWORD, GUID *, _QWORD *); // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89_____lambda_55e0f220ed6030f2589a6e9858a32f89____(
    &v7,
    a1);
  v4 = v7;
  if ( v7 )
  {
    v5 = (**v7)(v7, &GUID_53204493_9170_4f30_be0e_211392a4618e, a2);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v4)[2])(v4);
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
  return v5;
}
