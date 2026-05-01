/*
 * XREFs of ?IsPowerSavingMode@ShellFeedsExperienceManagerImpl@@AEAA_NXZ @ 0x18009B21C
 * Callers:
 *     ?CanPokeNow@ShellFeedsExperienceManagerImpl@@AEAA?B_NXZ @ 0x180099474 (-CanPokeNow@ShellFeedsExperienceManagerImpl@@AEAA-B_NXZ.c)
 * Callees:
 *     ??$call@AEAV_lambda_64579cffbd4724e9a4ba09ce2deae2f2_@@@?$factory_cache_entry@UPowerManager@Power@System@Windows@winrt@@UIPowerManagerStatics@2345@@impl@winrt@@QEAA?AW4EnergySaverStatus@Power@System@Windows@2@AEAV_lambda_64579cffbd4724e9a4ba09ce2deae2f2_@@@Z @ 0x1800988CC (--$call@AEAV_lambda_64579cffbd4724e9a4ba09ce2deae2f2_@@@-$factory_cache_entry@UPowerManager@Powe.c)
 */

bool __fastcall ShellFeedsExperienceManagerImpl::IsPowerSavingMode(ShellFeedsExperienceManagerImpl *this)
{
  return (unsigned int)winrt::impl::factory_cache_entry<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics>::call<_lambda_64579cffbd4724e9a4ba09ce2deae2f2_ &>() == 2;
}
