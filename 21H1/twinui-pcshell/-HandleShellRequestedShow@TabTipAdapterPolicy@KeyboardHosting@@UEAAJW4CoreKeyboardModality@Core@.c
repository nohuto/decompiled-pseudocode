/*
 * XREFs of ?HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@PEAW4ShellRequestType@5Shell@68@@Z @ 0x180347880
 * Callers:
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason@2@@Z @ 0x18033B920 (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason.c)
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x18033FB40 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x18033FDC0 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CoreInputViewAPIKeyboardInvocation_29705285@@@details@wil@@QEAA_NXZ @ 0x1800A47DC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CoreInputViewAPIKeyboar.c)
 *     ??4?$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@QEAA?AW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@W4234567@@Z @ 0x1800A4EEC (--4-$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@QEAA-AW4CoreKeyboardModa.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleShellRequestedShow(
        __int64 a1,
        unsigned __int32 a2,
        _DWORD *a3)
{
  __int64 result; // rax

  *a3 = 0;
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_CoreInputViewAPIKeyboardInvocation_29705285>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_CoreInputViewAPIKeyboardInvocation_29705285>::GetImpl'::`2'::impl) )
    std::atomic<enum Windows::UI::Internal::Text::Core::CoreKeyboardModality>::operator=(
      (volatile __int32 *)(a1 + 500),
      a2);
  if ( !*(_BYTE *)(a1 + 487) && !*(_BYTE *)(a1 + 506) || *(_BYTE *)(a1 + 496) )
    *a3 = 1;
  result = 0LL;
  *(_BYTE *)(a1 + 496) = 0;
  return result;
}
