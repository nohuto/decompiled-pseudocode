/*
 * XREFs of ?SetRootXamlIslandWindow@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x18012D190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::SetRootXamlIslandWindow(CApplicationManager *this, HWND a2)
{
  RTL_SRWLOCK *v2; // rbx

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  *((_QWORD *)this + 86) = a2;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return 0LL;
}
