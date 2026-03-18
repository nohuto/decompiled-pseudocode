/*
 * XREFs of CheckWinstaAttributeAccess @ 0x1C003DD00
 * Callers:
 *     NtUserLockWorkStation @ 0x1C0008F20 (NtUserLockWorkStation.c)
 *     CheckCursorClipAccess @ 0x1C0030640 (CheckCursorClipAccess.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C003B2AC (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     NtUserGetCursorInfo @ 0x1C003CFA0 (NtUserGetCursorInfo.c)
 *     _RegisterHotKey @ 0x1C003D584 (_RegisterHotKey.c)
 *     _SetCaretBlinkTime @ 0x1C003DB40 (_SetCaretBlinkTime.c)
 *     ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x1C003DBD0 (-xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C003E1F8 (xxxSystemParametersInfoWorker.c)
 *     _SetDoubleClickTime @ 0x1C0056FE0 (_SetDoubleClickTime.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C01D490C (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     NtUserShowSystemCursor @ 0x1C02041E0 (NtUserShowSystemCursor.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall CheckWinstaAttributeAccess(__int64 DesiredAccess)
{
  ACCESS_MASK v1; // edi
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v4; // rcx

  v1 = DesiredAccess;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(DesiredAccess);
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
    return 1LL;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000) != 0 )
  {
    if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 680), v1) )
      return 1LL;
    v4 = 5LL;
  }
  else
  {
    v4 = 1459LL;
  }
  UserSetLastError(v4);
  return 0LL;
}
