/*
 * XREFs of ?xxxFreeListFree@@YGXPAUtagFREELIST@@@Z @ 0x17F7F9
 * Callers:
 *     ?xxxCleanupDdeConv@@YGXPAUtagWND@@@Z @ 0x17F222 (-xxxCleanupDdeConv@@YGXPAUtagWND@@@Z.c)
 *     _xxxDDETrackGetMessageHook@4 @ 0x180099 (_xxxDDETrackGetMessageHook@4.c)
 *     _xxxDDETrackPostHook@20 @ 0x18033E (_xxxDDETrackPostHook@20.c)
 *     _xxxDDETrackWindowDying@8 @ 0x180709 (_xxxDDETrackWindowDying@8.c)
 * Callees:
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _xxxClientFreeDDEHandle@8 @ 0x19428F (_xxxClientFreeDDEHandle@8.c)
 */

void __thiscall xxxFreeListFree(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // edi
  int v3; // edx
  int v4; // ecx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD *v7; // [esp-4h] [ebp-18h]
  _DWORD v8[3]; // [esp+8h] [ebp-Ch] BYREF

  v1 = this;
  memset(v8, 0, sizeof(v8));
  if ( this )
  {
    v2 = *(_DWORD *)(_gptiCurrent + 264) & 1;
    do
    {
      PushW32ThreadLock((int)v1, v8, (int)FreeListFree);
      if ( !v2 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v3) = 4;
          WPP_RECORDER_SF_q(v4, v3, 0xEu, 55, (int)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids, v1[1]);
        }
        xxxClientFreeDDEHandle(v1[1], v1[2]);
      }
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v7 = v1;
      *(_DWORD *)(ThreadWin32Thread + 8) = v8[0];
      v1 = (_DWORD *)*v1;
      Win32FreePool(v7);
    }
    while ( v1 );
  }
}
