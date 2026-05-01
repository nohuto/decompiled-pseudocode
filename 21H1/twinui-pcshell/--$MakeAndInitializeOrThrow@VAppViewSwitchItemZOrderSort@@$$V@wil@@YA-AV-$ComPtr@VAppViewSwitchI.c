/*
 * XREFs of ??$MakeAndInitializeOrThrow@VAppViewSwitchItemZOrderSort@@$$V@wil@@YA?AV?$ComPtr@VAppViewSwitchItemZOrderSort@@@WRL@Microsoft@@XZ @ 0x180320264
 * Callers:
 *     ?AppViewSwitchItemZOrderSort_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180320EAC (-AppViewSwitchItemZOrderSort_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x18022D618 (-InternalRelease@-$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VAppViewSwitchItemZOrderSort@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppViewSwitchItemZOrderSort@@@Z @ 0x1803201C8 (--$MakeAndInitialize@VAppViewSwitchItemZOrderSort@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppVi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAndInitializeOrThrow<AppViewSwitchItemZOrderSort,>(__int64 *a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease(a1);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<AppViewSwitchItemZOrderSort,AppViewSwitchItemZOrderSort,>((AppViewSwitchItemZOrderSort **)a1);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      36LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  return a1;
}
