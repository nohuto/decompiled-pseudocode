/*
 * XREFs of _CApplicationManager::GetRunningApplicationsFromPackageId_::_1_::dtor$0 @ 0x18014C184
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::GetRunningApplicationsFromPackageId_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CAutoSRWSharedLock::~CAutoSRWSharedLock((RTL_SRWLOCK **)(a2 + 32));
}
