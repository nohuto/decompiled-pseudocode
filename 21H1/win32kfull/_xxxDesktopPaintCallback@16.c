/*
 * XREFs of _xxxDesktopPaintCallback@16 @ 0xE9858
 * Callers:
 *     _NtUserPaintMonitor@12 @ 0x167454 (_NtUserPaintMonitor@12.c)
 * Callees:
 *     _GetStyleWindow@8 @ 0x387E8 (_GetStyleWindow@8.c)
 *     _FillRect@12 @ 0x7226C (_FillRect@12.c)
 *     _GetMonitorWorkRect@4 @ 0xB498E (_GetMonitorWorkRect@4.c)
 *     ?PaintWatermark@@YGXPAUHDC__@@PBUtagRECT@@@Z @ 0x18512F (-PaintWatermark@@YGXPAUHDC__@@PBUtagRECT@@@Z.c)
 */

BOOL __stdcall xxxDesktopPaintCallback(void *a1, int a2, int a3, int a4)
{
  int v4; // ebx
  int v5; // eax
  int v6; // edx
  ULONG_PTR v7; // ecx
  BOOL v8; // edi
  BOOL v10; // eax
  int v11; // eax
  RECT *v12; // [esp+0h] [ebp-38h]
  struct tagRECT *v13; // [esp+4h] [ebp-34h]
  int v14; // [esp+Ch] [ebp-2Ch]
  int v15; // [esp+10h] [ebp-28h]
  _DWORD v16[4]; // [esp+28h] [ebp-10h] BYREF

  v4 = 0;
  v14 = 0;
  v15 = *(_DWORD *)(a4 + 4);
  if ( !v15 )
    v15 = a2;
  GetMonitorWorkRect(a1, v16);
  if ( v15 )
  {
    GreLockVisRgnShared(*(_DWORD *)(_gpDispInfo + 20));
    v5 = LookupDC(v15, 0);
    if ( v5 )
    {
      v6 = *(_DWORD *)(v5 + 8);
      if ( v6 && (*(_WORD *)(*(_DWORD *)(v6 + 20) + 30) & 0x3FFF) == 0x29D && *(PVOID *)(v6 + 12) == grpdeskLogon )
        v14 = 1;
      if ( (*(_DWORD *)(v5 + 32) & 0x4000) != 0 )
        GetStyleWindow(v6, 2848);
    }
    GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  }
  if ( v14 || *(_DWORD *)(_gpsi + 1764) )
  {
    v7 = _gdwInAtomicOperation;
    if ( !_gdwInAtomicOperation || (_gdwExtraInstrumentations & 1) == 0 )
    {
      EnterRenderBlock();
      UserSessionSwitchLeaveCrit();
      EnterSharedCrit(0, 1);
      EnterSharedRenderCrit();
      v8 = FillRect(_ghbrBlack, v12, (HBRUSH)v13) != 0;
      LeaveRenderBlock();
      LeaveRenderCrit();
      UserSessionSwitchLeaveCrit();
      EnterCrit(0, 1);
      if ( v14 )
        return v8;
      goto LABEL_19;
    }
    goto LABEL_25;
  }
  if ( !_gbDesktopLocked )
  {
    v7 = _gdwInAtomicOperation;
    if ( !_gdwInAtomicOperation || (_gdwExtraInstrumentations & 1) == 0 )
    {
      EnterRenderBlock();
      UserSessionSwitchLeaveCrit();
      EnterSharedCrit(0, 1);
      EnterSharedRenderCrit();
      v8 = FillRect(*(HDC *)(_gpsi + 4296), v12, (HBRUSH)v13) != 0;
      LeaveRenderBlock();
      LeaveRenderCrit();
      UserSessionSwitchLeaveCrit();
      EnterCrit(0, 1);
      goto LABEL_19;
    }
LABEL_25:
    KeBugCheckEx(0x160u, v7, 0, 0, 0);
  }
  v8 = 0;
LABEL_19:
  if ( *(_DWORD *)(_gpsi + 1764) )
  {
    v11 = *(_DWORD *)(_gptiCurrent + 248);
    if ( v11 )
      v4 = *(_DWORD *)(*(_DWORD *)(v11 + 4) + 84);
    v10 = v4 == 0;
  }
  else
  {
    v10 = 0;
  }
  if ( v10 )
    PaintWatermark((HDC)v12, v13);
  return v8;
}
