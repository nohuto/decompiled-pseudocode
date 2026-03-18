/*
 * XREFs of ?WindowSizingCompleted@NotifyShell@@YGXPAUtagWND@@W4ARRANGED_WINDOW_SIZE_RESULT@@@Z @ 0x19C35B
 * Callers:
 *     ?xxxReportMoveSizeCompletionToShell@@YGXPAU_MOVESIZEDATA@@@Z @ 0x17522A (-xxxReportMoveSizeCompletionToShell@@YGXPAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x174C8 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 */

char __fastcall NotifyShell::WindowSizingCompleted(int *a1, int a2)
{
  char v2; // si
  char result; // al
  int v4; // edx
  int v5; // ecx

  v2 = (char)a1;
  result = anonymous_namespace_::NotifyShellSimplePayload(*a1, 8, a2, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    return WPP_RECORDER_SF_q(v5, v4, 1u, 15, (int)&WPP_df8d2832c9f0384c87c95eb8329d57df_Traceguids, v2);
  }
  return result;
}
