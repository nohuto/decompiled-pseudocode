/*
 * XREFs of ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ @ 0x18005C828
 * Callers:
 *     ?SetRegistration@WindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x180059610 (-SetRegistration@WindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIniti.c)
 *     _lambda_a672f9bfb72efbd6ddbbb83b87e44bdf_::operator() @ 0x18005C718 (_lambda_a672f9bfb72efbd6ddbbb83b87e44bdf_--operator().c)
 *     ?SetNavigationLevelOverride@WindowWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z @ 0x1802BE3D0 (-SetNavigationLevelOverride@WindowWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z.c)
 *     ?put_VisibilityRevoked@WindowWrapperBase@@UEAAJE@Z @ 0x1802BFEF0 (-put_VisibilityRevoked@WindowWrapperBase@@UEAAJE@Z.c)
 * Callees:
 *     ?NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x18005CFF4 (-NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::PushDesiredNavigationLevelToDerivedClass(WindowWrapperBase *this)
{
  int v2; // eax
  __int64 v3; // rsi
  unsigned int v4; // edi

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 216LL))(*((_QWORD *)this + 36));
  v2 = *((_DWORD *)this + 47);
  v3 = *((int *)this + 76);
  v4 = *((_DWORD *)this + 122);
  if ( (v2 & 0x10) != 0 && (v2 & 0x20) == 0 )
    v4 = v4 != 0;
  if ( v4 != (*(unsigned int (__fastcall **)(WindowWrapperBase *))(*(_QWORD *)this + 136LL))(this) )
  {
    (*(void (__fastcall **)(WindowWrapperBase *, _QWORD))(*(_QWORD *)this + 160LL))(this, v4);
    if ( v3 )
      WindowWrapperBase::NotifyGlobalComponentsForWindowStateChange(this, v3, 2LL);
  }
  WindowWrapperBase::ReconcileSessionIdleTaskCompletion(this);
}
