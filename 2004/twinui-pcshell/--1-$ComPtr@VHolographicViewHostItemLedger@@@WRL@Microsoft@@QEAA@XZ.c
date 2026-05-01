/*
 * XREFs of ??1?$ComPtr@VHolographicViewHostItemLedger@@@WRL@Microsoft@@QEAA@XZ @ 0x1801EC654
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_RetailDemoExperienceManager_RetailDemoExperienceManager__::_1_::dtor$2 @ 0x1801EC151 (_Microsoft--WRL--Details--MakeAndInitialize_RetailDemoExperienceManager_RetailDemoE_ea_1801EC151.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_HolographicViewHostItemLedger_IUnknown__::_1_::dtor$1 @ 0x1802480A5 (_Microsoft--WRL--Details--MakeAndInitialize_HolographicViewHostItemLedger_IUnknown__ea_1802480A5.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIAcrylicPolicyManager@@UIImmersiveWindowMessageNotification@@UIBatterySaverStateChangedHandler@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180141280 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_180141280.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<HolographicViewHostItemLedger>::~ComPtr<HolographicViewHostItemLedger>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IAcrylicPolicyManager,IImmersiveWindowMessageNotification,IBatterySaverStateChangedHandler,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
