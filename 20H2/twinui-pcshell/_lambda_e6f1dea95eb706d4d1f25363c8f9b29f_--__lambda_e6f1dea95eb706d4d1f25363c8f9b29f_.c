/*
 * XREFs of _lambda_e6f1dea95eb706d4d1f25363c8f9b29f_::__lambda_e6f1dea95eb706d4d1f25363c8f9b29f_ @ 0x1802E87A0
 * Callers:
 *     _XamlExplorerHostShellComponent::InitializeWindows_::_1_::dtor$6 @ 0x1802EA3A7 (_XamlExplorerHostShellComponent--InitializeWindows_--_1_--dtor$6.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIAppStateChangeNotification@6789@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180247280 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_180247280.c)
 */

__int64 __fastcall lambda_e6f1dea95eb706d4d1f25363c8f9b29f_::__lambda_e6f1dea95eb706d4d1f25363c8f9b29f_(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::FamilySafety::AppLimits::IFamilyAppUsageManager,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
