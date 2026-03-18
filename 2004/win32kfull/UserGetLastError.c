/*
 * XREFs of UserGetLastError @ 0x1C00488A4
 * Callers:
 *     NtUserSetCursorPos @ 0x1C003A370 (NtUserSetCursorPos.c)
 *     NtUserSendInput @ 0x1C003A7E0 (NtUserSendInput.c)
 *     xxxLoadHmodIndex @ 0x1C0046334 (xxxLoadHmodIndex.c)
 *     NtUserGetClipboardData @ 0x1C0057340 (NtUserGetClipboardData.c)
 *     NtUserSetClipboardData @ 0x1C0058E90 (NtUserSetClipboardData.c)
 *     NtUserOpenClipboard @ 0x1C0059BD0 (NtUserOpenClipboard.c)
 *     NtUserCloseClipboard @ 0x1C0059ED0 (NtUserCloseClipboard.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     NtUserInjectTouchInput @ 0x1C01FE850 (NtUserInjectTouchInput.c)
 * Callees:
 *     <none>
 */

__int64 UserGetLastError()
{
  __int64 v0; // rcx
  __int64 CurrentProcessWow64Process; // rax
  struct _NT_TIB *Self; // rcx

  if ( (unsigned __int8)KeIsAttachedProcess() )
    return 0LL;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v0);
  Self = KeGetPcr()->NtTib.Self;
  if ( CurrentProcessWow64Process )
    return HIDWORD(Self[147].StackBase);
  else
    return LODWORD(Self[1].Self);
}
