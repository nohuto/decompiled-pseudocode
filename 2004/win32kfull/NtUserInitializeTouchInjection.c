/*
 * XREFs of NtUserInitializeTouchInjection @ 0x1C01FE480
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x1C01DBA24 (-CheckCurrentInjectionConfiguration@@YAXXZ.c)
 *     _InitializeTouchInjectionWorker @ 0x1C01DD0F0 (_InitializeTouchInjectionWorker.c)
 *     ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C02262F8 (-TraceLoggingTouchInjection@@YAXHHHK@Z.c)
 */

__int64 __fastcall NtUserInitializeTouchInjection(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rbx
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8

  EnterCrit(0LL, 1LL);
  InputExtensibilityCalloutGuard();
  v4 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( a1 - 1 > 0xFF || a2 - 1 > 2 )
  {
    TraceLoggingTouchInjection(0, 0, a1, a2);
    v5 = 0;
    UserSetLastError(87LL, v9, v10);
  }
  else
  {
    CheckCurrentInjectionConfiguration();
    v5 = InitializeTouchInjectionWorker(a1, a2, v4);
    TraceLoggingTouchInjection(0, 1, a1, a2);
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8);
  return v5;
}
