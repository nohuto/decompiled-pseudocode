/*
 * XREFs of UserGetLastError @ 0x1C012378C
 * Callers:
 *     NtUserSetClipboardData @ 0x1C00154E0 (NtUserSetClipboardData.c)
 *     NtUserOpenClipboard @ 0x1C0016220 (NtUserOpenClipboard.c)
 *     NtUserCloseClipboard @ 0x1C0016520 (NtUserCloseClipboard.c)
 *     NtUserGetClipboardData @ 0x1C0016EF0 (NtUserGetClipboardData.c)
 *     NtUserSetCursorPos @ 0x1C002E040 (NtUserSetCursorPos.c)
 *     xxxLoadHmodIndex @ 0x1C00751F4 (xxxLoadHmodIndex.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     NtUserSendInput @ 0x1C00BA360 (NtUserSendInput.c)
 *     NtUserInjectTouchInput @ 0x1C01FD9E0 (NtUserInjectTouchInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetLastError(__int64 a1)
{
  __int64 v1; // rcx
  __int64 CurrentProcessWow64Process; // rax
  struct _NT_TIB *Self; // rcx

  if ( (unsigned __int8)KeIsAttachedProcess(a1) )
    return 0LL;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v1);
  Self = KeGetPcr()->NtTib.Self;
  if ( CurrentProcessWow64Process )
    return HIDWORD(Self[147].StackBase);
  else
    return LODWORD(Self[1].Self);
}
