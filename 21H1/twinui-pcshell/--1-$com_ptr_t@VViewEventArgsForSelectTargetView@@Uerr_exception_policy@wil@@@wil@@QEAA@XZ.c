/*
 * XREFs of ??1?$com_ptr_t@VViewEventArgsForSelectTargetView@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1802903FC
 * Callers:
 *     _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$16 @ 0x1800DC580 (_WindowEventDispatcher--AppViewActivationRequested_--_1_--dtor$16.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$22 @ 0x180292FB2 (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$22.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewHostItemEventArgsBase@@UIViewHostItemPropertyChangedArgs@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059C50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewHostItemEvent.c)
 */

__int64 __fastcall wil::com_ptr_t<ViewEventArgsForSelectTargetView,wil::err_exception_policy>::~com_ptr_t<ViewEventArgsForSelectTargetView,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewHostItemEventArgsBase,Windows::Internal::Shell::Holographic::IViewHostItemPropertyChangedArgs>::Release(v1);
  return result;
}
