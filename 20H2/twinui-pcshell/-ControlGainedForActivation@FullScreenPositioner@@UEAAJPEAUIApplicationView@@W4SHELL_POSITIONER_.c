/*
 * XREFs of ?ControlGainedForActivation@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1801A5490
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x1800239E0 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1801A55F0 (-ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@P.c)
 */

__int64 __fastcall FullScreenPositioner::ControlGainedForActivation(
        PositionerPropertySetHelpers *a1,
        __int64 a2,
        unsigned int a3,
        struct IApplicationView *a4)
{
  int DetailsForActivation; // eax
  const char *v8; // r9
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 result; // rax
  struct IUnknown v13; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(a1, a4, &v13, 0LL);
    if ( DetailsForActivation < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        503LL,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)DetailsForActivation);
    if ( ((__int64)v13.lpVtbl & 1) != 0 )
      return 0LL;
    if ( a3 != 3 )
      FullScreenPositioner::ControlGainedHelper((char *)a1 - 128, a2, a3, 0LL, 0LL);
    if ( ((__int64)v13.lpVtbl & 2) == 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
      if ( v9 >= 0 )
        return 0LL;
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x204,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v9);
    }
    v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 224LL))(a2, 1LL);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        519LL,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v10);
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 352LL))(a2);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        520LL,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v11);
    return 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x20D,
                           (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
                           v8);
  }
  return result;
}
