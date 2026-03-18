/*
 * XREFs of ?ArrangementCompleted@NotifyShell@@YA_NPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C023E3AC
 * Callers:
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020E980 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C02105B4 (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C011A320 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0211C24 (WPP_RECORDER_SF_qd.c)
 */

bool __fastcall NotifyShell::ArrangementCompleted(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int v6; // [rsp+30h] [rbp-18h]

  v3 = (int)a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = a2;
    WPP_RECORDER_SF_qd(a1, a2, a3, 0xBu, (__int64)&WPP_df8d2832c9f0384c87c95eb8329d57df_Traceguids, a1, v6);
  }
  return anonymous_namespace_::NotifyShellSimplePayload(a1, 2, v3, 0LL);
}
