/*
 * XREFs of ?UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z @ 0x1800164E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x180016550 (-UpdateLayout@CVisual@@UEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateLayout(CTopLevelWindow *this, bool a2)
{
  int updated; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 33) + 96LL))(
              *((_QWORD *)this + 33),
              (char *)this + 120);
  if ( updated < 0 )
  {
    v6 = 4442LL;
  }
  else
  {
    updated = CVisual::UpdateLayout(this, a2);
    if ( updated >= 0 )
      return 0LL;
    v6 = 4444LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)(unsigned int)updated);
  return (unsigned int)updated;
}
