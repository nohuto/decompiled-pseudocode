/*
 * XREFs of ??1?$ComPtr@VCortanaSharedExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180193854
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CortanaSharedExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$1 @ 0x180192D72 (_Microsoft--WRL--Details--MakeAndInitialize_CortanaSharedExperienceManager_IInspect_ea_180192D72.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SearchAppExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$1 @ 0x1801D20FA (_Microsoft--WRL--Details--MakeAndInitialize_SearchAppExperienceManager_IInspectable_ea_1801D20FA.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIInitializeTrustedComponentForegroundControl@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180086AE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienc.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CortanaSharedExperienceManager>::~ComPtr<CortanaSharedExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::Release(result);
  }
  return result;
}
