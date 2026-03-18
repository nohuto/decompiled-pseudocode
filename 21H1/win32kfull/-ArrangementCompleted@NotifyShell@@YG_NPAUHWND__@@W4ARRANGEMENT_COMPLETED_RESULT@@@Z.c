/*
 * XREFs of ?ArrangementCompleted@NotifyShell@@YG_NPAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x19C248
 * Callers:
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YGXPAU_MOVESIZEDATA@@@Z @ 0x17522A (-xxxReportMoveSizeCompletionToShell@@YGXPAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x174C8 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     _WPP_RECORDER_SF_qd@28 @ 0x176592 (_WPP_RECORDER_SF_qd@28.c)
 */

bool __fastcall NotifyShell::ArrangementCompleted(int a1, int a2)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(a1, 11, (int)&WPP_df8d2832c9f0384c87c95eb8329d57df_Traceguids, a1, a2);
  return anonymous_namespace_::NotifyShellSimplePayload(a1, 2, a2, 0);
}
