/*
 * XREFs of ?OnDisconnected@InputServiceProxy@@UEAAJPEAUIMessageProxy@@@Z @ 0x180103FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037590 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputServiceProxy::OnDisconnected(InputServiceProxy *this, struct IMessageProxy *a2)
{
  int v4; // eax
  void (__fastcall ***v5)(_QWORD, GUID *, struct IMessageProxy **); // rsi
  void (__fastcall *v6)(_QWORD, GUID *, struct IMessageProxy **); // rbx
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IMessageProxy *v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      262LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = (void (__fastcall ***)(_QWORD, GUID *, struct IMessageProxy **))*((_QWORD *)this + 3);
  if ( v5 )
  {
    v10 = 0LL;
    v6 = **v5;
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)&v10);
    v6(v5, &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08, &v10);
    if ( v10 == a2 )
    {
      v7 = *((_QWORD *)this + 3);
      if ( v7 )
      {
        *((_QWORD *)this + 3) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)&v10);
  }
  return 0LL;
}
