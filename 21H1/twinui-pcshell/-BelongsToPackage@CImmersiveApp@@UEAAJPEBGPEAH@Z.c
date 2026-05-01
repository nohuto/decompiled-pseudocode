/*
 * XREFs of ?BelongsToPackage@CImmersiveApp@@UEAAJPEBGPEAH@Z @ 0x180156F50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::BelongsToPackage(CImmersiveApp *this, const unsigned __int16 *a2, int *a3)
{
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  *a3 = (*(unsigned __int8 (__fastcall **)(char *, const unsigned __int16 *, _QWORD))(*((_QWORD *)this + 3) + 320LL))(
          (char *)this + 24,
          a2,
          0LL) != 0;
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
