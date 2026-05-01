/*
 * XREFs of ?ClearCachedForegroundWindow@CApplicationManager@@UEAAJXZ @ 0x180148EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::ClearCachedForegroundWindow(CApplicationManager *this)
{
  return (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[16].Ptr + 40LL))(CApplicationManagerUtility::g_pIAMGlobals[16].Ptr);
}
