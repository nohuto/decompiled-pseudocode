/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0c788ac9b5ff108bd94b69ecedb7d7ca__&_::Run @ 0x1803D9C70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@TabletModePositioner@@AEAAJXZ @ 0x1803D7B74 (-Initialize@TabletModePositioner@@AEAAJXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0c788ac9b5ff108bd94b69ecedb7d7ca____::Run(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = TabletModePositioner::Initialize(*(IUnknown **)(a1 + 16));
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x211,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v1);
}
