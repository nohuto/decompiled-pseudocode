/*
 * XREFs of sub_18005F8F8 @ 0x18005F8F8
 * Callers:
 *     sub_18005F1D4 @ 0x18005F1D4 (sub_18005F1D4.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005FD0C @ 0x18005FD0C (sub_18005FD0C.c)
 *     sub_18005FD7C @ 0x18005FD7C (sub_18005FD7C.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006E450 @ 0x18006E450 (sub_18006E450.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005F8F8(__int64 a1)
{
  int ActivationFactory; // eax
  unsigned int v3; // ebx
  __int64 v4; // rbx
  int v5; // eax
  PCWSTR StringRawBuffer; // rax
  void *v7; // rcx
  __int64 v8; // rbx
  int v9; // eax
  PCWSTR v10; // rax
  void *v11; // rcx
  __int64 v12; // rbx
  int v13; // eax
  PCWSTR v14; // rax
  void *v15; // rcx
  void **v16; // rax
  void **v17; // rsi
  __int64 v18; // rbx
  int v19; // eax
  PCWSTR v20; // rax
  void *v21; // rcx
  __int64 v22; // rbx
  int v23; // eax
  PCWSTR v24; // rax
  void *v25; // rcx
  int v27; // r9d
  int v28; // edx
  LPVOID pv; // [rsp+20h] [rbp-40h] BYREF
  HSTRING v30; // [rsp+28h] [rbp-38h] BYREF
  __int64 v31; // [rsp+30h] [rbp-30h] BYREF
  HSTRING string; // [rsp+38h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+18h]

  v31 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Media.Audio.SpatialAudioFormatSubtype", 0x2Du, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &unk_18015C860, &v31);
  v3 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    sub_18004BD84(
      (int)retaddr,
      78,
      (int)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      ActivationFactory);
    goto LABEL_42;
  }
  v30 = 0LL;
  v4 = v31;
  sub_18005FD0C(&v30, 0LL);
  v5 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v4 + 64LL))(v4, &v30);
  v3 = v5;
  if ( v5 < 0 )
  {
    v27 = v5;
    v28 = 83;
    goto LABEL_61;
  }
  StringRawBuffer = WindowsGetStringRawBuffer(v30, 0LL);
  sub_18005FD7C(&pv, StringRawBuffer, -1LL);
  if ( (LPVOID *)(a1 + 40) == &pv )
  {
    v7 = pv;
  }
  else
  {
    sub_18002A504((void **)(a1 + 40), pv);
    v7 = 0LL;
  }
  if ( v7 )
    CoTaskMemFree(v7);
  if ( !*(_QWORD *)(a1 + 40) )
  {
    v28 = 85;
LABEL_60:
    v3 = -2147024882;
    v27 = -2147024882;
    goto LABEL_61;
  }
  *(_BYTE *)(a1 + 33) = 1;
  sub_18005FD0C(&v30, 0LL);
  v8 = v31;
  sub_18005FD0C(&v30, 0LL);
  v9 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v8 + 72LL))(v8, &v30);
  v3 = v9;
  if ( v9 < 0 )
  {
    v27 = v9;
    v28 = 90;
    goto LABEL_61;
  }
  v10 = WindowsGetStringRawBuffer(v30, 0LL);
  sub_18005FD7C(&pv, v10, -1LL);
  if ( (LPVOID *)(a1 + 104) == &pv )
  {
    v11 = pv;
  }
  else
  {
    sub_18002A504((void **)(a1 + 104), pv);
    v11 = 0LL;
  }
  if ( v11 )
    CoTaskMemFree(v11);
  if ( !*(_QWORD *)(a1 + 104) )
  {
    v28 = 92;
    goto LABEL_60;
  }
  *(_BYTE *)(a1 + 97) = 1;
  sub_18005FD0C(&v30, 0LL);
  v12 = v31;
  sub_18005FD0C(&v30, 0LL);
  v13 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v12 + 56LL))(v12, &v30);
  v3 = v13;
  if ( v13 < 0 )
  {
    v27 = v13;
    v28 = 97;
    goto LABEL_61;
  }
  v14 = WindowsGetStringRawBuffer(v30, 0LL);
  sub_18005FD7C(&pv, v14, -1LL);
  if ( (LPVOID *)(a1 + 72) == &pv )
  {
    v15 = pv;
  }
  else
  {
    sub_18002A504((void **)(a1 + 72), pv);
    v15 = 0LL;
  }
  if ( v15 )
    CoTaskMemFree(v15);
  if ( !*(_QWORD *)(a1 + 72) )
  {
    v28 = 99;
    goto LABEL_60;
  }
  *(_BYTE *)(a1 + 65) = 1;
  sub_18005FD0C(&v30, 0LL);
  v16 = (void **)sub_18006E450(&pv, L"{8f3bbd02-6bbe-4b60-9f8b-406837ce466f}", -1LL);
  v17 = v16;
  if ( (void **)(a1 + 8) != v16 )
  {
    sub_18002A504((void **)(a1 + 8), *v16);
    *v17 = 0LL;
  }
  if ( pv )
    CoTaskMemFree(pv);
  if ( !*(_QWORD *)(a1 + 8) )
  {
    v28 = 106;
    goto LABEL_60;
  }
  *(_BYTE *)(a1 + 1) = 1;
  v18 = v31;
  sub_18005FD0C(&v30, 0LL);
  v19 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v18 + 80LL))(v18, &v30);
  v3 = v19;
  if ( v19 < 0 )
  {
    v27 = v19;
    v28 = 110;
    goto LABEL_61;
  }
  v20 = WindowsGetStringRawBuffer(v30, 0LL);
  sub_18005FD7C(&pv, v20, -1LL);
  if ( (LPVOID *)(a1 + 136) == &pv )
  {
    v21 = pv;
  }
  else
  {
    sub_18002A504((void **)(a1 + 136), pv);
    v21 = 0LL;
  }
  if ( v21 )
    CoTaskMemFree(v21);
  if ( !*(_QWORD *)(a1 + 136) )
  {
    v28 = 112;
    goto LABEL_60;
  }
  *(_BYTE *)(a1 + 129) = 1;
  sub_18005FD0C(&v30, 0LL);
  v22 = v31;
  sub_18005FD0C(&v30, 0LL);
  v23 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v22 + 88LL))(v22, &v30);
  v3 = v23;
  if ( v23 >= 0 )
  {
    v24 = WindowsGetStringRawBuffer(v30, 0LL);
    sub_18005FD7C(&pv, v24, -1LL);
    if ( (LPVOID *)(a1 + 168) == &pv )
    {
      v25 = pv;
    }
    else
    {
      sub_18002A504((void **)(a1 + 168), pv);
      v25 = 0LL;
    }
    if ( v25 )
      CoTaskMemFree(v25);
    if ( *(_QWORD *)(a1 + 168) )
    {
      *(_BYTE *)(a1 + 161) = 1;
      v3 = 0;
      goto LABEL_40;
    }
    v28 = 119;
    goto LABEL_60;
  }
  v27 = v23;
  v28 = 117;
LABEL_61:
  sub_18004BD84((int)retaddr, v28, (int)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h", v27);
LABEL_40:
  if ( v30 )
    WindowsDeleteString(v30);
LABEL_42:
  sub_18000F708(&v31);
  return v3;
}
