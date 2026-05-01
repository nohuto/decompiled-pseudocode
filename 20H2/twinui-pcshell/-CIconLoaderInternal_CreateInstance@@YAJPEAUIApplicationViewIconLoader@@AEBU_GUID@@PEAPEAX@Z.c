/*
 * XREFs of ?CIconLoaderInternal_CreateInstance@@YAJPEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z @ 0x18038497C
 * Callers:
 *     ?SetConfig@CSwitchItemElementFactory@@UEAAJAEBUMultitaskingViewConfig@@@Z @ 0x180395DA0 (-SetConfig@CSwitchItemElementFactory@@UEAAJAEBUMultitaskingViewConfig@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCIconLoaderInternal@@V1@AEAPEAUIApplicationViewIconLoader@@@Details@WRL@Microsoft@@YAJPEAPEAVCIconLoaderInternal@@AEAPEAUIApplicationViewIconLoader@@@Z @ 0x1803842E0 (--$MakeAndInitialize@VCIconLoaderInternal@@V1@AEAPEAUIApplicationViewIconLoader@@@Details@WRL@Mi.c)
 */

__int64 __fastcall CIconLoaderInternal_CreateInstance(
        struct IApplicationViewIconLoader *a1,
        const struct _GUID *a2,
        void **a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationViewIconLoader *v9; // [rsp+30h] [rbp+8h] BYREF
  CIconLoaderInternal *v10; // [rsp+38h] [rbp+10h] BYREF

  v9 = a1;
  *a3 = 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CIconLoaderInternal,CIconLoaderInternal,IApplicationViewIconLoader * &>(
         &v10,
         &v9);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 213LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\iconloader.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_6;
  }
  v4 = (**(__int64 (__fastcall ***)(CIconLoaderInternal *, GUID *, void **))v10)(
         v10,
         &GUID_ee3a7544_b067_4a8c_8ed8_da1d4e9bfd02,
         a3);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 214LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  return v5;
}
