/*
 * XREFs of ??1?$ComPtr@VCTaskContinuityActivitiesExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18019C1E0
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CTaskContinuityActivitiesExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x18019C016 (_Microsoft--WRL--Details--MakeAndInitialize_CTaskContinuityActivitiesExperienceMana_ea_18019C016.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CPeopleBarJumpViewExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x1801AA618 (_Microsoft--WRL--Details--MakeAndInitialize_CPeopleBarJumpViewExperienceManager_IIn_ea_1801AA618.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CScreenClippingExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x1801C3646 (_Microsoft--WRL--Details--MakeAndInitialize_CScreenClippingExperienceManager_IInspe_ea_1801C3646.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UILightDismissNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180099CA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarJumpVie.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CTaskContinuityActivitiesExperienceManager>::~ComPtr<CTaskContinuityActivitiesExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>::Release(result);
  }
  return result;
}
