/*
 * XREFs of ?CheckAndEnsureCursorManagerClient@CursorNotificationProcessor@@AEAA_NXZ @ 0x180039E80
 * Callers:
 *     ?ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z @ 0x180039E20 (-ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z.c)
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180036A8C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F94C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CursorNotificationProcessor::CheckAndEnsureCursorManagerClient(
        wil::details **this,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v4; // r8
  bool v5; // zf
  bool v6; // bl
  wil::details *v8; // rdi
  __int64 (__fastcall *v9)(wil::details *, __int64 *); // rbx
  int v10; // eax
  unsigned __int64 v11; // r8
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, const wchar_t *, __int64, wil::details **); // rdi
  int v14; // eax
  unsigned __int64 v15; // r8
  wil::details *v16; // rbx
  int v17; // [rsp+20h] [rbp-28h]
  wil::details *v18; // [rsp+30h] [rbp-18h] BYREF
  wil::details *v19; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v21; // [rsp+58h] [rbp+10h] BYREF

  v21 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    &v18,
    this[1],
    a3);
  v5 = this[2] == 0LL;
  if ( !this[2] )
  {
    if ( (*(unsigned int (__fastcall **)(wil::details *))(*(_QWORD *)*this + 72LL))(*this) )
    {
      v8 = this[1];
      v9 = *(__int64 (__fastcall **)(wil::details *, __int64 *))(*(_QWORD *)v8 + 24LL);
      Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v21);
      v10 = v9(v8, &v21);
      if ( v10 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0xC8,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\curs"
                        "ornotificationprocessor.cpp",
          (const char *)(unsigned int)v10,
          v17);
      v12 = v21;
      v13 = *(__int64 (__fastcall **)(__int64, const wchar_t *, __int64, wil::details **))(*(_QWORD *)v21 + 24LL);
      wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
        &v18,
        v18,
        v11);
      v14 = v13(v12, L"System\\Input\\CursorManagerEndpoint", 1LL, &v19);
      if ( v14 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0xCD,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\curs"
                        "ornotificationprocessor.cpp",
          (const char *)(unsigned int)v14,
          v17);
      v16 = v19;
      v19 = 0LL;
      wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
        &v18,
        0LL,
        v15);
      this[2] = v16;
    }
    v5 = this[2] == 0LL;
  }
  v6 = !v5;
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    &v18,
    0LL,
    v4);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v21);
  return v6;
}
