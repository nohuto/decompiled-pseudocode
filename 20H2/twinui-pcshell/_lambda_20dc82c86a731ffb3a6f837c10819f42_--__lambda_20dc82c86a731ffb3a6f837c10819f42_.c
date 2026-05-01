/*
 * XREFs of _lambda_20dc82c86a731ffb3a6f837c10819f42_::__lambda_20dc82c86a731ffb3a6f837c10819f42_ @ 0x1800B0A74
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_20dc82c86a731ffb3a6f837c10819f42___::_scalar_deleting_destructor_ @ 0x1800B2080 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_20dc82c86a731ffb3a6f837c10819f42___--_scala.c)
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18034E4B0 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801A0340 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180347674 (--1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

void __fastcall lambda_20dc82c86a731ffb3a6f837c10819f42_::__lambda_20dc82c86a731ffb3a6f837c10819f42_(_QWORD *a1)
{
  std::_Ref_count_base *v2; // rcx

  TouchKeyboardExperienceTelemetryLogger::OnViewCreated::~OnViewCreated((TouchKeyboardExperienceTelemetryLogger::OnViewCreated *)(a1 + 5));
  v2 = (std::_Ref_count_base *)a1[4];
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a1 + 1));
}
