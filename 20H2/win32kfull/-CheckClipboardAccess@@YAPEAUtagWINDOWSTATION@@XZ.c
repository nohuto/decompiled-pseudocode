/*
 * XREFs of ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0016C78
 * Callers:
 *     NtUserRemoveClipboardFormatListener @ 0x1C000EFB0 (NtUserRemoveClipboardFormatListener.c)
 *     NtUserGetClipboardOwner @ 0x1C0014470 (NtUserGetClipboardOwner.c)
 *     _SetClipboardData @ 0x1C0015CA4 (_SetClipboardData.c)
 *     xxxCloseClipboard @ 0x1C00165E0 (xxxCloseClipboard.c)
 *     _OpenClipboard @ 0x1C0016728 (_OpenClipboard.c)
 *     NtUserGetClipboardSequenceNumber @ 0x1C0016830 (NtUserGetClipboardSequenceNumber.c)
 *     NtUserCountClipboardFormats @ 0x1C0016880 (NtUserCountClipboardFormats.c)
 *     NtUserGetClipboardData @ 0x1C0016EF0 (NtUserGetClipboardData.c)
 *     NtUserGetOpenClipboardWindow @ 0x1C0018E10 (NtUserGetOpenClipboardWindow.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C011A378 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     xxxEmptyClipboard @ 0x1C011A730 (xxxEmptyClipboard.c)
 *     xxxSetClipboardViewer @ 0x1C0123180 (xxxSetClipboardViewer.c)
 *     NtUserAddClipboardFormatListener @ 0x1C012A070 (NtUserAddClipboardFormatListener.c)
 *     xxxChangeClipboardChain @ 0x1C0153AE0 (xxxChangeClipboardChain.c)
 *     _EnumClipboardFormats @ 0x1C0154350 (_EnumClipboardFormats.c)
 *     NtUserGetClipboardViewer @ 0x1C01F8F30 (NtUserGetClipboardViewer.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C01FBFB0 (NtUserGetUpdatedClipboardFormats.c)
 *     _GetPriorityClipboardFormat @ 0x1C021F3D8 (_GetPriorityClipboardFormat.c)
 * Callees:
 *     ReferenceWindowStation @ 0x1C0016CE0 (ReferenceWindowStation.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

struct tagWINDOWSTATION *CheckClipboardAccess(void)
{
  __int64 ThreadWin32Thread; // rax
  NTSTATUS v1; // eax
  ULONG v3; // eax
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v1 = ReferenceWindowStation(KeGetCurrentThread(), 0LL, 4LL, &v4, (*(_DWORD *)(ThreadWin32Thread + 488) >> 3) & 1);
  if ( v1 >= 0 )
    return (struct tagWINDOWSTATION *)v4;
  v3 = RtlNtStatusToDosError(v1);
  UserSetLastError(v3);
  return 0LL;
}
