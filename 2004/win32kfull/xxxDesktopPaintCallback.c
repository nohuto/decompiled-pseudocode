/*
 * XREFs of xxxDesktopPaintCallback @ 0x1C0125A80
 * Callers:
 *     NtUserPaintMonitor @ 0x1C02009E0 (NtUserPaintMonitor.c)
 * Callees:
 *     GetMonitorWorkRect @ 0x1C002A6F0 (GetMonitorWorkRect.c)
 *     FillRect @ 0x1C0062024 (FillRect.c)
 *     GetStyleWindow @ 0x1C00707C0 (GetStyleWindow.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0223C70 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 */

_BOOL8 __fastcall xxxDesktopPaintCallback(__int64 a1, HDC a2, const RECT *a3, __int64 a4)
{
  int v5; // edi
  __int64 StyleWindow; // rbx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  BOOL v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  BOOL v18; // eax
  __int64 v19; // rax
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  struct tagRECT v31; // [rsp+30h] [rbp-28h] BYREF
  __int128 v32; // [rsp+40h] [rbp-18h] BYREF

  v5 = 0;
  StyleWindow = 0LL;
  if ( *(_QWORD *)(a4 + 8) )
    a2 = *(HDC *)(a4 + 8);
  v31 = (struct tagRECT)*GetMonitorWorkRect(&v32, a1);
  if ( a2 )
  {
    GreLockVisRgnShared(*(_QWORD *)(gpDispInfo + 40LL));
    v8 = LookupDC(a2, 0LL);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 16);
      if ( v9 && (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x3FFF) == 0x29D && *(PVOID *)(v9 + 24) == grpdeskLogon )
        v5 = 1;
      if ( (*(_DWORD *)(v8 + 64) & 0x4000) != 0 )
        StyleWindow = GetStyleWindow(v9, 2848);
    }
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    if ( StyleWindow )
    {
      v19 = *(_QWORD *)(StyleWindow + 40);
      v20 = *(_DWORD *)(v19 + 88);
      v21 = -*(_DWORD *)(v19 + 92);
      v31.bottom -= *(_DWORD *)(v19 + 92);
      v22 = -v20;
      v31.left += v22;
      v31.right += v22;
      v31.top += v21;
    }
  }
  if ( !*(_DWORD *)(gpsi + 2164LL) && !v5 )
  {
    if ( gbDesktopLocked )
    {
      v13 = 0;
    }
    else
    {
      if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      EnterRenderBlock();
      UserSessionSwitchLeaveCrit(v24, v23, v25);
      EnterSharedCrit(0LL, 1LL);
      EnterSharedRenderCrit();
      v13 = FillRect(a2, a3, *(HBRUSH *)(gpsi + 4704LL)) != 0;
      LeaveRenderBlock();
      LeaveRenderCrit();
      UserSessionSwitchLeaveCrit(v27, v26, v28);
      EnterCrit(0LL, 1LL);
    }
    goto LABEL_20;
  }
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  EnterRenderBlock();
  UserSessionSwitchLeaveCrit(v11, v10, v12);
  EnterSharedCrit(0LL, 1LL);
  EnterSharedRenderCrit();
  v13 = FillRect(a2, a3, ghbrBlack) != 0;
  LeaveRenderBlock();
  LeaveRenderCrit();
  UserSessionSwitchLeaveCrit(v15, v14, v16);
  EnterCrit(0LL, 1LL);
  if ( !v5 )
  {
LABEL_20:
    if ( *(_DWORD *)(gpsi + 2164LL) )
    {
      v29 = *(_QWORD *)(gptiCurrent + 448LL);
      if ( v29 )
        v30 = *(_QWORD *)(*(_QWORD *)(v29 + 8) + 168LL);
      else
        v30 = 0LL;
      v18 = v30 == 0;
    }
    else
    {
      v18 = 0;
    }
    if ( v18 )
      PaintWatermark(a2, &v31);
  }
  return v13;
}
