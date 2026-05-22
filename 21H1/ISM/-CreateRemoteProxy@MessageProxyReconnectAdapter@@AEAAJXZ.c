/*
 * XREFs of ?CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x18002E21C
 * Callers:
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x18002E158 (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037590 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MessageProxyReconnectAdapter::CreateRemoteProxy(MessageProxyReconnectAdapter *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rbx
  PCWSTR StringRawBuffer; // rax
  int v6; // esi
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0;
  v12 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, char *, unsigned int *))(**((_QWORD **)this + 7) + 24LL))(
         *((_QWORD *)this + 7),
         (char *)this + 24,
         &v11);
  v3 = v2;
  if ( v2 < 0 )
  {
    v8 = 252LL;
    goto LABEL_10;
  }
  v4 = *((_QWORD *)this + 7);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v12);
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 11), 0LL);
  v6 = (*(__int64 (__fastcall **)(__int64, PCWSTR, _QWORD, __int64 *))(*(_QWORD *)v4 + 40LL))(
         v4,
         StringRawBuffer,
         v11,
         &v12);
  if ( v6 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 24LL))(*((_QWORD *)this + 6), v12);
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((char *)this + 64);
    v2 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v12)(
           v12,
           &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08,
           (char *)this + 64);
    v3 = v2;
    if ( v2 < 0 )
    {
      v8 = 263LL;
    }
    else
    {
      v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v12 + 56LL))(v12, (char *)this + 8);
      v3 = v2;
      if ( v2 >= 0 )
        goto LABEL_3;
      v8 = 264LL;
    }
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
      (const char *)(unsigned int)v2,
      v9);
    goto LABEL_4;
  }
LABEL_3:
  v3 = v6;
LABEL_4:
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v12);
  return v3;
}
