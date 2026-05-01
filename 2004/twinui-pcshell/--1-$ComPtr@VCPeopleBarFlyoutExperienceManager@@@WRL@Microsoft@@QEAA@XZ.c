/*
 * XREFs of ??1?$ComPtr@VCPeopleBarFlyoutExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801CAB20
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CPeopleBarFlyoutExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x1801CA388 (_Microsoft--WRL--Details--MakeAndInitialize_CPeopleBarFlyoutExperienceManager_IInsp_ea_1801CA388.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UITabDroppedEventArgs@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801CCAE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UITab_ea_1801CCAE0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CPeopleBarFlyoutExperienceManager>::~ComPtr<CPeopleBarFlyoutExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Tabs::ITabDroppedEventArgs,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
