/*
 * XREFs of ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0222DE0
 * Callers:
 *     xxxDesktopPaintCallback @ 0x1C01271B0 (xxxDesktopPaintCallback.c)
 * Callees:
 *     GreTextInitialized @ 0x1C0024D48 (GreTextInitialized.c)
 *     GreGetTextExtentW @ 0x1C0024ECC (GreGetTextExtentW.c)
 *     GetDPIServerInfo @ 0x1C00332F0 (GetDPIServerInfo.c)
 *     GreSelectFont @ 0x1C00372A0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C00372BC (GreSetBkMode.c)
 *     GreSetTextColor @ 0x1C0092300 (GreSetTextColor.c)
 *     GreExtTextOutWInternal @ 0x1C009A950 (GreExtTextOutWInternal.c)
 */

void __fastcall PaintWatermark(HDC a1, const struct tagRECT *a2)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 DPIServerInfo; // rsi
  __int64 v9; // rcx
  int v10; // ebp
  int v11; // r15d
  __int64 v12; // rcx
  struct tagSIZE v13; // [rsp+90h] [rbp+18h] BYREF

  v13 = 0LL;
  v3 = 0LL;
  if ( GreTextInitialized() && *(_DWORD *)(gpsi + 2164LL) )
  {
    DPIServerInfo = GetDPIServerInfo(v6, v5, gpsi, v7);
    if ( *(_QWORD *)(DPIServerInfo + 8) )
      v3 = GreSelectFont(a1);
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    EnterRenderBlock();
    UserSessionSwitchLeaveCrit(v9);
    EnterSharedCrit(0LL, 1LL);
    EnterSharedRenderCrit();
    v10 = GreSetBkMode(a1, 1);
    v11 = GreSetTextColor(a1, 0xFFFFFF);
    if ( (unsigned int)GreGetTextExtentW(a1, gwszSafeModeStr, gSafeModeStrLen, &v13, 1u) )
    {
      GreExtTextOutWInternal(a1, a2->left, a2->top, 0, 0LL, gwszSafeModeStr, gSafeModeStrLen, 0LL, 0LL, 0);
      GreExtTextOutWInternal(a1, a2->right - v13.cx, a2->top, 0, 0LL, gwszSafeModeStr, gSafeModeStrLen, 0LL, 0LL, 0);
      GreExtTextOutWInternal(
        a1,
        a2->right - v13.cx,
        a2->bottom - *(_DWORD *)(DPIServerInfo + 40),
        0,
        0LL,
        gwszSafeModeStr,
        gSafeModeStrLen,
        0LL,
        0LL,
        0);
      GreExtTextOutWInternal(
        a1,
        a2->left,
        a2->bottom - *(_DWORD *)(DPIServerInfo + 40),
        0,
        0LL,
        gwszSafeModeStr,
        gSafeModeStrLen,
        0LL,
        0LL,
        0);
    }
    GreSetBkMode(a1, v10);
    GreSetTextColor(a1, v11);
    LeaveRenderBlock();
    LeaveRenderCrit();
    UserSessionSwitchLeaveCrit(v12);
    EnterCrit(0LL, 1LL);
    if ( v3 )
      GreSelectFont(a1);
  }
}
