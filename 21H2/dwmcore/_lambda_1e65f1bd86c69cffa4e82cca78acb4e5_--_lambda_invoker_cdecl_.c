/*
 * XREFs of _lambda_1e65f1bd86c69cffa4e82cca78acb4e5_::_lambda_invoker_cdecl_ @ 0x180103CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180193D74 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x1801EA384 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 */

__int64 __fastcall lambda_1e65f1bd86c69cffa4e82cca78acb4e5_::_lambda_invoker_cdecl_(CComputeScribbleScheduler *a1)
{
  int v1; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CComputeScribbleScheduler::ProcessScribbleFrame(a1);
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1E5,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v1,
      v3);
  return 0LL;
}
