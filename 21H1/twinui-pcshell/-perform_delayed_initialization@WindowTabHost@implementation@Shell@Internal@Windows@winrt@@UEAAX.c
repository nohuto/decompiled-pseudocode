/*
 * XREFs of ?perform_delayed_initialization@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1800BC160
 * Callers:
 *     <none>
 * Callees:
 *     ?FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800B75C4 (-FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800B7904 (-FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?UpdateAltTabFilterSetting@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800B9B14 (-UpdateAltTabFilterSetting@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEAA_NXZ @ 0x1800BB2E8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEA.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::perform_delayed_initialization(
        RTL_SRWLOCK *this)
{
  winrt::Windows::Internal::Shell::implementation::WindowTabHost *v2; // rdi

  if ( this[12].Ptr )
  {
    v2 = (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)&this[-6];
    if ( LODWORD(this[31].Ptr) )
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateAltTabFilterSetting(this - 6);
    if ( LODWORD(this[47].Ptr) )
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::FindExistingWindows(v2);
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_WthTaskbarTabs>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_WthTaskbarTabs>::GetImpl'::`2'::impl) )
    {
      if ( this[48].Ptr )
        winrt::Windows::Internal::Shell::implementation::WindowTabHost::FindAllTileNotifications(v2);
    }
  }
}
