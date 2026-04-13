/*
 * XREFs of _lambda_fbae20bd0e7a57bcde0b9244ed3f8158_::__lambda_fbae20bd0e7a57bcde0b9244ed3f8158_ @ 0x18002FE00
 * Callers:
 *     _ContentManagement::ContentManagementService::EnableLockScreenRotationAsync_::_1_::dtor$1 @ 0x1800CFC81 (_ContentManagement--ContentManagementService--EnableLockScreenRotationAsync_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementService::EnableLockScreenRotationAsync_::_1_::dtor$4 @ 0x1800CFCCE (_ContentManagement--ContentManagementService--EnableLockScreenRotationAsync_--_1_--dtor$4.c)
 *     _ContentManagement::ContentManagementService::EnableLockScreenOverlayAsync_::_1_::dtor$1 @ 0x1800CFCF6 (_ContentManagement--ContentManagementService--EnableLockScreenOverlayAsync_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementService::EnableLockScreenOverlayAsync_::_1_::dtor$4 @ 0x1800CFD08 (_ContentManagement--ContentManagementService--EnableLockScreenOverlayAsync_--_1_--dtor$4.c)
 *     _ContentManagement::ContentManagementService::EnableStartMenuSystemPaneSuggestionsAsync_::_1_::dtor$1 @ 0x1800CFD30 (_ContentManagement--ContentManagementService--EnableStartMenuSystemPaneSuggestionsA_ea_1800CFD30.c)
 *     _ContentManagement::ContentManagementService::EnableStartMenuSystemPaneSuggestionsAsync_::_1_::dtor$4 @ 0x1800CFD42 (_ContentManagement--ContentManagementService--EnableStartMenuSystemPaneSuggestionsA_ea_1800CFD42.c)
 *     _ContentManagement::ContentManagementService::EnableContextualSuggestionsAsync_::_1_::dtor$1 @ 0x1800CFD6A (_ContentManagement--ContentManagementService--EnableContextualSuggestionsAsync_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementService::EnableContextualSuggestionsAsync_::_1_::dtor$4 @ 0x1800CFD7C (_ContentManagement--ContentManagementService--EnableContextualSuggestionsAsync_--_1_--dtor$4.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800263D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 */

volatile signed __int64 *__fastcall lambda_fbae20bd0e7a57bcde0b9244ed3f8158_::__lambda_fbae20bd0e7a57bcde0b9244ed3f8158_(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(result);
  }
  return result;
}
