/*
 * XREFs of _lambda_665c64ac43c225ea8e9358a4e95b62dc_::_lambda_invoker_cdecl_ @ 0x1800AD180
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$StartDidntOpenInSpecifiedTime@KI@CommonStartTelemetry@@SAX$$QEAK$$QEAI@Z @ 0x180332F7C (--$StartDidntOpenInSpecifiedTime@KI@CommonStartTelemetry@@SAX$$QEAK$$QEAI@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x180476F0C (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

void __fastcall lambda_665c64ac43c225ea8e9358a4e95b62dc_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        struct IUnknown *Context,
        PTP_TIMER Timer)
{
  __int64 v4; // r9
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int lpVtbl; // [rsp+38h] [rbp+10h] BYREF
  int v8; // [rsp+48h] [rbp+20h] BYREF

  lpVtbl = (int)Context[8].lpVtbl;
  v8 = 1000 * HIDWORD(Context[8].lpVtbl);
  CommonStartTelemetry::StartDidntOpenInSpecifiedTime<unsigned long,unsigned int>(&v8, &lpVtbl, Timer);
  v5 = ExperienceManagerUtils::PostToUIThread(0LL, Context, (void *)2, v4);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x456,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v5);
}
