/*
 * XREFs of ?UpdateLayout@UdwmTopVisual@@UEAAJ_N@Z @ 0x1800BB0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x180016550 (-UpdateLayout@CVisual@@UEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UdwmTopVisual::UpdateLayout(UdwmTopVisual *this, char a2)
{
  int updated; // eax
  unsigned int v5; // ebx
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = CVisual::UpdateLayout(this, 0);
  v5 = updated;
  if ( updated >= 0 )
  {
    if ( a2 )
    {
      v7 = *((_QWORD *)this + 30);
      if ( v7 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, 2LL);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwmdcompvisual.cpp",
      (const char *)(unsigned int)updated);
    return v5;
  }
}
