/*
 * XREFs of ?InitializePosition@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1801A6A90
 * Callers:
 *     <none>
 * Callees:
 *     ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1801A5A20 (-ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@P.c)
 */

__int64 __fastcall FullScreenPositioner::InitializePosition(
        FullScreenPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4,
        struct IApplicationView *a5)
{
  __int64 *v5; // rcx
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = (__int64 *)((char *)this - 128);
  try
  {
    FullScreenPositioner::ControlGainedHelper(v5, a2, 11, a4, (__int64)a5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1EE,
                           (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
                           v6);
  }
  return result;
}
