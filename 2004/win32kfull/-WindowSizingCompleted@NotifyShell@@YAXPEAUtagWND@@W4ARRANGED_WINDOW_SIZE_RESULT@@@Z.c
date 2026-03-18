/*
 * XREFs of ?WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@W4ARRANGED_WINDOW_SIZE_RESULT@@@Z @ 0x1C023E5EC
 * Callers:
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C02105B4 (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0026920 (WPP_RECORDER_SF_q.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C011A320 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

_UNKNOWN **__fastcall NotifyShell::WindowSizingCompleted(__int64 *a1, int a2)
{
  char v2; // bl
  int v3; // edx
  int v4; // ecx
  _UNKNOWN **result; // rax

  v2 = (char)a1;
  anonymous_namespace_::NotifyShellSimplePayload(*a1, 8, a2, 0LL);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_q(v4, v3, 1, 15, (__int64)&WPP_df8d2832c9f0384c87c95eb8329d57df_Traceguids, v2);
  }
  return result;
}
