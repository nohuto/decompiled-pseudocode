/*
 * XREFs of wil::details::lambda_call__lambda_3b6b659d1684d014bd1c24c0e9fd72b4___::_lambda_call__lambda_3b6b659d1684d014bd1c24c0e9fd72b4___ @ 0x180073658
 * Callers:
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x180137090 (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 *     _AtmosCheck::PerformLicenseCheckForEndpoint_::_1_::dtor$0 @ 0x180137218 (_AtmosCheck--PerformLicenseCheckForEndpoint_--_1_--dtor$0.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006DF3C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EndAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x18013590C (-EndAppSvcCall@AtmosCheck@@AEAAJXZ.c)
 */

void __fastcall wil::details::lambda_call__lambda_3b6b659d1684d014bd1c24c0e9fd72b4___::_lambda_call__lambda_3b6b659d1684d014bd1c24c0e9fd72b4___(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    v1 = AtmosCheck::EndAppSvcCall(*(AtmosCheck **)a1);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1486LL,
        (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)v1);
  }
}
