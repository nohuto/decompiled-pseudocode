/*
 * XREFs of NtUserInitializeTouchInjection @ 0x1C01FD610
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x1C01DAD64 (-CheckCurrentInjectionConfiguration@@YAXXZ.c)
 *     _InitializeTouchInjectionWorker @ 0x1C01DC430 (_InitializeTouchInjectionWorker.c)
 *     ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C0225468 (-TraceLoggingTouchInjection@@YAXHHHK@Z.c)
 */

__int64 __fastcall NtUserInitializeTouchInjection(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rbx
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8

  EnterCrit(0LL, 1LL);
  InputExtensibilityCalloutGuard();
  v4 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( a1 - 1 > 0xFF || a2 - 1 > 2 )
  {
    TraceLoggingTouchInjection(0, 0, a1, a2);
    v5 = 0;
    UserSetLastError(87LL, v7, v8);
  }
  else
  {
    CheckCurrentInjectionConfiguration();
    v5 = InitializeTouchInjectionWorker(a1, a2, v4);
    TraceLoggingTouchInjection(0, 1, a1, a2);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v5;
}
