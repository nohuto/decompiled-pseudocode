/*
 * XREFs of UpdateCheckpoint @ 0x1C0026E38
 * Callers:
 *     _GetWindowPlacement @ 0x1C00278AC (_GetWindowPlacement.c)
 *     xxxSetWindowPlacement @ 0x1C0110D38 (xxxSetWindowPlacement.c)
 *     WPUpdateCheckPointSettings @ 0x1C0111284 (WPUpdateCheckPointSettings.c)
 *     xxxSetInternalWindowPos @ 0x1C0209D60 (xxxSetInternalWindowPos.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C020D910 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     CkptRestore @ 0x1C00256D4 (CkptRestore.c)
 *     GetRect @ 0x1C00276C0 (GetRect.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

_DWORD *__fastcall UpdateCheckpoint(__int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  GetRect(a1, &v3, 66LL);
  return CkptRestore(a1, &v3);
}
