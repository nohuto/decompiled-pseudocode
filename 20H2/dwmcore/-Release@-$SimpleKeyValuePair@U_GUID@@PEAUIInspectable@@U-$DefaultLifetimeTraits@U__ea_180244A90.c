/*
 * XREFs of ?Release@?$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@UEAAKXZ @ 0x180244A90
 * Callers:
 *     ?Release@?$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@W7EAAKXZ @ 0x1800F1560 (-Release@-$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U-$DefaultLifetimeTraits@U_GUID@@@Intern.c)
 *     ?Release@?$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@WBA@EAAKXZ @ 0x1800F1570 (-Release@-$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U-$DefaultLifetimeTraits@U__ea_1800F1570.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleKeyValuePair<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>::Release(
        __int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<_GUID,IInspectable *>,Microsoft::WRL::FtmBase>::Release(a1);
}
