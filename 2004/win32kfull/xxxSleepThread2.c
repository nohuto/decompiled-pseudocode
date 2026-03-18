/*
 * XREFs of xxxSleepThread2 @ 0x1C0096960
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00942A0 (xxxRealInternalGetMessage.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     xxxDCETrackCaptionButton @ 0x1C00BAD98 (xxxDCETrackCaptionButton.c)
 *     NtUserWaitMessage @ 0x1C00F2360 (NtUserWaitMessage.c)
 *     xxxRemoteDisconnect @ 0x1C011E080 (xxxRemoteDisconnect.c)
 *     xxxSleepThread @ 0x1C01D3C80 (xxxSleepThread.c)
 *     xxxWaitMessageEx @ 0x1C01E30A8 (xxxWaitMessageEx.c)
 *     NtUserRealWaitMessageEx @ 0x1C0201460 (NtUserRealWaitMessageEx.c)
 *     NtUserWaitAvailableMessageEx @ 0x1C02052C0 (NtUserWaitAvailableMessageEx.c)
 *     xxxRequestOutOfFullScreenMode @ 0x1C021F1F4 (xxxRequestOutOfFullScreenMode.c)
 *     xxxbFullscreenSwitch @ 0x1C021F2EC (xxxbFullscreenSwitch.c)
 *     xxxTrackCaptionButton @ 0x1C0248A20 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C02496A4 (xxxDragObject.c)
 *     xxxIsDragging @ 0x1C0249DA8 (xxxIsDragging.c)
 * Callees:
 *     xxxHandleHealthyThread @ 0x1C0003640 (xxxHandleHealthyThread.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0096AE0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 */

__int64 __fastcall xxxSleepThread2(unsigned int a1, unsigned int a2, int a3, int a4, enum SLEEP_STATUS *a5)
{
  int v5; // edi
  __int64 result; // rax
  unsigned int v11; // esi
  unsigned __int64 v12; // rdi

  v5 = 0;
  if ( (a1 & 7) == 7 || (a1 & 6) != 0 && *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 104LL) )
  {
    v5 = 1;
    EtwTraceMessageCheckDelay(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1168LL) = 0;
    if ( *(int *)(gptiCurrent + 480LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
    *(_QWORD *)(gptiCurrent + 1224LL) &= ~0x400000000uLL;
    EtwTraceProcessWindowInfo(gptiCurrent);
  }
  result = xxxRealSleepThread(a1, a2, a3, a4, a5);
  v11 = result;
  if ( v5 )
  {
    v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( !(_DWORD)v12 )
      LODWORD(v12) = -1;
    EtwTraceMessageCheckDelay(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1168LL) = v12;
    if ( *(int *)(gptiCurrent + 480LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
    *(_QWORD *)(gptiCurrent + 1224LL) &= ~0x400000000uLL;
    EtwTraceProcessWindowInfo(gptiCurrent);
    return v11;
  }
  return result;
}
