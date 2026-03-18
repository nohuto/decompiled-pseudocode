/*
 * XREFs of LockProcessByClientId @ 0x1C00283C8
 * Callers:
 *     NtUserCheckProcessForClipboardAccess @ 0x1C0008750 (NtUserCheckProcessForClipboardAccess.c)
 *     NtUserDwmValidateWindow @ 0x1C0027D00 (NtUserDwmValidateWindow.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C0028258 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     ?xxxUserNotifyProcessCreate@@YAJKK_KK@Z @ 0x1C002A20C (-xxxUserNotifyProcessCreate@@YAJKK_KK@Z.c)
 *     ?_AllowSetForegroundWindow@@YAHK@Z @ 0x1C0116290 (-_AllowSetForegroundWindow@@YAHK@Z.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C011BA70 (NtUserSetActiveProcessForMonitor.c)
 *     xxxWaitForInputIdle @ 0x1C0121F80 (xxxWaitForInputIdle.c)
 *     GetConsoleDesktop @ 0x1C01E9CBC (GetConsoleDesktop.c)
 *     NtUserCheckAccessForIntegrityLevel @ 0x1C01F7B30 (NtUserCheckAccessForIntegrityLevel.c)
 *     NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x1C01FA020 (NtUserGetDisplayAutoRotationPreferencesByProcessId.c)
 *     xxxActivateDebugger @ 0x1C02492D8 (xxxActivateDebugger.c)
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
