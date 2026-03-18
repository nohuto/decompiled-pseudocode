/*
 * XREFs of GetStyleWindow @ 0x1C00707C0
 * Callers:
 *     UnredirectDCEs @ 0x1C0020AD8 (UnredirectDCEs.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C0020CE0 (UserGetRedirectedWindowOrigin.c)
 *     zzzLockWindowUpdate2 @ 0x1C0031334 (zzzLockWindowUpdate2.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C003B6EC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     UnsetLayeredWindow @ 0x1C004EA28 (UnsetLayeredWindow.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006D280 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006FA2C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxInternalInvalidate @ 0x1C00717E0 (xxxInternalInvalidate.c)
 *     CalcVisRgn @ 0x1C0072BA0 (CalcVisRgn.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C008CD2C (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxSetWindowStyle @ 0x1C009C710 (xxxSetWindowStyle.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     UpdateRedirectedDCE @ 0x1C00E8550 (UpdateRedirectedDCE.c)
 *     SpbCheckDce @ 0x1C00E8B30 (SpbCheckDce.c)
 *     xxxDesktopPaintCallback @ 0x1C0125A80 (xxxDesktopPaintCallback.c)
 *     xxxPrintWindow @ 0x1C01E8730 (xxxPrintWindow.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C01FDCB0 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserHwndSetRedirectionInfo @ 0x1C01FE200 (NtUserHwndSetRedirectionInfo.c)
 *     xxxRedrawHungWindow @ 0x1C0242114 (xxxRedrawHungWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetStyleWindow(__int64 a1, int a2)
{
  __int64 v2; // r8

  v2 = a1;
  if ( !a1 )
    return v2;
  do
  {
    if ( ((unsigned __int8)a2 & *(_BYTE *)(*(_QWORD *)(v2 + 40) + BYTE1(a2) + 16LL)) != 0 )
      break;
    v2 = *(_QWORD *)(v2 + 104);
  }
  while ( v2 );
  if ( v2 && (*(_WORD *)(*(_QWORD *)(v2 + 40) + 42LL) & 0x3FFF) == 0x29D && v2 != a1 && (a2 == 2848 || a2 == 2568) )
    return 0LL;
  else
    return v2;
}
