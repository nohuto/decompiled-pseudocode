/*
 * XREFs of ?LoadWinRTIcon@@YAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x18038AC9C
 * Callers:
 *     ?LoadIconW@CIconLoader@@UEAAJPEAUIApplicationView@@UtagSIZE@@1IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x180385DA0 (-LoadIconW@CIconLoader@@UEAAJPEAUIApplicationView@@UtagSIZE@@1IPEAUIApplicationViewIconLoaderNot.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCWinRTAppIconLoader@@V1@AEAPEAUIWinRTApplicationView@@AEBUtagSIZE@@AEBU3@AEBU3@AEAIAEAPEAUIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@YAJPEAPEAVCWinRTAppIconLoader@@AEAPEAUIWinRTApplicationView@@AEBUtagSIZE@@22AEAIAEAPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x18038A6E8 (--$MakeAndInitialize@VCWinRTAppIconLoader@@V1@AEAPEAUIWinRTApplicationView@@AEBUtagSIZE@@AEBU3@A.c)
 */

__int64 __fastcall LoadWinRTIcon(
        struct IWinRTApplicationView *a1,
        const struct tagSIZE *a2,
        const struct tagSIZE *a3,
        struct tagSIZE *a4,
        unsigned int a5,
        struct IApplicationViewIconLoaderNotifications *a6)
{
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IWinRTApplicationView *v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = a1;
  v12[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  v9 = Microsoft::WRL::Details::MakeAndInitialize<CWinRTAppIconLoader,CWinRTAppIconLoader,IWinRTApplicationView * &,tagSIZE const &,tagSIZE const &,tagSIZE const &,unsigned int &,IApplicationViewIconLoaderNotifications * &>(
         v12,
         &v14,
         a2,
         a3,
         a4,
         &a5,
         &a6);
  v10 = v9;
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x61,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\immersiveappiconloader.cpp",
      (const char *)(unsigned int)v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  return v10;
}
