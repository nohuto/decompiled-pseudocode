/*
 * XREFs of wistd::__function::__func__lambda_1328f868b9d905457ec4f577c01808e0__void___cdecl(void)_::operator() @ 0x1800960B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_7e6963f912875587faeb037360c0fdaa___ @ 0x18009591C (CreationThreadDispatcher--RunAsync__lambda_7e6963f912875587faeb037360c0fdaa___.c)
 */

void __fastcall wistd::__function::__func__lambda_1328f868b9d905457ec4f577c01808e0__void___cdecl_void__::operator()(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CreationThreadDispatcher::RunAsync__lambda_7e6963f912875587faeb037360c0fdaa___(*(_QWORD *)(*(_QWORD *)(a1 + 8)
                                                                                                + 272LL));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x171,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v1);
}
