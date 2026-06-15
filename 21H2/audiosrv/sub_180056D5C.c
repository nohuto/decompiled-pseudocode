/*
 * XREFs of sub_180056D5C @ 0x180056D5C
 * Callers:
 *     sub_180056CA8 @ 0x180056CA8 (sub_180056CA8.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800571F8 @ 0x1800571F8 (sub_1800571F8.c)
 *     sub_180057384 @ 0x180057384 (sub_180057384.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180056D5C(GUID *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // ebx
  const GUID *v12; // r14
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int i; // esi
  __int64 v16; // rax
  _WORD *v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // r8
  GUID *v20; // rdi
  int v22; // eax
  unsigned int v23; // ebx
  int v24; // eax
  unsigned int v25; // ebx
  __int64 v26; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v27; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v28; // [rsp+40h] [rbp-D8h] BYREF
  PROPVARIANT *v29; // [rsp+48h] [rbp-D0h] BYREF
  int v30; // [rsp+50h] [rbp-C8h]
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+68h] [rbp-B0h]
  OLECHAR sz[64]; // [rsp+70h] [rbp-A8h] BYREF
  _UNKNOWN *retaddr; // [rsp+118h] [rbp+0h]

  v2 = sub_180057384(a1, &v27);
  v3 = v2;
  if ( v2 < 0 )
  {
    sub_18004BD84(
      (int)retaddr,
      114,
      (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
      v2);
    return v3;
  }
  v4 = *(_QWORD *)a1[1].Data4;
  if ( (_DWORD)v27 )
  {
    v26 = 0LL;
    v22 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v4 + 32LL))(v4, 2LL, &v26);
    v23 = v22;
    if ( v22 < 0 )
    {
      sub_18004BD84(
        (int)retaddr,
        150,
        (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
        v22);
      sub_18000F708(&v26);
      return v23;
    }
    *(_OWORD *)pvar = 0LL;
    v32 = 0LL;
    v29 = pvar;
    LOBYTE(v30) = 1;
    v24 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v26 + 40LL))(v26, &unk_180172B80, pvar);
    v25 = v24;
    if ( v24 < 0 )
    {
      sub_18004BD84(
        (int)retaddr,
        156,
        (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
        v24);
      PropVariantClear(pvar);
      sub_18000F708(&v26);
      return v25;
    }
    if ( LOWORD(pvar[0]) != 31 )
    {
      sub_18004BD84(
        (int)retaddr,
        157,
        (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
        -2147024809);
      PropVariantClear(pvar);
      sub_18000F708(&v26);
      return 2147942487LL;
    }
    v12 = a1 + 6;
    IIDFromString((LPCOLESTR)pvar[1], a1 + 6);
    PropVariantClear(pvar);
    sub_18000F708(&v26);
  }
  else
  {
    v27 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, void *, __int64, _QWORD, __int64 *))(*(_QWORD *)v4 + 24LL))(
           v4,
           &unk_18015B078,
           23LL,
           0LL,
           &v27);
    v6 = v5;
    if ( v5 < 0 )
    {
      sub_18004BD84(
        (int)retaddr,
        124,
        (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
        v5);
      sub_18000F708(&v27);
      return v6;
    }
    v28 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v27 + 32LL))(v27, 0LL, &v28);
    v8 = v7;
    if ( v7 < 0 )
    {
      sub_18004BD84(
        (int)retaddr,
        129,
        (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
        v7);
      sub_18000F708(&v28);
      sub_18000F708(&v27);
      return v8;
    }
    v26 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 64LL))(v28, &v26);
    if ( v9 < 0 )
    {
      sub_18000F708(&v26);
      sub_18000F708(&v28);
      sub_18000F708(&v27);
      return (unsigned int)v9;
    }
    v29 = 0LL;
    v10 = (**(__int64 (__fastcall ***)(__int64, void *, PROPVARIANT **))v26)(v26, &unk_18015AFA0, &v29);
    v11 = v10;
    if ( v10 < 0 )
    {
      sub_18004BD84(
        (int)retaddr,
        142,
        (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
        v10);
      sub_18000F708((__int64 *)&v29);
      sub_18000F708(&v26);
      sub_18000F708(&v28);
      sub_18000F708(&v27);
      return v11;
    }
    v12 = a1 + 6;
    v13 = (*((__int64 (__fastcall **)(PROPVARIANT *, GUID *))*v29 + 7))(v29, a1 + 6);
    v14 = v13;
    if ( v13 < 0 )
    {
      sub_18004BD84(
        (int)retaddr,
        143,
        (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
        v13);
      sub_18000F708((__int64 *)&v29);
      sub_18000F708(&v26);
      sub_18000F708(&v28);
      sub_18000F708(&v27);
      return v14;
    }
    sub_18000F708((__int64 *)&v29);
    sub_18000F708(&v26);
    sub_18000F708(&v28);
    sub_18000F708(&v27);
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= 0xB )
    {
      v20 = a1 + 4;
      v18 = -1LL;
      goto LABEL_18;
    }
    v16 = *(_QWORD *)&v12->Data1 - *((_QWORD *)&unk_18019C240 + 3 * (int)i);
    if ( *(_QWORD *)&v12->Data1 == *((_QWORD *)&unk_18019C240 + 3 * (int)i) )
      v16 = *(_QWORD *)v12->Data4 - *((_QWORD *)&unk_18019C240 + 3 * (int)i + 1);
    if ( !v16 )
      break;
  }
  v17 = (_WORD *)*((_QWORD *)&unk_18019C240 + 3 * (int)i + 2);
  v18 = -1LL;
  v19 = -1LL;
  do
    ++v19;
  while ( v17[v19] );
  v20 = a1 + 4;
  sub_1800571F8(v20, v17);
LABEL_18:
  if ( i >= 0xB )
  {
    StringFromGUID2(v12, sz, 64);
    do
      ++v18;
    while ( sz[v18] );
    sub_1800571F8(v20, sz);
  }
  return 0LL;
}
