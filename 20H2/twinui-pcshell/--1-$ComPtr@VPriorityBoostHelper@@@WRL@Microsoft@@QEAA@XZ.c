/*
 * XREFs of ??1?$ComPtr@VPriorityBoostHelper@@@WRL@Microsoft@@QEAA@XZ @ 0x1801D2AD8
 * Callers:
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$11 @ 0x1801D2A38 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$11.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CInsightsExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x1801EE81A (_Microsoft--WRL--Details--MakeAndInitialize_CInsightsExperienceManager_IInspectable_ea_1801EE81A.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIClosable@Foundation@Windows@@UILightDismissNotification@@UIImmersiveMonitorNotification@@UIInsightsExperienceManager@Experience@Shell@Internal@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801D4910 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIClo_ea_1801D4910.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<PriorityBoostHelper>::~ComPtr<PriorityBoostHelper>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IClosable,ILightDismissNotification,IImmersiveMonitorNotification,Windows::Internal::Shell::Experience::IInsightsExperienceManager>::Release(result);
  }
  return result;
}
