/*
 * XREFs of ??1?$ComPtr@VCWinRTApplicationView@@@WRL@Microsoft@@QEAA@XZ @ 0x180169BAC
 * Callers:
 *     _CApplicationViewManager::AddWinRTApplicationView_::_1_::dtor$0 @ 0x1800DB092 (_CApplicationViewManager--AddWinRTApplicationView_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BD00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewB.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CWinRTApplicationView>::~ComPtr<CWinRTApplicationView>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
