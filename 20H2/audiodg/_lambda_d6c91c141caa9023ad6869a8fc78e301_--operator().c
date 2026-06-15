/*
 * XREFs of _lambda_d6c91c141caa9023ad6869a8fc78e301_::operator() @ 0x1400464EC
 * Callers:
 *     wil::details::lambda_call__lambda_d6c91c141caa9023ad6869a8fc78e301___::_lambda_call__lambda_d6c91c141caa9023ad6869a8fc78e301___ @ 0x1400464CC (wil--details--lambda_call__lambda_d6c91c141caa9023ad6869a8fc78e301___--_lambda_call__lambda_d6c9.c)
 * Callees:
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x140009E30 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140044638 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall lambda_d6c91c141caa9023ad6869a8fc78e301_::operator()(_QWORD *a1)
{
  unsigned int v1; // edx
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(_DWORD *)(*(_QWORD *)*a1 + 4LL);
  if ( v1 )
  {
    v2 = TrackSystemEffectBehavior(*(_QWORD *)(a1[1] + 192LL), v1, 0, 0);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        3031LL,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (const char *)(unsigned int)v2);
  }
}
