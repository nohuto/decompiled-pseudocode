/*
 * XREFs of ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x1800133E0
 * Callers:
 *     _lambda_bfb8cbc897ca7eaa5c992f00bdd4bfa8_::operator() @ 0x18001317C (_lambda_bfb8cbc897ca7eaa5c992f00bdd4bfa8_--operator().c)
 *     _lambda_d14133faddb8c28b80f2f473bceb745b_::operator() @ 0x180085100 (_lambda_d14133faddb8c28b80f2f473bceb745b_--operator().c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_5ec6f88e9203a288a6d7bbdb0202202b___1_IInspectable___IInspectable___::Invoke @ 0x180474A50 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEven_ea_180474A50.c)
 *     SessionIdleCallback__lambda_ac7f06c1f321a489bd31a220fb60b5ce___::OnIdleStateChanged @ 0x180477500 (SessionIdleCallback__lambda_ac7f06c1f321a489bd31a220fb60b5ce___--OnIdleStateChanged.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001340C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 */

struct IInspectable **__fastcall ExperienceManagerUtils::AsStrong<IInspectable>(
        struct IInspectable **a1,
        Microsoft::WRL::WeakRef *this)
{
  *a1 = 0LL;
  Microsoft::WRL::WeakRef::As<IInspectable>(this, a1);
  return a1;
}
