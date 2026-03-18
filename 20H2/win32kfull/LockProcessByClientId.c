/*
 * XREFs of LockProcessByClientId @ 0x1C003B608
 * Callers:
 *     NtUserCheckProcessForClipboardAccess @ 0x1C0008740 (NtUserCheckProcessForClipboardAccess.c)
 *     ?xxxUserNotifyProcessCreate@@YAJKK_KK@Z @ 0x1C003AC04 (-xxxUserNotifyProcessCreate@@YAJKK_KK@Z.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C003B498 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     NtUserDwmValidateWindow @ 0x1C003BB60 (NtUserDwmValidateWindow.c)
 *     ?_AllowSetForegroundWindow@@YAHK@Z @ 0x1C01177E0 (-_AllowSetForegroundWindow@@YAHK@Z.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C011C4E0 (NtUserSetActiveProcessForMonitor.c)
 *     xxxWaitForInputIdle @ 0x1C01232D0 (xxxWaitForInputIdle.c)
 *     GetConsoleDesktop @ 0x1C01E901C (GetConsoleDesktop.c)
 *     NtUserCheckAccessForIntegrityLevel @ 0x1C01F6CC0 (NtUserCheckAccessForIntegrityLevel.c)
 *     NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x1C01F91B0 (NtUserGetDisplayAutoRotationPreferencesByProcessId.c)
 *     xxxActivateDebugger @ 0x1C0247D28 (xxxActivateDebugger.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LockProcessByClientId(void *a1, PEPROCESS *a2)
{
  NTSTATUS v3; // edi

  v3 = PsLookupProcessByProcessId(a1, a2);
  if ( v3 < 0 || (unsigned int)PsGetProcessSessionId(*a2) == gSessionId )
    return (unsigned int)v3;
  ObfDereferenceObject(*a2);
  *a2 = 0LL;
  return 3221225473LL;
}
