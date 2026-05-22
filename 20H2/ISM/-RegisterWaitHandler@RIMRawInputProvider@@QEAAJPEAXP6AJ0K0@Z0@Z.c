/*
 * XREFs of ?RegisterWaitHandler@RIMRawInputProvider@@QEAAJPEAXP6AJ0K0@Z0@Z @ 0x180020AE0
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x1800207B8 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RIMRawInputProvider::RegisterWaitHandler(
        RIMRawInputProvider *this,
        void *a2,
        int (*a3)(void *, unsigned int, void *),
        void *a4)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, void *, __int64 (__fastcall *)(void *, unsigned int, void *), void *))(*(_QWORD *)v4 + 256LL))(
           v4,
           a2,
           RIMDeviceCollection::OnReadCallbackStatic,
           a4);
    if ( v5 >= 0 )
      return 0LL;
    v7 = 259LL;
  }
  else
  {
    v5 = -2147418113;
    v7 = 256LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
    (const char *)(unsigned int)v5,
    v8);
  return (unsigned int)v5;
}
