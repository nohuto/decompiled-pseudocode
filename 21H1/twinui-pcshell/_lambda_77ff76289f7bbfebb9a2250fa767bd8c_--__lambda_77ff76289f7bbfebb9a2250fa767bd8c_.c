/*
 * XREFs of _lambda_77ff76289f7bbfebb9a2250fa767bd8c_::__lambda_77ff76289f7bbfebb9a2250fa767bd8c_ @ 0x1800A0DCC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_77ff76289f7bbfebb9a2250fa767bd8c___::_scalar_deleting_destructor_ @ 0x1800A23C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_77ff76289f7bbfebb9a2250fa767bd8c___--_scala.c)
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18032D490 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18017C820 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180326584 (--1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_77ff76289f7bbfebb9a2250fa767bd8c_::__lambda_77ff76289f7bbfebb9a2250fa767bd8c_(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  TouchKeyboardExperienceTelemetryLogger::OnViewCreated::~OnViewCreated((TouchKeyboardExperienceTelemetryLogger::OnViewCreated *)(a1 + 40));
  v2 = *(std::_Ref_count_base **)(a1 + 32);
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  return Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(a1 + 8);
}
