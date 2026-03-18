/*
 * XREFs of _CheckWinstaAttributeAccess@4 @ 0x7FB22
 * Callers:
 *     _NtUserLockWorkStation@0 @ 0x122D6 (_NtUserLockWorkStation@0.c)
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     ?zzzSetCursorPos@@YG_NHH@Z @ 0x7C9A8 (-zzzSetCursorPos@@YG_NHH@Z.c)
 *     __SetCaretBlinkTime@4 @ 0x7DA40 (__SetCaretBlinkTime@4.c)
 *     _NtUserGetCursorInfo@4 @ 0x7F2E0 (_NtUserGetCursorInfo@4.c)
 *     ?xxxGetCursorPos@@YGHPAUtagPOINT@@K@Z @ 0x7FA68 (-xxxGetCursorPos@@YGHPAUtagPOINT@@K@Z.c)
 *     __RegisterHotKey@20 @ 0xC5F06 (__RegisterHotKey@20.c)
 *     __SetDoubleClickTime@4 @ 0xE49D2 (__SetDoubleClickTime@4.c)
 *     ?zzzSetSystemCursor@@YG_NPAUtagCURSOR@@K@Z @ 0x143292 (-zzzSetSystemCursor@@YG_NPAUtagCURSOR@@K@Z.c)
 *     _NtUserShowSystemCursor@4 @ 0x16A6D8 (_NtUserShowSystemCursor@4.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall CheckWinstaAttributeAccess(ACCESS_MASK DesiredAccess)
{
  int CurrentProcessWin32Process; // esi
  int v3; // ecx

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  if ( PsGetCurrentProcessId() == (HANDLE)_gpidLogon )
    return 1;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 8) & 0x40000) != 0 )
  {
    if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 364), DesiredAccess) )
      return 1;
    v3 = 5;
  }
  else
  {
    v3 = 1459;
  }
  UserSetLastError(v3);
  return 0;
}
