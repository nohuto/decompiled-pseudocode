/*
 * XREFs of _lambda_aa2cf3828d9244bdbf46fd61e18b6e20_::_lambda_invoker_cdecl_ @ 0x1800AD250
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$StartDidntOpenIn2Seconds@I@CommonStartTelemetry@@SAX$$QEAI@Z @ 0x180332D14 (--$StartDidntOpenIn2Seconds@I@CommonStartTelemetry@@SAX$$QEAI@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x180476F0C (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

void __fastcall lambda_aa2cf3828d9244bdbf46fd61e18b6e20_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        struct IUnknown *Context,
        PTP_TIMER Timer)
{
  __int64 v4; // r9
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int lpVtbl; // [rsp+38h] [rbp+10h] BYREF

  lpVtbl = (int)Context[8].lpVtbl;
  CommonStartTelemetry::StartDidntOpenIn2Seconds<unsigned int>(&lpVtbl, Context, Timer);
  v5 = ExperienceManagerUtils::PostToUIThread(0LL, Context, (void *)7, v4);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x441,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v5);
}
