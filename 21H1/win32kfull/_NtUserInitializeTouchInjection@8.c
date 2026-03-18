/*
 * XREFs of _NtUserInitializeTouchInjection@8 @ 0x16557C
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?CheckCurrentInjectionConfiguration@@YGXXZ @ 0x149044 (-CheckCurrentInjectionConfiguration@@YGXXZ.c)
 *     __InitializeTouchInjectionWorker@12 @ 0x149F23 (__InitializeTouchInjectionWorker@12.c)
 *     ?TraceLoggingTouchInjection@@YGXHHHK@Z @ 0x187129 (-TraceLoggingTouchInjection@@YGXHHHK@Z.c)
 */

int __stdcall NtUserInitializeTouchInjection(unsigned int a1, int a2)
{
  int v2; // ebx
  struct tagPROCESSINFO *v4; // [esp+0h] [ebp-10h]
  int v5; // [esp+0h] [ebp-10h]
  unsigned int v6; // [esp+4h] [ebp-Ch]
  unsigned int v7; // [esp+4h] [ebp-Ch]
  int v8; // [esp+Ch] [ebp-4h]

  v2 = 0;
  EnterCrit(0, 1);
  InputExtensibilityCalloutGuard();
  v8 = *(_DWORD *)(_gptiCurrent + 232);
  if ( a1 && a1 <= 0x100 && (a2 == 1 || a2 == 2 || a2 == 3) )
  {
    CheckCurrentInjectionConfiguration(v4, v6);
    v2 = _InitializeTouchInjectionWorker(a1, a2, v8);
    TraceLoggingTouchInjection(a1, a2, v5, v7);
  }
  else
  {
    TraceLoggingTouchInjection(a1, a2, (int)v4, v6);
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
