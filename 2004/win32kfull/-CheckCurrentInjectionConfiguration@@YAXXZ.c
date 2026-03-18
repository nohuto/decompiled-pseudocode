/*
 * XREFs of ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x1C01DBA24
 * Callers:
 *     xxxInjectTouchInput @ 0x1C01DD30C (xxxInjectTouchInput.c)
 *     NtUserInitializeTouchInjection @ 0x1C01FE480 (NtUserInitializeTouchInjection.c)
 * Callees:
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x1C01DC0AC (-RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z.c)
 */

void CheckCurrentInjectionConfiguration(void)
{
  int v0; // edx
  __int64 v1; // rcx
  __int64 v2; // rax

  v0 = 0;
  v1 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( gbPendRecreateTouchInjectionDevices == 1 || (v2 = *(_QWORD *)(v1 + 896)) != 0 && *(_DWORD *)(v2 + 52) )
  {
    if ( gbPendRecreateTouchInjectionDevices )
    {
      gbPendRecreateTouchInjectionDevices = 0;
      v0 = 1;
    }
    RealizePendingRecreateTouchInjectionDevices((struct tagPROCESSINFO *)v1, v0);
  }
}
