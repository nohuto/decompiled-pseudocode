/*
 * XREFs of ??1EdgyConnection@@UEAA@XZ @ 0x18017749C
 * Callers:
 *     ??_EEdgyConnection@@UEAAPEAXI@Z @ 0x180177590 (--_EEdgyConnection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180036A8C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F3D4C (-InternalRelease@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@VEdge@@@std@@@std@@YAXPEAVEdge@@0AEAV?$allocator@VEdge@@@0@@Z @ 0x180177410 (--$_Destroy_range@V-$allocator@VEdge@@@std@@@std@@YAXPEAVEdge@@0AEAV-$allocator@VEdge@@@0@@Z.c)
 */

void __fastcall EdgyConnection::~EdgyConnection(EdgyConnection *this)
{
  int v2; // eax
  void *v3; // rdi
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &EdgyConnection::`vftable';
  if ( *((_QWORD *)this + 5) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD))(**((_QWORD **)this + 3) + 48LL))(
           *((_QWORD *)this + 3),
           L"EdgyConfigurationEndpoint",
           0LL);
    if ( v2 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        37LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
        (const char *)(unsigned int)v2);
      JUMPOUT(0x18017757DLL);
    }
  }
  v3 = (void *)*((_QWORD *)this + 9);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<Edge>>(*((__int64 **)this + 9), *((__int64 **)this + 10));
    std::_Deallocate<16,0>(
      v3,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 11) - (_QWORD)v3) & 0xFFFFFFFFFFFFFF80uLL));
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease((__int64 *)this + 8);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 6,
    0LL,
    v4);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 4,
    0LL,
    v5);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 2);
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
