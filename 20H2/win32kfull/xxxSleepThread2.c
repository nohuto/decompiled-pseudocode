/*
 * XREFs of xxxSleepThread2 @ 0x1C0052630
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     xxxRealInternalGetMessage @ 0x1C004FF70 (xxxRealInternalGetMessage.c)
 *     xxxDCETrackCaptionButton @ 0x1C007C730 (xxxDCETrackCaptionButton.c)
 *     NtUserWaitMessage @ 0x1C00ECBD0 (NtUserWaitMessage.c)
 *     xxxRemoteDisconnect @ 0x1C011F7E0 (xxxRemoteDisconnect.c)
 *     xxxSleepThread @ 0x1C01D2E70 (xxxSleepThread.c)
 *     xxxWaitMessageEx @ 0x1C01E23E8 (xxxWaitMessageEx.c)
 *     NtUserRealWaitMessageEx @ 0x1C02005F0 (NtUserRealWaitMessageEx.c)
 *     NtUserWaitAvailableMessageEx @ 0x1C0204450 (NtUserWaitAvailableMessageEx.c)
 *     xxxRequestOutOfFullScreenMode @ 0x1C021E364 (xxxRequestOutOfFullScreenMode.c)
 *     xxxbFullscreenSwitch @ 0x1C021E45C (xxxbFullscreenSwitch.c)
 *     xxxTrackCaptionButton @ 0x1C0247470 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C02480F4 (xxxDragObject.c)
 *     xxxIsDragging @ 0x1C02487F8 (xxxIsDragging.c)
 * Callees:
 *     xxxHandleHealthyThread @ 0x1C00034E0 (xxxHandleHealthyThread.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00527B0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 */

__int64 __fastcall xxxSleepThread2(unsigned int a1, unsigned int a2, int a3, int a4, enum SLEEP_STATUS *a5)
{
  int v5; // edi
  __int64 result; // rax
  unsigned int v11; // esi
  unsigned __int64 v12; // rdi

  v5 = 0;
  if ( (a1 & 7) == 7 || (a1 & 6) != 0 && *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) )
  {
    v5 = 1;
    EtwTraceMessageCheckDelay(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1176LL) = 0;
    if ( *(int *)(gptiCurrent + 488LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
    *(_QWORD *)(gptiCurrent + 1232LL) &= ~0x400000000uLL;
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
    *(_DWORD *)(gptiCurrent + 1176LL) = v12;
    if ( *(int *)(gptiCurrent + 488LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
    *(_QWORD *)(gptiCurrent + 1232LL) &= ~0x400000000uLL;
    EtwTraceProcessWindowInfo(gptiCurrent);
    return v11;
  }
  return result;
}
