/*
 * XREFs of MsixvcAddGameToGCS @ 0x1800048A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002864 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEB_W@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEB_WUDummy@Details@23@@Z @ 0x180004D20 (--$-0PEB_W@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEB_WUDummy@Details@23@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004DA0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1800062A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180006B70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MsixvcAddGameToGCS(__int64 a1)
{
  HRESULT v2; // eax
  int v3; // edx
  unsigned int v4; // r8d
  int ActivationFactory; // eax
  int v6; // ebx
  __int64 v7; // rbx
  __int64 v8; // rax
  int v9; // eax
  HRESULT v10; // eax
  int v11; // edx
  unsigned int v12; // r8d
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rdx
  PCWSTR StringRawBuffer; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  HSTRING v25; // [rsp+20h] [rbp-39h] BYREF
  __int64 v26; // [rsp+28h] [rbp-31h] BYREF
  __int64 v27; // [rsp+30h] [rbp-29h] BYREF
  __int64 v28; // [rsp+38h] [rbp-21h] BYREF
  __int64 v29; // [rsp+40h] [rbp-19h] BYREF
  __int64 v30; // [rsp+48h] [rbp-11h] BYREF
  __int64 v31; // [rsp+50h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-1h] BYREF
  HSTRING string; // [rsp+70h] [rbp+17h] BYREF
  __int64 v34; // [rsp+78h] [rbp+1Fh]
  _QWORD v35[2]; // [rsp+80h] [rbp+27h] BYREF
  _BYTE v36[16]; // [rsp+90h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v35[0] = a1;
  v27 = 0LL;
  if ( !a1 )
    return 2147942487LL;
  v31 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.Package", 0x28u, &hstringHeader, &string);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2, v3, v4);
    JUMPOUT(0x180004C62LL);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_0450ce77_af0d_40ac_93fd_1e5d48c89419, &v31);
  v6 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v7 = v31;
    v30 = 0LL;
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, v35);
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 176LL))(v7, *(_QWORD *)(v8 + 24), &v30);
    v6 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA2,
        (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
        (const char *)(unsigned int)v9);
LABEL_32:
      v23 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
      goto LABEL_34;
    }
    v26 = 0LL;
    v29 = 0LL;
    string = 0LL;
    v10 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.Application", 0x2Cu, &hstringHeader, &string);
    if ( v10 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10, v11, v12);
      __debugbreak();
    }
    v13 = RoGetActivationFactory(string, &GUID_d81e96f1_a89c_417e_9335_59531026309d, &v29);
    v6 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA6,
        (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
        (const char *)(unsigned int)v13);
LABEL_28:
      v21 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      v22 = v26;
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
      goto LABEL_32;
    }
    v28 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v29 + 144LL))(v29, v30, &v28);
    v6 = v14;
    if ( v14 < 0 )
    {
      v15 = 169LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_26;
    }
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v28 + 48LL))(v28, 0LL, &v26);
    v6 = v14;
    if ( v14 < 0 )
    {
      v15 = 171LL;
      goto LABEL_15;
    }
    v16 = v26;
    WindowsDeleteString(0LL);
    v25 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v16 + 280LL))(v16, &v25);
    v6 = v17;
    if ( v17 >= 0 )
    {
      v17 = CreateGameConfigStoreClient(&v27);
      v6 = v17;
      if ( v17 >= 0 )
      {
        StringRawBuffer = WindowsGetStringRawBuffer(v25, 0LL);
        v6 = (*(__int64 (__fastcall **)(__int64, PCWSTR, _BYTE *))(*(_QWORD *)v27 + 40LL))(v27, StringRawBuffer, v36);
        if ( v6 < 0 )
        {
          v34 = 0LL;
          *(_OWORD *)&hstringHeader.Reserved.Reserved2[4] = 0LL;
          string = (HSTRING)WindowsGetStringRawBuffer(v25, 0LL);
          *(_DWORD *)&hstringHeader.Reserved.Reserved2[20] = 2;
          LODWORD(hstringHeader.Reserved.Reserved1) = 2;
          LODWORD(v34) = v34 & 0xFFFFFFE0 | 0x11;
          v6 = (**(__int64 (__fastcall ***)(__int64, HSTRING_HEADER *, _QWORD *))v27)(v27, &hstringHeader, v35);
        }
        if ( v27 )
          FreeGameConfigStoreClient();
        goto LABEL_25;
      }
      v18 = 178LL;
    }
    else
    {
      v18 = 174LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
      (const char *)(unsigned int)v17);
LABEL_25:
    WindowsDeleteString(v25);
    v25 = 0LL;
LABEL_26:
    v20 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9F,
    (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_34:
  v24 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  return (unsigned int)v6;
}
