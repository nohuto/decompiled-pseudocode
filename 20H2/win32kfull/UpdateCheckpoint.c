/*
 * XREFs of UpdateCheckpoint @ 0x1C003A968
 * Callers:
 *     _GetWindowPlacement @ 0x1C003A648 (_GetWindowPlacement.c)
 *     xxxSetWindowPlacement @ 0x1C0112068 (xxxSetWindowPlacement.c)
 *     WPUpdateCheckPointSettings @ 0x1C01125B4 (WPUpdateCheckPointSettings.c)
 *     xxxSetInternalWindowPos @ 0x1C0208ED8 (xxxSetInternalWindowPos.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C020CA90 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     CkptRestore @ 0x1C003A9C0 (CkptRestore.c)
 *     GetRect @ 0x1C005E0AC (GetRect.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall UpdateCheckpoint(__int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  GetRect(a1, &v3, 66LL);
  return CkptRestore(a1, &v3);
}
