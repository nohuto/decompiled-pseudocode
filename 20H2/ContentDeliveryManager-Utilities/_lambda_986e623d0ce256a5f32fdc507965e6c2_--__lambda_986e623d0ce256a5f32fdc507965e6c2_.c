/*
 * XREFs of _lambda_986e623d0ce256a5f32fdc507965e6c2_::__lambda_986e623d0ce256a5f32fdc507965e6c2_ @ 0x180030510
 * Callers:
 *     _ContentManagement::ContentManagementService::ResolveLayoutBindingsAsync_::_1_::dtor$2 @ 0x1800CFDB6 (_ContentManagement--ContentManagementService--ResolveLayoutBindingsAsync_--_1_--dtor$2.c)
 *     _Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ResolveLayoutBindingsOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_986e623d0ce256a5f32fdc507965e6c2____::_1_::dtor$2 @ 0x1800D0484 (_Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-_anonymo_ea_1800D0484.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800263D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 */

HRESULT __fastcall lambda_986e623d0ce256a5f32fdc507965e6c2_::__lambda_986e623d0ce256a5f32fdc507965e6c2_(__int64 a1)
{
  HSTRING v2; // rcx
  HRESULT result; // eax
  volatile signed __int64 *v4; // rcx

  v2 = *(HSTRING *)(a1 + 8);
  if ( v2 )
    result = WindowsDeleteString(v2);
  v4 = *(volatile signed __int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(v4);
  }
  return result;
}
