/*
 * XREFs of ?WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x1802D2FB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$WindowDestroyed@AEAIAEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEAUHWND__@@@Z @ 0x1802CCD68 (--$WindowDestroyed@AEAIAEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEAUHWND__@@@Z.c)
 *     ?NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x1802CFE98 (-NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@.c)
 *     ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x1802D30C4 (-_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1802DC0A4 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewWrapperBase::WindowDestroyed(ViewWrapperBase *this, HWND a2)
{
  RTL_SRWLOCK *v4; // rdi
  HWND v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  v4 = (RTL_SRWLOCK *)(*((_QWORD *)this + 20) + 280LL);
  AcquireSRWLockExclusive(v4);
  if ( a2 == *((HWND *)this + 33) )
  {
    ViewManagerInteropTraceLogging::WindowDestroyed<unsigned int &,HWND__ * &>((int *)this + 35, (__int64 *)&v5);
    (*(void (__fastcall **)(char *))(*((_QWORD *)this - 1) + 176LL))((char *)this - 8);
    *((_QWORD *)this + 33) = 0LL;
    WindowReadyState::SetWindow((char *)this + 352, 0LL, 0LL);
    ViewWrapperBase::NotifyGlobalComponentsForWindowStateChange((__int64)this - 8, (__int64)a2, 1);
    ViewWrapperBase::_ReconcileSessionIdleTaskCompletion((ViewWrapperBase *)((char *)this - 8));
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
