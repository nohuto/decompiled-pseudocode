/*
 * XREFs of _AppSwitchOperation::EvictApp_::_1_::dtor$0 @ 0x1804076AD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AppSwitchOperation::EvictApp_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)(a2 + 48));
}
