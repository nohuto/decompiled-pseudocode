/*
 * XREFs of ?copy_to@?$com_ptr_t@VTabShellHotKeyHandler@@Uerr_exception_policy@wil@@@wil@@QEBAXAEBU_GUID@@PEAPEAX@Z @ 0x180271CD0
 * Callers:
 *     ?TabShellHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIApplicationViewCollection@@PEAUITabViewManager@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabController@5678@PEAUITitleBarController@@AEBU_GUID@@PEAPEAX@Z @ 0x180271A64 (-TabShellHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIApplicationVi.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801B3BF8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveWindowMessag.c)
 */

void __fastcall wil::com_ptr_t<TabShellHotKeyHandler,wil::err_exception_policy>::copy_to(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // r9
  _DWORD *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // r10
  _DWORD *v8; // rdx
  _QWORD *v9; // r8
  __int64 v10; // r9
  int CanCastTo; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *a1;
  *a3 = 0LL;
  if ( v3 )
  {
    if ( InlineIsEqualGUID(&GUID_6d0b0978_7960_469b_96b9_fffa94864862, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *v5 = v6;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v4, v7) )
      {
        *v9 = v10;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveWindowMessageNotification>::CanCastTo(
                      v10 + 8,
                      v8);
        if ( CanCastTo < 0 )
          goto LABEL_8;
      }
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 8LL))(*v9);
    }
LABEL_8:
    if ( CanCastTo < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        5495LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)CanCastTo);
      __debugbreak();
    }
  }
}
