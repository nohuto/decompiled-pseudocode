/*
 * XREFs of _xxxResetTooltip@4 @ 0x12D36
 * Callers:
 *     _xxxTrackMouseMove@12 @ 0x129D6 (_xxxTrackMouseMove@12.c)
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 *     _xxxCancelMouseMoveTracking@16 @ 0x15E12 (_xxxCancelMouseMoveTracking@16.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     ?xxxTooltipHandleTimer@@YGHPAUtagTOOLTIPWND@@I@Z @ 0x1A0F63 (-xxxTooltipHandleTimer@@YGHPAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     ?KillTooltipTimer@@YGXPAUtagTOOLTIPWND@@@Z @ 0x12D78 (-KillTooltipTimer@@YGXPAUtagTOOLTIPWND@@@Z.c)
 *     _xxxSetWindowPosAndBand@32 @ 0x33008 (_xxxSetWindowPosAndBand@32.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 */

int __thiscall xxxResetTooltip(_DWORD *this)
{
  int result; // eax
  int v3; // edi
  int v4; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  struct tagTOOLTIPWND *v7; // [esp+0h] [ebp-18h]
  struct tagWND *v8; // [esp+0h] [ebp-18h]
  int v9; // [esp+4h] [ebp-14h]
  _DWORD v10[3]; // [esp+Ch] [ebp-Ch] BYREF

  KillTooltipTimer(v7);
  if ( (*(_BYTE *)(*(_DWORD *)(*this + 20) + 23) & 0x10) != 0 )
  {
    v10[2] = 0;
    xxxSetWindowPosAndBand(0, 0, 0, 0, 151, 1);
    v3 = 0;
    v4 = *(_DWORD *)(*this + 12);
    if ( v4 )
      v3 = *(_DWORD *)(v4 + 52);
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v10[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v10;
    v10[1] = v3;
    HMLockObject(v3);
    xxxSetParentWorker(0, 0, v8, v9);
    ThreadUnlock1();
  }
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  this[8] = 0;
  this[9] = 0;
  result = *(_DWORD *)(*this + 12);
  *(_DWORD *)(result + 24) &= 0xFFFFFCFF;
  return result;
}
