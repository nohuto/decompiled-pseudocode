/*
 * XREFs of _anonymous_namespace_::WindowSizingUpdate @ 0x1C023E648
 * Callers:
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C00AFF48 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0026920 (WPP_RECORDER_SF_q.c)
 *     _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1C023E410 (_anonymous_namespace_--NotifyShellWindowPosChangedCommon.c)
 */

_UNKNOWN **__fastcall anonymous_namespace_::WindowSizingUpdate(unsigned __int64 *a1)
{
  char v1; // bl
  int v2; // edx
  int v3; // ecx
  _UNKNOWN **result; // rax

  v1 = (char)a1;
  anonymous_namespace_::NotifyShellWindowPosChangedCommon(a1, 0, 1, 7);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_q(v3, v2, 1, 10, (__int64)&WPP_df8d2832c9f0384c87c95eb8329d57df_Traceguids, v1);
  }
  return result;
}
