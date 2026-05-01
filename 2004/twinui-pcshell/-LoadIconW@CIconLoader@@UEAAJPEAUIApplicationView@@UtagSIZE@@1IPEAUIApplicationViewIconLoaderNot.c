/*
 * XREFs of ?LoadIconW@CIconLoader@@UEAAJPEAUIApplicationView@@UtagSIZE@@1IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x180385DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?CIconLoadingFunctions_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180385370 (-CIconLoadingFunctions_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VCWindowIconLoader@@V1@AEAPEAUIWin32ApplicationView@@AEBUtagSIZE@@AEAPEAUIApplicationViewIconLoaderNotifications@@AEAPEAUIIconLoadingFunctions@@@Details@WRL@Microsoft@@YAJPEAPEAVCWindowIconLoader@@AEAPEAUIWin32ApplicationView@@AEBUtagSIZE@@AEAPEAUIApplicationViewIconLoaderNotifications@@AEAPEAUIIconLoadingFunctions@@@Z @ 0x18038A078 (--$MakeAndInitialize@VCWindowIconLoader@@V1@AEAPEAUIWin32ApplicationView@@AEBUtagSIZE@@AEAPEAUIA.c)
 *     ?LoadWinRTIcon@@YAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x18038AC9C (-LoadWinRTIcon@@YAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAUIApplicationViewIconLoaderNoti.c)
 */

__int64 __fastcall CIconLoader::LoadIconW(
        CIconLoader *this,
        struct IApplicationView *a2,
        struct tagSIZE a3,
        struct tagSIZE a4,
        unsigned int a5,
        struct IApplicationViewIconLoaderNotifications *a6)
{
  int v7; // eax
  const struct _GUID *v8; // rcx
  int Instance; // eax
  int v10; // ebx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+38h] [rbp-28h] BYREF
  int v19[2]; // [rsp+40h] [rbp-20h] BYREF
  struct IApplicationViewIconLoaderNotifications *v20; // [rsp+48h] [rbp-18h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  struct IWinRTApplicationView *v23; // [rsp+78h] [rbp+18h] BYREF
  struct tagSIZE v24; // [rsp+80h] [rbp+20h] BYREF
  struct tagSIZE v25; // [rsp+88h] [rbp+28h] BYREF

  v25 = a4;
  v24 = a3;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  v7 = (**(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
         a2,
         &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
         &v17);
  v23 = 0LL;
  if ( v7 < 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
    v14 = (**(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, struct IWinRTApplicationView **))a2)(
            a2,
            &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b,
            &v23);
    v10 = v14;
    if ( v14 >= 0 )
    {
      v14 = LoadWinRTIcon(v23, &v24, &v24, &v25, a5, a6);
      v10 = v14;
      if ( v14 >= 0 )
        goto LABEL_15;
      v15 = 136LL;
    }
    else
    {
      v15 = 128LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\iconloader.cpp",
      (const char *)(unsigned int)v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
    goto LABEL_16;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  Instance = CIconLoadingFunctions_CreateInstance(v8, (void **)&v23);
  v10 = Instance;
  if ( Instance >= 0 )
  {
    v18 = 0LL;
    *(_QWORD *)v19 = v23;
    v20 = a6;
    v21 = v17;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    v13 = Microsoft::WRL::Details::MakeAndInitialize<CWindowIconLoader,CWindowIconLoader,IWin32ApplicationView * &,tagSIZE const &,IApplicationViewIconLoaderNotifications * &,IIconLoadingFunctions * &>(
            &v18,
            &v21,
            &v24,
            &v20,
            v19);
    v10 = v13;
    if ( v13 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB1,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\windowiconloader.cpp",
        (const char *)(unsigned int)v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    if ( v10 < 0 )
    {
      v11 = (unsigned int)v10;
      v12 = 123LL;
      goto LABEL_8;
    }
LABEL_15:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
    v10 = 0;
    goto LABEL_16;
  }
  v11 = (unsigned int)Instance;
  v12 = 117LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\iconloader.cpp",
    (const char *)v11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  return (unsigned int)v10;
}
