/*
 * XREFs of ?SetAppTitlebarConfiguration@CFrameApplicationPresentation@@UEAAJAEBUAppTitlebarConfiguration@@@Z @ 0x18018A240
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetAppTitlebarConfiguration(
        CFrameApplicationPresentation *this,
        const struct AppTitlebarConfiguration *a2)
{
  int v2; // eax
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_WORD *)this + 292) = *(_WORD *)a2;
  if ( *((_QWORD *)this + 72) )
  {
    v2 = (*(__int64 (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 168LL))(this);
    if ( v2 < 0 )
    {
      try
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1509LL,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
          (const char *)(unsigned int)v2);
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x5E9,
                               (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
                               v3);
      }
    }
  }
  return 0LL;
}
