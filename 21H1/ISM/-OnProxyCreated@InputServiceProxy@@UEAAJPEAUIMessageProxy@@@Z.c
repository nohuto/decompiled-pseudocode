/*
 * XREFs of ?OnProxyCreated@InputServiceProxy@@UEAAJPEAUIMessageProxy@@@Z @ 0x18002DBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputServiceProxy::OnProxyCreated(InputServiceProxy *this, struct IMessageProxy *a2)
{
  _QWORD *v2; // rbx
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(struct IMessageProxy *, GUID *, _QWORD *); // rbp
  int v7; // eax
  int v8; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 24);
  v5 = *((_QWORD *)this + 3);
  v6 = **(__int64 (__fastcall ***)(struct IMessageProxy *, GUID *, _QWORD *))a2;
  if ( v5 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v7 = v6(a2, &GUID_b30e303e_7340_4446_bd7b_c37fdee42abc, v2);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xF0,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
      (const char *)(unsigned int)v7,
      v10);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2));
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xF2,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
      (const char *)(unsigned int)v8,
      v10);
    JUMPOUT(0x18005F282LL);
  }
  return 0LL;
}
