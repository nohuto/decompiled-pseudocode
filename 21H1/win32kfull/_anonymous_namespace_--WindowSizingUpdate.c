/*
 * XREFs of _anonymous_namespace_::WindowSizingUpdate @ 0x19C38C
 * Callers:
 *     ?PositioningChanged@NotifyShell@@YGXPAUtagWND@@ABUtagCVR@@@Z @ 0x2624C (-PositioningChanged@NotifyShell@@YGXPAUtagWND@@ABUtagCVR@@@Z.c)
 * Callees:
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x19C27B (_anonymous_namespace_--NotifyShellWindowPosChangedCommon.c)
 */

int __thiscall anonymous_namespace_::WindowSizingUpdate(_DWORD *this)
{
  char v1; // si
  int result; // eax
  int v3; // edx
  int v4; // ecx

  v1 = (char)this;
  result = anonymous_namespace_::NotifyShellWindowPosChangedCommon(this, 0, 1, 7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    return WPP_RECORDER_SF_q(v4, v3, 1u, 10, (int)&WPP_df8d2832c9f0384c87c95eb8329d57df_Traceguids, v1);
  }
  return result;
}
