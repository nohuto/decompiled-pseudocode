/*
 * XREFs of ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C005A628
 * Callers:
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C0056400 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     xxxSetClipboardViewer @ 0x1C00567D0 (xxxSetClipboardViewer.c)
 *     xxxEmptyClipboard @ 0x1C0056AE0 (xxxEmptyClipboard.c)
 *     NtUserGetOpenClipboardWindow @ 0x1C0057210 (NtUserGetOpenClipboardWindow.c)
 *     NtUserGetClipboardData @ 0x1C0057340 (NtUserGetClipboardData.c)
 *     NtUserGetClipboardOwner @ 0x1C0058450 (NtUserGetClipboardOwner.c)
 *     _SetClipboardData @ 0x1C0059654 (_SetClipboardData.c)
 *     xxxCloseClipboard @ 0x1C0059F90 (xxxCloseClipboard.c)
 *     _OpenClipboard @ 0x1C005A0D8 (_OpenClipboard.c)
 *     NtUserGetClipboardSequenceNumber @ 0x1C005A1E0 (NtUserGetClipboardSequenceNumber.c)
 *     NtUserCountClipboardFormats @ 0x1C005A230 (NtUserCountClipboardFormats.c)
 *     NtUserRemoveClipboardFormatListener @ 0x1C00C3880 (NtUserRemoveClipboardFormatListener.c)
 *     NtUserAddClipboardFormatListener @ 0x1C0128060 (NtUserAddClipboardFormatListener.c)
 *     xxxChangeClipboardChain @ 0x1C01511B0 (xxxChangeClipboardChain.c)
 *     _EnumClipboardFormats @ 0x1C0151A20 (_EnumClipboardFormats.c)
 *     NtUserGetClipboardViewer @ 0x1C01F9DA0 (NtUserGetClipboardViewer.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C01FCE20 (NtUserGetUpdatedClipboardFormats.c)
 *     _GetPriorityClipboardFormat @ 0x1C0220268 (_GetPriorityClipboardFormat.c)
 * Callees:
 *     ReferenceWindowStation @ 0x1C005A690 (ReferenceWindowStation.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

struct tagWINDOWSTATION *CheckClipboardAccess(void)
{
  __int64 ThreadWin32Thread; // rax
  NTSTATUS v1; // eax
  ULONG v3; // eax
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v1 = ReferenceWindowStation(KeGetCurrentThread(), 0LL, 4LL, &v4, (*(_DWORD *)(ThreadWin32Thread + 480) >> 3) & 1);
  if ( v1 >= 0 )
    return (struct tagWINDOWSTATION *)v4;
  v3 = RtlNtStatusToDosError(v1);
  UserSetLastError(v3);
  return 0LL;
}
