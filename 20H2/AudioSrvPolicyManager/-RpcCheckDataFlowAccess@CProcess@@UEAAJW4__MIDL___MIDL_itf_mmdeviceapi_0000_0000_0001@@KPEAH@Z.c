/*
 * XREFs of ?RpcCheckDataFlowAccess@CProcess@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEAH@Z @ 0x1800149F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003AB0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001A0C0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcess::RpcCheckDataFlowAccess(
        CProcess *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        int a3,
        int *a4)
{
  int v4; // ebx
  __int64 v5; // r14
  __int64 v9; // r15
  HRESULT v10; // eax
  void *v11; // rdx
  unsigned int v12; // r8d
  int ActivationFactory; // eax
  unsigned int v14; // edi
  unsigned __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // [rsp+20h] [rbp-59h]
  __int64 v23; // [rsp+40h] [rbp-39h] BYREF
  __int64 v24; // [rsp+48h] [rbp-31h] BYREF
  int v25; // [rsp+50h] [rbp-29h] BYREF
  int v26; // [rsp+54h] [rbp-25h]
  __int64 v27; // [rsp+58h] [rbp-21h]
  HSTRING string; // [rsp+60h] [rbp-19h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v4 = 0;
  v26 = a3;
  v5 = a2;
  if ( a2 )
  {
    if ( a2 != eCapture )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBA0,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    v9 = 1LL;
  }
  else
  {
    *((_DWORD *)this + 58) = 0;
    v9 = 0LL;
  }
  if ( *((_DWORD *)this + v9 + 58) == -2147023728 )
  {
    v10 = CoInitializeEx(0LL, 0);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(retaddr, v11, v12, (const char *)(unsigned int)v10, v22);
      JUMPOUT(0x180014CDFLL);
    }
    v23 = 0LL;
    if ( WindowsCreateStringReference(
           L"Windows.Internal.CapabilityAccess.CapabilityAccess",
           0x32u,
           &hstringHeader,
           &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    ActivationFactory = RoGetActivationFactory(string, &GUID_518f3880_4e5c_4524_ab03_cd01336b2178, &v23);
    v14 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBB3,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)ActivationFactory);
LABEL_22:
      v19 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      CoUninitialize();
      return v14;
    }
    v15 = -1LL;
    v27 = v23;
    v24 = 0LL;
    do
      ++v15;
    while ( aMicrophone[v15] );
    if ( v15 > 0xFFFFFFFF )
    {
      LODWORD(v15) = -1;
      RaiseException(0xC000000D, 1u, 0, 0LL);
    }
    WindowsCreateStringReference(L"microphone", v15, &hstringHeader, &string);
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING, _QWORD, int, __int64 *))(*(_QWORD *)v27 + 56LL))(
            v27,
            0LL,
            string,
            *((unsigned int *)this + 44),
            v26,
            &v24);
    v14 = v16;
    if ( v16 < 0 )
    {
      v17 = 3003LL;
      goto LABEL_20;
    }
    v25 = 3;
    v16 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 136LL))(v24, &v25);
    v14 = v16;
    if ( v16 < 0 )
    {
      v17 = 3006LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)v16);
      v18 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      goto LABEL_22;
    }
    *((_DWORD *)this + v5 + 58) = v25 != 3 ? 0x887C0076 : 0;
    v20 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v21 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    CoUninitialize();
  }
  if ( a4 )
  {
    LOBYTE(v4) = *((_DWORD *)this + v9 + 58) == 0;
    *a4 = v4;
  }
  return 0LL;
}
