/*
 * XREFs of sub_1800149F0 @ 0x1800149F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_18001A0C0 @ 0x18001A0C0 (sub_18001A0C0.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800149F0(__int64 a1, int a2, int a3, _DWORD *a4)
{
  int v4; // ebx
  __int64 v5; // r14
  __int64 v9; // r15
  HRESULT v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  int ActivationFactory; // eax
  unsigned int v14; // edi
  unsigned __int64 v15; // rdi
  int v16; // eax
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // [rsp+40h] [rbp-39h] BYREF
  __int64 v23; // [rsp+48h] [rbp-31h] BYREF
  int v24; // [rsp+50h] [rbp-29h] BYREF
  int v25; // [rsp+54h] [rbp-25h]
  __int64 v26; // [rsp+58h] [rbp-21h]
  HSTRING string; // [rsp+60h] [rbp-19h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-11h] BYREF
  __int64 retaddr; // [rsp+D8h] [rbp+5Fh]

  v4 = 0;
  v25 = a3;
  v5 = a2;
  if ( a2 )
  {
    if ( a2 != 1 )
    {
      sub_180003AB0(
        retaddr,
        2976,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        -2147024809);
      return 2147942487LL;
    }
    v9 = 1LL;
  }
  else
  {
    *(_DWORD *)(a1 + 232) = 0;
    v9 = 0LL;
  }
  if ( *(_DWORD *)(a1 + 4 * v9 + 232) == -2147023728 )
  {
    v10 = CoInitializeEx(0LL, 0);
    if ( v10 < 0 )
    {
      sub_18001A0C0(retaddr, v11, v12, (unsigned int)v10);
      JUMPOUT(0x180014CDFLL);
    }
    v22 = 0LL;
    if ( WindowsCreateStringReference(
           L"Windows.Internal.CapabilityAccess.CapabilityAccess",
           0x32u,
           &hstringHeader,
           &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    ActivationFactory = RoGetActivationFactory(string, &unk_180043478, &v22);
    v14 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      sub_180003AB0(
        retaddr,
        2995,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        ActivationFactory);
LABEL_22:
      v19 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      CoUninitialize();
      return v14;
    }
    v15 = -1LL;
    v26 = v22;
    v23 = 0LL;
    do
      ++v15;
    while ( aMicrophone[v15] );
    if ( v15 > 0xFFFFFFFF )
    {
      LODWORD(v15) = -1;
      RaiseException(0xC000000D, 1u, 0, 0LL);
    }
    WindowsCreateStringReference(L"microphone", v15, &hstringHeader, &string);
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING, _QWORD, int, __int64 *))(*(_QWORD *)v26 + 56LL))(
            v26,
            0LL,
            string,
            *(unsigned int *)(a1 + 176),
            v25,
            &v23);
    v14 = v16;
    if ( v16 < 0 )
    {
      v17 = 3003;
      goto LABEL_20;
    }
    v24 = 3;
    v16 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 136LL))(v23, &v24);
    v14 = v16;
    if ( v16 < 0 )
    {
      v17 = 3006;
LABEL_20:
      sub_180003AB0(
        retaddr,
        v17,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        v16);
      v18 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      goto LABEL_22;
    }
    *(_DWORD *)(a1 + 4 * v5 + 232) = v24 != 3 ? 0x887C0076 : 0;
    v20 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v21 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    CoUninitialize();
  }
  if ( a4 )
  {
    LOBYTE(v4) = *(_DWORD *)(a1 + 4 * v9 + 232) == 0;
    *a4 = v4;
  }
  return 0LL;
}
