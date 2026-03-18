/*
 * XREFs of ?zzzShowCursor@@YGH_N@Z @ 0xAEA1C
 * Callers:
 *     _NtUserShowCursor@4 @ 0xAE9F0 (_NtUserShowCursor@4.c)
 *     _xxxMoveSize@12 @ 0x177959 (_xxxMoveSize@12.c)
 *     _xxxDragObject@20 @ 0x1A6347 (_xxxDragObject@20.c)
 * Callees:
 *     _zzzEndDeferWinEventNotify@0 @ 0x33948 (_zzzEndDeferWinEventNotify@0.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _zzzUpdateCursorImage@0 @ 0x745FA (_zzzUpdateCursorImage@0.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall zzzShowCursor(char a1)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v4; // edx
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // esi
  bool v10; // zf

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v4 = ThreadWin32Thread;
  if ( (*(_DWORD *)(ThreadWin32Thread + 688) & 0x8000000) != 0 )
    v4 = *(_DWORD *)(ThreadWin32Thread + 848);
  v5 = *(_DWORD *)(v4 + 236);
  ++_gdwDeferWinEvent;
  v6 = *(_DWORD *)(v4 + 412);
  v7 = *(_DWORD *)(v4 + 236);
  if ( a1 )
  {
    *(_DWORD *)(v4 + 412) = v6 + 1;
    ++*(_DWORD *)(v7 + 280);
    if ( v5 != _gpqCursor )
      goto LABEL_5;
    v10 = *(_DWORD *)(v5 + 280) == 0;
  }
  else
  {
    *(_DWORD *)(v4 + 412) = v6 - 1;
    --*(_DWORD *)(v7 + 280);
    if ( v5 != _gpqCursor )
      goto LABEL_5;
    v10 = *(_DWORD *)(v5 + 280) == -1;
  }
  if ( v10 )
    zzzUpdateCursorImage();
LABEL_5:
  v8 = *(_DWORD *)(v5 + 280);
  zzzEndDeferWinEventNotify();
  return v8;
}
