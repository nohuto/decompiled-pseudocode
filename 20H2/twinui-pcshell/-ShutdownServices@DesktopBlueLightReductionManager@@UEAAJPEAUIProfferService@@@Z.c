/*
 * XREFs of ?ShutdownServices@DesktopBlueLightReductionManager@@UEAAJPEAUIProfferService@@@Z @ 0x180199AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DesktopBlueLightReductionManager::ShutdownServices(
        DesktopBlueLightReductionManager *this,
        struct IProfferService *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    v4 = *((_QWORD *)this + 16);
    if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          210LL,
          (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v5);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD6,
                           (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                           a4);
  }
  return result;
}
