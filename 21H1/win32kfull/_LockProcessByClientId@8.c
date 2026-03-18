/*
 * XREFs of _LockProcessByClientId@8 @ 0x1AD58
 * Callers:
 *     _NtUserCheckProcessForClipboardAccess@8 @ 0x11072 (_NtUserCheckProcessForClipboardAccess@8.c)
 *     ?xxxUserNotifyProcessCreate@@YGJKKKK@Z @ 0x1A838 (-xxxUserNotifyProcessCreate@@YGJKKKK@Z.c)
 *     ?xxxUserNotifyConsoleApplication@@YGJPAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1AC7E (-xxxUserNotifyConsoleApplication@@YGJPAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     ?_AllowSetForegroundWindow@@YGHK@Z @ 0x811C4 (-_AllowSetForegroundWindow@@YGHK@Z.c)
 *     _NtUserSetActiveProcessForMonitor@8 @ 0xB1FFE (_NtUserSetActiveProcessForMonitor@8.c)
 *     _NtUserDwmValidateWindow@8 @ 0xC8888 (_NtUserDwmValidateWindow@8.c)
 *     _xxxWaitForInputIdle@12 @ 0xE365C (_xxxWaitForInputIdle@12.c)
 *     _GetConsoleDesktop@16 @ 0x154940 (_GetConsoleDesktop@16.c)
 *     _NtUserCheckAccessForIntegrityLevel@12 @ 0x160084 (_NtUserCheckAccessForIntegrityLevel@12.c)
 *     _NtUserGetDisplayAutoRotationPreferencesByProcessId@12 @ 0x162940 (_NtUserGetDisplayAutoRotationPreferencesByProcessId@12.c)
 *     _xxxActivateDebugger@4 @ 0x1A606B (_xxxActivateDebugger@4.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall LockProcessByClientId(HANDLE ProcessId, PEPROCESS *Process)
{
  NTSTATUS v3; // edi

  v3 = PsLookupProcessByProcessId(ProcessId, Process);
  if ( v3 < 0 || PsGetProcessSessionId(*Process) == _gSessionId )
    return v3;
  ObfDereferenceObject(*Process);
  *Process = 0;
  return -1073741823;
}
