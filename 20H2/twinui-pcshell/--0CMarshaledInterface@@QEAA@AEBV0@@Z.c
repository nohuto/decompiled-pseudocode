/*
 * XREFs of ??0CMarshaledInterface@@QEAA@AEBV0@@Z @ 0x18007DAEC
 * Callers:
 *     ?OnViewCreated@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800A23E0 (-OnViewCreated@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     winrt::impl::factory_cache_entry_winrt::Windows::Internal::UI::Shell::WindowTabBroker_winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics_::call__lambda_c4edbeba96dcef3322467452933ed6cc__&_ @ 0x1800C7594 (winrt--impl--factory_cache_entry_winrt--Windows--Internal--UI--Shell--WindowTabBroker_winrt--Win.c)
 *     ??$_Insert@Uguid@winrt@@AEBUWindowTabView@Shell@UI@Internal@Windows@2@@?$list@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@std@@@std@@U_Iterator_base0@2@@1@$$QEAUguid@winrt@@AEBUWindowTabView@Shell@UI@Internal@Windows@4@@Z @ 0x1800D1F44 (--$_Insert@Uguid@winrt@@AEBUWindowTabView@Shell@UI@Internal@Windows@2@@-$list@U-$pair@$$CBUguid@.c)
 *     ??0WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@5@AEBUWindowTabDataModel@2UI@345@Uevent_token@5@2@Z @ 0x1800D2774 (--0WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBU-$com_ptr@UTabProxyWindowFac.c)
 *     ??0TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAA@PEAUIWICImagingFactory@@PEAUITaskbarList4@@AEBUITileStore@Tiles@345@AEBUWindowTabDataModel@2UI@345@AEBUWindowTabView@2UI@345@_K@Z @ 0x1800D4F4C (--0TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAA@PEAUIWICImagingFactory@@PEAU.c)
 *     _lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_::_lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_ @ 0x1800EF130 (_lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_--_lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

CMarshaledInterface *__fastcall CMarshaledInterface::CMarshaledInterface(
        CMarshaledInterface *this,
        const struct CMarshaledInterface *a2)
{
  *(_QWORD *)this = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this);
  return this;
}
