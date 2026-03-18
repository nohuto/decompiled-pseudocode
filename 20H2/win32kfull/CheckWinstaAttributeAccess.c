/*
 * XREFs of CheckWinstaAttributeAccess @ 0x1C002F4F0
 * Callers:
 *     NtUserLockWorkStation @ 0x1C0008F10 (NtUserLockWorkStation.c)
 *     CheckCursorClipAccess @ 0x1C002C990 (CheckCursorClipAccess.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C002E0F8 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     NtUserGetCursorInfo @ 0x1C002E790 (NtUserGetCursorInfo.c)
 *     _RegisterHotKey @ 0x1C002ED74 (_RegisterHotKey.c)
 *     _SetCaretBlinkTime @ 0x1C002F330 (_SetCaretBlinkTime.c)
 *     ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x1C002F3C0 (-xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 *     _SetDoubleClickTime @ 0x1C011C9B0 (_SetDoubleClickTime.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C01D3AFC (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     NtUserShowSystemCursor @ 0x1C0203370 (NtUserShowSystemCursor.c)
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall CheckWinstaAttributeAccess(__int64 DesiredAccess, __int64 a2, __int64 a3)
{
  ACCESS_MASK v3; // edi
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v6; // rcx

  v3 = DesiredAccess;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(DesiredAccess, a2, a3);
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
    return 1LL;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000) != 0 )
  {
    if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 680), v3) )
      return 1LL;
    v6 = 5LL;
  }
  else
  {
    v6 = 1459LL;
  }
  UserSetLastError(v6);
  return 0LL;
}
