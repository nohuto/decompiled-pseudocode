/*
 * XREFs of wistd::__function::__func__lambda_68f86ad173d8de345762c5e83ec0ffce__void___cdecl(void)_::operator() @ 0x180097460
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_8c9079aa2485ab0718fabcb8e444aaab___ @ 0x180096D4C (CreationThreadDispatcher--RunAsync__lambda_8c9079aa2485ab0718fabcb8e444aaab___.c)
 */

void __fastcall wistd::__function::__func__lambda_68f86ad173d8de345762c5e83ec0ffce__void___cdecl_void__::operator()(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CreationThreadDispatcher::RunAsync__lambda_8c9079aa2485ab0718fabcb8e444aaab___(*(_QWORD *)(*(_QWORD *)(a1 + 8)
                                                                                                + 272LL));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x18A,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v1);
}
