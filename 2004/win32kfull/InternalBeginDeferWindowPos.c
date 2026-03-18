/*
 * XREFs of InternalBeginDeferWindowPos @ 0x1C006A404
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C002AA5C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxMinMaximizeEx @ 0x1C005A998 (xxxMinMaximizeEx.c)
 *     xxxSetWindowRgn @ 0x1C005BAD0 (xxxSetWindowRgn.c)
 *     xxxSetWindowPosAndBand @ 0x1C006A7D4 (xxxSetWindowPosAndBand.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C011A6C0 (xxxProcessSetWindowPosEvent.c)
 *     xxxArrangeIconicWindows @ 0x1C01505E0 (xxxArrangeIconicWindows.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01D862C (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     AllocateCvr @ 0x1C003CF20 (AllocateCvr.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall InternalBeginDeferWindowPos(int a1)
{
  __int64 v2; // rbx
  __int64 v4; // rax

  if ( (gdwPUDFlags & 0x40000000) == 0 && a1 <= *((_DWORD *)&gSMWP + 8) )
  {
    gdwPUDFlags |= 0x40000000u;
    v2 = gSMWP;
    gSMWP = 0LL;
    *((_OWORD *)&gSMWP + 1) = 0LL;
    return v2;
  }
  v4 = Win32AllocPoolWithQuotaZInit(48LL, 2004054869LL);
  v2 = v4;
  if ( v4 )
  {
    if ( (unsigned int)AllocateCvr(v4, a1) )
      return v2;
    Win32FreePool(v2);
  }
  return 0LL;
}
