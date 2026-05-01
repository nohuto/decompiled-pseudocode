/*
 * XREFs of _lambda_e127833a80797c5d08a14d2b9986789f_::__lambda_e127833a80797c5d08a14d2b9986789f_ @ 0x1800AEEDC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e127833a80797c5d08a14d2b9986789f___::_scalar_deleting_destructor_ @ 0x1800B0600 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e127833a80797c5d08a14d2b9986789f___--_scala.c)
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18034EF10 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801A0750 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803480D4 (--1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_e127833a80797c5d08a14d2b9986789f_::__lambda_e127833a80797c5d08a14d2b9986789f_(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  TouchKeyboardExperienceTelemetryLogger::OnViewCreated::~OnViewCreated((TouchKeyboardExperienceTelemetryLogger::OnViewCreated *)(a1 + 40));
  v2 = *(std::_Ref_count_base **)(a1 + 32);
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  return Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(a1 + 8);
}
