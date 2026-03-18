/*
 * XREFs of ?CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ @ 0x91C96
 * Callers:
 *     _NtUserIsClipboardFormatAvailable@4 @ 0x1159A (_NtUserIsClipboardFormatAvailable@4.c)
 *     __OpenClipboard@8 @ 0x11832 (__OpenClipboard@8.c)
 *     _xxxCloseClipboard@4 @ 0x11D76 (_xxxCloseClipboard@4.c)
 *     _NtUserGetOpenClipboardWindow@0 @ 0x121B0 (_NtUserGetOpenClipboardWindow@0.c)
 *     _NtUserCountClipboardFormats@0 @ 0x121E0 (_NtUserCountClipboardFormats@0.c)
 *     _NtUserGetClipboardSequenceNumber@0 @ 0x12242 (_NtUserGetClipboardSequenceNumber@0.c)
 *     _xxxEmptyClipboard@4 @ 0xACB3A (_xxxEmptyClipboard@4.c)
 *     _NtUserRemoveClipboardFormatListener@4 @ 0xD444C (_NtUserRemoveClipboardFormatListener@4.c)
 *     _NtUserAddClipboardFormatListener@4 @ 0xEB73C (_NtUserAddClipboardFormatListener@4.c)
 *     _NtUserGetClipboardData@8 @ 0x161F6A (_NtUserGetClipboardData@8.c)
 *     _NtUserGetClipboardOwner@0 @ 0x162558 (_NtUserGetClipboardOwner@0.c)
 *     _NtUserGetClipboardViewer@0 @ 0x162587 (_NtUserGetClipboardViewer@0.c)
 *     _NtUserGetUpdatedClipboardFormats@12 @ 0x1649A2 (_NtUserGetUpdatedClipboardFormats@12.c)
 *     ?xxxDisownClipboard@@YGXPAUtagWND@@@Z @ 0x18244D (-xxxDisownClipboard@@YGXPAUtagWND@@@Z.c)
 *     __EnumClipboardFormats@4 @ 0x182E64 (__EnumClipboardFormats@4.c)
 *     __GetPriorityClipboardFormat@8 @ 0x182ECD (__GetPriorityClipboardFormat@8.c)
 *     __SetClipboardData@16 @ 0x182F88 (__SetClipboardData@16.c)
 *     _xxxChangeClipboardChain@8 @ 0x182FF0 (_xxxChangeClipboardChain@8.c)
 *     _xxxSetClipboardViewer@4 @ 0x183220 (_xxxSetClipboardViewer@4.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _ReferenceWindowStation@20 @ 0x91CE2 (_ReferenceWindowStation@20.c)
 */

struct tagWINDOWSTATION *__stdcall CheckClipboardAccess()
{
  PKTHREAD CurrentThread; // eax
  unsigned int v1; // esi
  struct _KTHREAD *v2; // eax
  NTSTATUS v3; // eax
  struct _NT_TIB *v5; // eax
  int v6; // [esp+4h] [ebp-4h] BYREF

  v6 = 0;
  CurrentThread = KeGetCurrentThread();
  v1 = *(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 264);
  v2 = KeGetCurrentThread();
  v3 = ReferenceWindowStation(v2, 0, 4u, (int)&v6, (v1 >> 3) & 1);
  if ( v3 >= 0 )
    return (struct tagWINDOWSTATION *)v6;
  v5 = (struct _NT_TIB *)RtlNtStatusToDosError(v3);
  UserSetLastError(v5);
  return 0;
}
