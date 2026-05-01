/*
 * XREFs of ?AppResizeOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1804094C8
 * Callers:
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1803F8CF4 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VAppResizeOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppResizeOperation@@@Z @ 0x1804093A0 (--$MakeAndInitialize@VAppResizeOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppResizeOpera.c)
 */

__int64 __fastcall AppResizeOperation_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  AppResizeOperation *v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<AppResizeOperation,AppResizeOperation,>(&v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 212LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_6;
  }
  v3 = (**(__int64 (__fastcall ***)(AppResizeOperation *, GUID *, void **))v8)(
         v8,
         &GUID_521214fe_07d7_470b_b6f3_b9d2354cae32,
         a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 213LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  return v4;
}
