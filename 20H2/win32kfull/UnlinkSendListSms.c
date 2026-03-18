/*
 * XREFs of UnlinkSendListSms @ 0x1C00D705C
 * Callers:
 *     xxxReceiveMessage @ 0x1C0052EE0 (xxxReceiveMessage.c)
 *     SendMsgCleanup @ 0x1C007EE60 (SendMsgCleanup.c)
 *     xxxReceiverDied @ 0x1C007F3DC (xxxReceiverDied.c)
 *     SuspendThreadQueue @ 0x1C010F150 (SuspendThreadQueue.c)
 * Callees:
 *     IsPointerParentNotify @ 0x1C00D7118 (IsPointerParentNotify.c)
 *     IsPointerInputMessageWithState @ 0x1C00D713C (IsPointerInputMessageWithState.c)
 *     _FreeTouchInputInfo @ 0x1C01DC3E0 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1C0227790 (_FreeGestureInfo.c)
 */

__int64 __fastcall UnlinkSendListSms(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ecx
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 **v8; // rcx
  __int64 v9; // rcx

  v5 = *((_DWORD *)a1 + 26);
  if ( v5 == 576 )
  {
    FreeTouchInputInfo(a1[12], 0LL);
  }
  else if ( v5 == 281 )
  {
    FreeGestureInfo(a1[12], 0LL, a3, a4);
  }
  if ( (*((_DWORD *)a1 + 21) & 0x200) == 0
    && ((unsigned int)IsPointerInputMessageWithState(*((unsigned int *)a1 + 26))
     || (unsigned int)IsPointerParentNotify(v6, a1[11])) )
  {
    CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, a1[12], 6LL, a1);
  }
  v7 = (__int64 *)*a1;
  if ( *(__int64 **)(*a1 + 8) != a1 || (v8 = (__int64 **)a1[1], *v8 != a1) )
    __fastfail(3u);
  *v8 = v7;
  v7[1] = (__int64)v8;
  HMAssignmentUnlock(a1 + 14);
  v9 = a1[15];
  if ( v9 )
    Win32FreePool(v9);
  return Win32FreeToPagedLookasideList(SMSLookaside, a1);
}
