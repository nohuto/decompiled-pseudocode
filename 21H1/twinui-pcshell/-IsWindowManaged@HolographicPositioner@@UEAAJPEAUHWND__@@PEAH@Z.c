/*
 * XREFs of ?IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z @ 0x1800731B0
 * Callers:
 *     ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA?AW4HolographicDetermination@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18002D9FC (-_IsPropertySetContextHolographic@HolographicPositioner@@AEAA-AW4HolographicDetermination@@PEAUI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180084060 (-IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HolographicPositioner::IsWindowManaged(HolographicPositioner *this, HWND a2, int *a3)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx
  struct IApplicationView *v7; // rcx
  int IsViewManaged; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationView *v11; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0;
  v11 = 0LL;
  v5 = *((_QWORD *)this + 11);
  if ( v5
    && (*(int (__fastcall **)(__int64, HWND, struct IApplicationView **))(*(_QWORD *)v5 + 48LL))(v5, a2, &v11) >= 0
    && (IsViewManaged = HolographicPositioner::IsViewManaged(this, v11, a3), v6 = IsViewManaged, IsViewManaged < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x477,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)IsViewManaged);
  }
  else
  {
    v6 = 0;
  }
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v6;
}
