/*
 * XREFs of ?FailFastIfAccessDenied@@YAJJ@Z @ 0x1800527B0
 * Callers:
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x18002C7B4 (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 *     ?EnsureDCompResources@CDesktopManager@@QEAAJXZ @ 0x180052664 (-EnsureDCompResources@CDesktopManager@@QEAAJXZ.c)
 *     ?CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ @ 0x180085ED8 (-CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     memset_0 @ 0x180056082 (memset_0.c)
 */

__int64 __fastcall FailFastIfAccessDenied(unsigned int a1)
{
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  if ( a1 == -2147024891 )
  {
    memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
    pExceptionRecord.ExceptionCode = -2147024891;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  return a1;
}
