/*
 * XREFs of ?HandleInputModalityInfoChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@PEAW4ShellRequestType@5Shell@68@@Z @ 0x180347680
 * Callers:
 *     ?OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@@Z @ 0x1800A49F4 (-OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@I.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CoreInputViewAPIKeyboardInvocation_29705285@@@details@wil@@QEAA_NXZ @ 0x1800A47DC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CoreInputViewAPIKeyboar.c)
 *     ??$HandleInputModalityInfoChanged@AEAU?$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU?$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800A4B84 (--$HandleInputModalityInfoChanged@AEAU-$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Wind.c)
 *     ??4?$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@QEAA?AW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@W4234567@@Z @ 0x1800A4EEC (--4-$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@QEAA-AW4CoreKeyboardModa.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleInputModalityInfoChanged(
        __int64 a1,
        unsigned __int32 *a2,
        char *a3)
{
  int *v6; // rcx

  *(_DWORD *)a3 = 0;
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_CoreInputViewAPIKeyboardInvocation_29705285>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_CoreInputViewAPIKeyboardInvocation_29705285>::GetImpl'::`2'::impl) )
    return 2147500033LL;
  std::atomic<enum Windows::UI::Internal::Text::Core::CoreKeyboardModality>::operator=(
    (volatile __int32 *)(a1 + 516),
    *a2);
  TouchKeyboardExperienceTelemetryLogger::HandleInputModalityInfoChanged<std::atomic<enum Windows::UI::Internal::Text::Core::CoreKeyboardModality> &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
    v6,
    a3);
  return 0LL;
}
