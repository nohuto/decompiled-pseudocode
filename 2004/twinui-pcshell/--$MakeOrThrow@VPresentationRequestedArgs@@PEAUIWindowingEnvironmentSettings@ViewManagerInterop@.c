/*
 * XREFs of ??$MakeOrThrow@VPresentationRequestedArgs@@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationView@@@wil@@YA?AV?$ComPtr@VPresentationRequestedArgs@@@WRL@Microsoft@@$$QEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIApplicationView@@@Z @ 0x1801442A4
 * Callers:
 *     ?_CreatePresentationRequestedArgs@CApplicationManager@@AEAAJPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUIPresentationRequestedArgs@@@Z @ 0x18000A944 (-_CreatePresentationRequestedArgs@CApplicationManager@@AEAAJPEAUIViewEventArgs@ViewManagerIntero.c)
 *     ?_HandleWindowingEnvironmentSettingsRequest@CApplicationManager@@AEAAJPEAUIWindowingEnvironmentSettingsArgs@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801574FC (-_HandleWindowingEnvironmentSettingsRequest@CApplicationManager@@AEAAJPEAUIWindowingEnvironmentS.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093890 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Attach@?$ComPtr@VPresentationRequestedArgs@@@WRL@Microsoft@@QEAAXPEAVPresentationRequestedArgs@@@Z @ 0x180148D34 (-Attach@-$ComPtr@VPresentationRequestedArgs@@@WRL@Microsoft@@QEAAXPEAVPresentationRequestedArgs@.c)
 *     ??0PresentationRequestedArgs@@QEAA@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x18015A820 (--0PresentationRequestedArgs@@QEAA@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@In.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::MakeOrThrow<PresentationRequestedArgs,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *,IApplicationView *>(
        _QWORD *a1,
        struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings **a2,
        struct IApplicationView **a3)
{
  PresentationRequestedArgs *v6; // rax
  const char *v7; // r9
  PresentationRequestedArgs *v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v6 = (PresentationRequestedArgs *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = PresentationRequestedArgs::PresentationRequestedArgs(v6, *a2, *a3);
    Microsoft::WRL::ComPtr<PresentationRequestedArgs>::Attach(a1, v8);
  }
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      56LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v7);
    __debugbreak();
  }
  return a1;
}
