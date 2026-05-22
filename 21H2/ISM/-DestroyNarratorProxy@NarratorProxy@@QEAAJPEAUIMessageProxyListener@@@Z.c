/*
 * XREFs of ?DestroyNarratorProxy@NarratorProxy@@QEAAJPEAUIMessageProxyListener@@@Z @ 0x1800B4F5C
 * Callers:
 *     ?DestroyOverriderProxy@KeyboardOverriderDispatcher@@AEAAJXZ @ 0x1800B5048 (-DestroyOverriderProxy@KeyboardOverriderDispatcher@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall NarratorProxy::DestroyNarratorProxy(NarratorProxy *this, struct IMessageProxyListener *a2)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this;
  if ( *(_QWORD *)this )
  {
    v11 = 0LL;
    v5 = **v4;
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v11);
    v6 = v5(v4, &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08, &v11);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 46LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\keyboardove"
                 "rriderdispatcher.cpp",
        (const char *)(unsigned int)v6);
      Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v11);
      return v7;
    }
    v6 = (*(__int64 (__fastcall **)(__int64, struct IMessageProxyListener *))(*(_QWORD *)v11 + 64LL))(v11, a2);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 48LL;
      goto LABEL_6;
    }
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v11);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this);
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v11);
  }
  return 0LL;
}
