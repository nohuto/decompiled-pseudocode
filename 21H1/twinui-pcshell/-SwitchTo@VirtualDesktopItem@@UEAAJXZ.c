/*
 * XREFs of ?SwitchTo@VirtualDesktopItem@@UEAAJXZ @ 0x18037EBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualDesktopItem::SwitchTo(VirtualDesktopItem *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 72LL))(
         *((_QWORD *)this + 2),
         *((_QWORD *)this + 3));
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitem.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
