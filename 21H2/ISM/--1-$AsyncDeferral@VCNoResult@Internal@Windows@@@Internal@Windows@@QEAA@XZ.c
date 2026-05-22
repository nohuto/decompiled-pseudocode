/*
 * XREFs of ??1?$AsyncDeferral@VCNoResult@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x180110D5C
 * Callers:
 *     _MPCConstantManagerClient::CreateHRPrincipal_::_1_::dtor$0 @ 0x180113585 (_MPCConstantManagerClient--CreateHRPrincipal_--_1_--dtor$0.c)
 *     _MPCConstantManagerClient::CreatePVPrincipal_::_1_::dtor$0 @ 0x180113917 (_MPCConstantManagerClient--CreatePVPrincipal_--_1_--dtor$0.c)
 *     _MPCConstantManagerClient::CreateStringVectorPrincipal_::_1_::dtor$0 @ 0x180113E12 (_MPCConstantManagerClient--CreateStringVectorPrincipal_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::AsyncDeferral<Windows::Internal::CNoResult>::~AsyncDeferral<Windows::Internal::CNoResult>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)(a1 + 8));
}
