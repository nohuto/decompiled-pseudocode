/*
 * XREFs of ?GetRuntimeClassName@?$SimpleVectorView@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x140023910
 * Callers:
 *     ?GetRuntimeClassName@?$SimpleVectorView@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x14002AD00 (-GetRuntimeClassName@-$SimpleVectorView@UEventRegistrationToken@@V-$Vector@UEventRe_ea_14002AD00.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<EventRegistrationToken,Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::PodLifetimeTraits,XWinRT::IntVersionTag,0>::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(
           L"Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.EventRegistrationToken>",
           0x57u,
           a2);
}
