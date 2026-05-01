/*
 * XREFs of ?IsDesktopVisible@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@PEAH@Z @ 0x180160920
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveMode::IsDesktopVisible(CImmersiveMode *this, struct IImmersiveMonitor *a2, int *a3)
{
  *a3 = 0;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  LODWORD(this) = (*(__int64 (__fastcall **)(char *, struct IImmersiveMonitor *, int *))(*((_QWORD *)this - 7) + 72LL))(
                    (char *)this - 56,
                    a2,
                    a3);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)this;
}
