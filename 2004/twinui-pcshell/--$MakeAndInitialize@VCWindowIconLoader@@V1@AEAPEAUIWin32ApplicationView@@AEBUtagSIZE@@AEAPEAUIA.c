/*
 * XREFs of ??$MakeAndInitialize@VCWindowIconLoader@@V1@AEAPEAUIWin32ApplicationView@@AEBUtagSIZE@@AEAPEAUIApplicationViewIconLoaderNotifications@@AEAPEAUIIconLoadingFunctions@@@Details@WRL@Microsoft@@YAJPEAPEAVCWindowIconLoader@@AEAPEAUIWin32ApplicationView@@AEBUtagSIZE@@AEAPEAUIApplicationViewIconLoaderNotifications@@AEAPEAUIIconLoadingFunctions@@@Z @ 0x18038A078
 * Callers:
 *     ?LoadIconW@CIconLoader@@UEAAJPEAUIApplicationView@@UtagSIZE@@1IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x180385DA0 (-LoadIconW@CIconLoader@@UEAAJPEAUIApplicationView@@UtagSIZE@@1IPEAUIApplicationViewIconLoaderNot.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x180013AAC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@CWindowIconLoader@@QEAAJPEAUIWin32ApplicationView@@AEBUtagSIZE@@PEAUIApplicationViewIconLoaderNotifications@@PEAUIIconLoadingFunctions@@@Z @ 0x18038A1C0 (-RuntimeClassInitialize@CWindowIconLoader@@QEAAJPEAUIWin32ApplicationView@@AEBUtagSIZE@@PEAUIApp.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CWindowIconLoader,CWindowIconLoader,IWin32ApplicationView * &,tagSIZE const &,IApplicationViewIconLoaderNotifications * &,IIconLoadingFunctions * &>(
        CWindowIconLoader **a1,
        struct IWin32ApplicationView **a2,
        const struct tagSIZE *a3,
        struct IApplicationViewIconLoaderNotifications **a4,
        struct IIconLoadingFunctions **a5)
{
  CWindowIconLoader *v9; // rax
  CWindowIconLoader *v10; // rbx
  int v11; // edi
  CWindowIconLoader *v13; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (CWindowIconLoader *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( v9 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>((__int64)v9);
    v13 = v10;
    *(_QWORD *)v10 = &CWindowIconLoader::`vftable';
    *((_QWORD *)v10 + 3) = 0LL;
    *((_QWORD *)v10 + 4) = 0LL;
    v11 = CWindowIconLoader::RuntimeClassInitialize(v10, *a2, a3, *a4, *a5);
    if ( v11 >= 0 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
      v11 = 0;
      *a1 = v10;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
