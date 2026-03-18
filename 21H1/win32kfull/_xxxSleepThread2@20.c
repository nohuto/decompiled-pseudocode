/*
 * XREFs of _xxxSleepThread2@20 @ 0x4510E
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     _xxxWaitMessageEx@12 @ 0xA19D2 (_xxxWaitMessageEx@12.c)
 *     _xxxRemoteDisconnect@0 @ 0xD123C (_xxxRemoteDisconnect@0.c)
 *     _xxxSleepThread@16 @ 0xEFFA2 (_xxxSleepThread@16.c)
 *     _xxxDCETrackCaptionButton@8 @ 0x151F8A (_xxxDCETrackCaptionButton@8.c)
 *     _NtUserRealWaitMessageEx@8 @ 0x167EF0 (_NtUserRealWaitMessageEx@8.c)
 *     _NtUserWaitAvailableMessageEx@8 @ 0x16B300 (_NtUserWaitAvailableMessageEx@8.c)
 *     _xxxRequestOutOfFullScreenMode@0 @ 0x181663 (_xxxRequestOutOfFullScreenMode@0.c)
 *     _xxxTrackCaptionButton@8 @ 0x1A558D (_xxxTrackCaptionButton@8.c)
 *     _xxxDragObject@20 @ 0x1A6347 (_xxxDragObject@20.c)
 *     _xxxIsDragging@16 @ 0x1A68B7 (_xxxIsDragging@16.c)
 * Callees:
 *     ?xxxRealSleepThread@@YGHIKHHPAW4SLEEP_STATUS@@@Z @ 0x45220 (-xxxRealSleepThread@@YGHIKHHPAW4SLEEP_STATUS@@@Z.c)
 *     _WaitMaskIncludesUserInput@4 @ 0x45832 (_WaitMaskIncludesUserInput@4.c)
 *     _xxxHandleHealthyThread@4 @ 0x1707E9 (_xxxHandleHealthyThread@4.c)
 */

int __stdcall xxxSleepThread2(unsigned int a1, unsigned int a2, int a3)
{
  int v3; // edi
  int v4; // eax
  int result; // eax
  int v6; // ebx
  int v7; // edi
  int v8; // eax
  int v9; // esi
  unsigned int v10; // edx
  int v11; // [esp+0h] [ebp-18h]
  enum SLEEP_STATUS *v12; // [esp+4h] [ebp-14h]
  int v13; // [esp+10h] [ebp-8h]

  v3 = 0;
  if ( WaitMaskIncludesUserInput() )
  {
    v3 = 1;
    if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 && MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
    {
      do
        _mm_pause();
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
    }
    EtwTraceMessageCheckDelay(_gptiCurrent);
    *(_DWORD *)(_gptiCurrent + 660) = 0;
    if ( *(int *)(_gptiCurrent + 264) < 0 )
      xxxHandleHealthyThread(_gptiCurrent);
    v4 = *(_DWORD *)(_gptiCurrent + 688);
    *(_DWORD *)(_gptiCurrent + 692) &= ~4u;
    *(_DWORD *)(_gptiCurrent + 688) = v4;
    EtwTraceProcessWindowInfo(_gptiCurrent);
  }
  result = xxxRealSleepThread(a1, a2, a3, v11, v12);
  v13 = result;
  if ( v3 )
  {
    v6 = MEMORY[0xFFDF0004];
    if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
    {
      v9 = MEMORY[0xFFDF0324];
      v10 = MEMORY[0xFFDF0320];
      if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
      {
        do
        {
          _mm_pause();
          v9 = MEMORY[0xFFDF0324];
          v10 = MEMORY[0xFFDF0320];
        }
        while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
        v6 = MEMORY[0xFFDF0004];
      }
      v7 = v6 * (v9 << 8) + (((unsigned int)v6 * (unsigned __int64)v10) >> 24);
    }
    else
    {
      v7 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
    }
    if ( !v7 )
      v7 = -1;
    EtwTraceMessageCheckDelay(_gptiCurrent);
    *(_DWORD *)(_gptiCurrent + 660) = v7;
    if ( *(int *)(_gptiCurrent + 264) < 0 )
      xxxHandleHealthyThread(_gptiCurrent);
    v8 = *(_DWORD *)(_gptiCurrent + 688);
    *(_DWORD *)(_gptiCurrent + 692) &= ~4u;
    *(_DWORD *)(_gptiCurrent + 688) = v8;
    EtwTraceProcessWindowInfo(_gptiCurrent);
    return v13;
  }
  return result;
}
