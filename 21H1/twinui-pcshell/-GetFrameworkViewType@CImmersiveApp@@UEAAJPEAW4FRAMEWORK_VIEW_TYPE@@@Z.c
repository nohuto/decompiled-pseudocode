/*
 * XREFs of ?GetFrameworkViewType@CImmersiveApp@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18007E240
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::GetFrameworkViewType(CImmersiveApp *this, enum FRAMEWORK_VIEW_TYPE *a2)
{
  int v4; // eax
  RTL_SRWLOCK *v5; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 616LL))((char *)this + 8);
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  *(_DWORD *)a2 = v4;
  ReleaseSRWLockShared(v5);
  return 0LL;
}
