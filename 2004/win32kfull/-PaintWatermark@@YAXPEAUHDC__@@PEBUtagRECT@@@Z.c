/*
 * XREFs of ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0223C70
 * Callers:
 *     xxxDesktopPaintCallback @ 0x1C0125A80 (xxxDesktopPaintCallback.c)
 * Callees:
 *     GreTextInitialized @ 0x1C000C248 (GreTextInitialized.c)
 *     GreGetTextExtentW @ 0x1C000C3CC (GreGetTextExtentW.c)
 *     GreExtTextOutWInternal @ 0x1C00188EC (GreExtTextOutWInternal.c)
 *     GetDPIServerInfo @ 0x1C0060838 (GetDPIServerInfo.c)
 *     GreSelectFont @ 0x1C0062690 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C00626AC (GreSetBkMode.c)
 *     GreSetTextColor @ 0x1C0063F10 (GreSetTextColor.c)
 */

void __fastcall PaintWatermark(HDC a1, const struct tagRECT *a2)
{
  __int64 v3; // rdi
  __int64 v5; // rcx
  __int64 DPIServerInfo; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // ebp
  int v11; // r15d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct tagSIZE v15; // [rsp+90h] [rbp+18h] BYREF

  v15 = 0LL;
  v3 = 0LL;
  if ( GreTextInitialized() && *(_DWORD *)(gpsi + 2164LL) )
  {
    DPIServerInfo = GetDPIServerInfo(v5);
    if ( *(_QWORD *)(DPIServerInfo + 8) )
      v3 = GreSelectFont(a1);
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    EnterRenderBlock();
    UserSessionSwitchLeaveCrit(v8, v7, v9);
    EnterSharedCrit(0LL, 1LL);
    EnterSharedRenderCrit();
    v10 = GreSetBkMode(a1, 1);
    v11 = GreSetTextColor(a1, 0xFFFFFF);
    if ( (unsigned int)GreGetTextExtentW(a1, gwszSafeModeStr, gSafeModeStrLen, &v15, 1u) )
    {
      GreExtTextOutWInternal(a1, a2->left, a2->top, 0, 0LL, gwszSafeModeStr, gSafeModeStrLen, 0LL, 0LL, 0);
      GreExtTextOutWInternal(a1, a2->right - v15.cx, a2->top, 0, 0LL, gwszSafeModeStr, gSafeModeStrLen, 0LL, 0LL, 0);
      GreExtTextOutWInternal(
        a1,
        a2->right - v15.cx,
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
    UserSessionSwitchLeaveCrit(v13, v12, v14);
    EnterCrit(0LL, 1LL);
    if ( v3 )
      GreSelectFont(a1);
  }
}
