/*
 * XREFs of ?PostTargetedMessage@CControlCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1801B4EE0
 * Callers:
 *     _lambda_516c6dbf7f56b71054e426a6fa533120_::_lambda_invoker_cdecl_ @ 0x1801B2D10 (_lambda_516c6dbf7f56b71054e426a6fa533120_--_lambda_invoker_cdecl_.c)
 *     wistd::__function::__func__lambda_7b1707b3be53a3c4c7ad702f0f945c58__void___cdecl(void)_::operator() @ 0x1801B38B0 (wistd--__function--__func__lambda_7b1707b3be53a3c4c7ad702f0f945c58__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x180476F0C (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

__int64 __fastcall CControlCenterExperienceManager::PostTargetedMessage(
        struct IUnknown *a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = ExperienceManagerUtils::PostToUIThread(0LL, a1, (void *)a2, a4);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x136,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  return v5;
}
