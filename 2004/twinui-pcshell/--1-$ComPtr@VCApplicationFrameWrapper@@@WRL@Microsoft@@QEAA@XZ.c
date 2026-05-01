/*
 * XREFs of ??1?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x1801747C8
 * Callers:
 *     _CApplicationFrameService::OnChromeOffsetsChanged_::_1_::dtor$0 @ 0x180101CF0 (_CApplicationFrameService--OnChromeOffsetsChanged_--_1_--dtor$0.c)
 *     _CApplicationFrameService::SynchronizeFrameInformation_::_1_::dtor$0 @ 0x180102837 (_CApplicationFrameService--SynchronizeFrameInformation_--_1_--dtor$0.c)
 *     _CApplicationFrameService::EnsureFramePool_::_1_::dtor$3 @ 0x18010285B (_CApplicationFrameService--EnsureFramePool_--_1_--dtor$3.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CApplicationFrameWrapper_CApplicationFrameWrapper_CApplicationFrameService___IApplicationFrameManager___IApplicationFrame____::_1_::dtor$2 @ 0x18010287F (_Microsoft--WRL--Details--MakeAndInitialize_CApplicationFrameWrapper_CApplicationFr_ea_18010287F.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CApplicationFrameWrapper_CApplicationFrameWrapper_CApplicationFrameService___IApplicationFrameManager___IApplicationFrame___Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short____&_unsigned_long_const_&__::_1_::dtor$2 @ 0x1801740A0 (_Microsoft--WRL--Details--MakeAndInitialize_CApplicationFrameWrapper_CApplicationFr_ea_1801740A0.c)
 *     _CApplicationFrameService::BeginFrameRecovery_::_1_::dtor$4 @ 0x180175171 (_CApplicationFrameService--BeginFrameRecovery_--_1_--dtor$4.c)
 *     _CApplicationFrameService::DestroyFrame_::_1_::dtor$0 @ 0x18017566F (_CApplicationFrameService--DestroyFrame_--_1_--dtor$0.c)
 *     _CApplicationFrameService::EndFrameRecovery_::_1_::dtor$2 @ 0x1801757C1 (_CApplicationFrameService--EndFrameRecovery_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::~ComPtr<CApplicationFrameWrapper>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(a1);
}
