/*
 * XREFs of ?CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x14000C430
 * Callers:
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x14000C33C (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140004B00 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000735C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x14000AC7C (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MessageProxyReconnectAdapter::CreateRemoteProxy(MessageProxyReconnectAdapter *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rbx
  PCWSTR StringRawBuffer; // rax
  int v7; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0;
  v11 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, char *, unsigned int *))(**((_QWORD **)this + 7) + 24LL))(
         *((_QWORD *)this + 7),
         (char *)this + 24,
         &v10);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = *((_QWORD *)this + 7);
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v11);
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 11), 0LL);
    v7 = (*(__int64 (__fastcall **)(__int64, PCWSTR, _QWORD, __int64 *))(*(_QWORD *)v5 + 40LL))(
           v5,
           StringRawBuffer,
           v10,
           &v11);
    if ( v7 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 24LL))(*((_QWORD *)this + 6), v11);
      Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 8);
      v2 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v11)(
             v11,
             &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08,
             (char *)this + 64);
      v3 = v2;
      if ( v2 < 0 )
      {
        v4 = 263LL;
        goto LABEL_8;
      }
      v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 56LL))(v11, (char *)this + 8);
      v3 = v2;
      if ( v2 < 0 )
      {
        v4 = 264LL;
        goto LABEL_8;
      }
    }
    v3 = v7;
    goto LABEL_10;
  }
  v4 = 252LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
    (const char *)(unsigned int)v2);
LABEL_10:
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v11);
  return v3;
}
