/*
 * XREFs of sub_1801191A4 @ 0x1801191A4
 * Callers:
 *     sub_18011FEF0 @ 0x18011FEF0 (sub_18011FEF0.c)
 * Callees:
 *     sub_180022EE0 @ 0x180022EE0 (sub_180022EE0.c)
 *     sub_1800234A0 @ 0x1800234A0 (sub_1800234A0.c)
 *     sub_1800273F8 @ 0x1800273F8 (sub_1800273F8.c)
 *     sub_180028F24 @ 0x180028F24 (sub_180028F24.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005A98C @ 0x18005A98C (sub_18005A98C.c)
 *     sub_18005AA7C @ 0x18005AA7C (sub_18005AA7C.c)
 *     sub_18005BBBC @ 0x18005BBBC (sub_18005BBBC.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1801195CC @ 0x1801195CC (sub_1801195CC.c)
 *     sub_18011DF04 @ 0x18011DF04 (sub_18011DF04.c)
 *     sub_18011E9F8 @ 0x18011E9F8 (sub_18011E9F8.c)
 *     sub_180123190 @ 0x180123190 (sub_180123190.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1801191A4(_OWORD *a1, __int64 a2, __int64 a3)
{
  int v6; // ebx
  _DWORD *v7; // r15
  int v8; // ebx
  __int128 *v9; // rax
  __int64 *v10; // rax
  int v11; // eax
  unsigned int v12; // r14d
  __int64 *v14; // rax
  int v15; // eax
  __int64 *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rbx
  LPVOID pv; // [rsp+30h] [rbp-50h] BYREF
  int v25; // [rsp+38h] [rbp-48h] BYREF
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-40h] BYREF
  _DWORD *v27; // [rsp+50h] [rbp-30h]
  __int128 v28; // [rsp+60h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+38h]

  *(_OWORD *)pvar = 0LL;
  v27 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, PROPVARIANT *))(**(_QWORD **)(*(_QWORD *)a1 + 40LL) + 40LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 40LL),
         (__int64)a1 + 8,
         pvar);
  if ( v6 < 0 )
    goto LABEL_39;
  v7 = v27;
  if ( LOWORD(pvar[0]) != 65 || LODWORD(pvar[1]) != 68 || *v27 != 5 )
    goto LABEL_38;
  v28 = a1[6];
  v6 = sub_180123190(
         *(_QWORD *)a1,
         *(_QWORD *)(*(_QWORD *)a1 + 40LL),
         a2,
         (unsigned int)&v28,
         (__int64)&v25,
         (__int64)v27);
  if ( v6 >= 0 )
  {
    v8 = v25;
    if ( v25 == 2 )
    {
      if ( *((_DWORD *)a1 + 28) != 3 || (unsigned int)sub_18011DF04(*(_QWORD *)a1) )
        v9 = &xmmword_18015BBB8;
      else
        v9 = (__int128 *)&unk_180173780;
    }
    else
    {
      v9 = (__int128 *)&unk_180173770;
    }
    v28 = *v9;
    v10 = (__int64 *)sub_1800234A0((unsigned __int64 *)(*(_QWORD *)a1 + 152LL), *((int *)a1 + 28));
    if ( (unsigned int)sub_180022EE0(v10, &xmmword_18015B798) == -1 )
    {
      if ( !v8 )
        goto LABEL_33;
      v11 = sub_1801195CC((char *)a1 + 120);
      v12 = v11;
      if ( v11 < 0 )
      {
        sub_18004BD84(
          (int)retaddr,
          2156,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          v11);
        return v12;
      }
    }
    if ( !v8 )
      goto LABEL_33;
    if ( v8 > 0 )
    {
      if ( v8 <= 2 )
      {
        v6 = sub_180028F24(a2, a3, 1u, (__int64)&v28, 2, 0);
        if ( v6 < 0 )
          goto LABEL_6;
        v19 = (__int64 *)sub_1800234A0((unsigned __int64 *)(*(_QWORD *)a1 + 152LL), *(int *)(a2 + 48));
        if ( (unsigned int)sub_180022EE0(v19, (_QWORD *)a1 + 12) != -1 )
        {
          v20 = sub_1800234A0((unsigned __int64 *)(*(_QWORD *)a1 + 1736LL), *((int *)a1 + 28));
          if ( !(unsigned int)sub_1800273F8(v20, a1 + 6) )
            goto LABEL_24;
          v21 = sub_1800234A0((unsigned __int64 *)(*(_QWORD *)a1 + 152LL), *(int *)(a2 + 48));
          sub_18011E9F8(v21, a1 + 6);
        }
        if ( v7[16] == 8 )
        {
          v22 = *(_DWORD *)(*(_QWORD *)a1 + 8728LL);
          if ( v22 )
          {
            *(_DWORD *)(*(_QWORD *)a1 + 8728LL) = v22 - 1;
            *(_DWORD *)(a3 + 16) = 1;
          }
        }
LABEL_33:
        *(_OWORD *)(v7 + 11) = *(_OWORD *)sub_18005BBBC((int *)a1 + 38, (__int64 *)&v28);
        pv = 0LL;
        v23 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
        sub_18002A504(&pv, 0LL);
        (*(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v23 + 40LL))(v23, &pv);
        v28 = a1[6];
        sub_18005AA7C((__int64)v7, (__int64)pv, &v28);
        v6 = sub_18005A98C(*(_QWORD *)a1, *((_DWORD *)a1 + 28), (__int64)a1 + 8, (__int64)v7);
        PropVariantClear(pvar);
        if ( v6 >= 0 )
          v6 = 0;
        else
          sub_18004BD84(
            (int)retaddr,
            2156,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            v6);
        if ( pv )
          CoTaskMemFree(pv);
        return (unsigned int)v6;
      }
      if ( v8 == 3 )
      {
        v14 = (__int64 *)sub_1800234A0((unsigned __int64 *)(*(_QWORD *)a1 + 152LL), *((int *)a1 + 28));
        v15 = sub_180022EE0(v14, (_QWORD *)a1 + 12);
        v6 = sub_180028F24(a2, a3, 1u, (__int64)&v28, 1, v15 != -1);
        if ( v6 < 0 )
          goto LABEL_6;
        v16 = (__int64 *)sub_1800234A0((unsigned __int64 *)(*(_QWORD *)a1 + 1736LL), *((int *)a1 + 28));
        if ( (unsigned int)sub_180022EE0(v16, (_QWORD *)a1 + 12) != -1 )
        {
          v17 = sub_1800234A0((unsigned __int64 *)(*(_QWORD *)a1 + 152LL), *((int *)a1 + 28));
          if ( !(unsigned int)sub_1800273F8(v17, a1 + 6) )
          {
LABEL_24:
            v6 = -2147024882;
            goto LABEL_39;
          }
          v18 = sub_1800234A0((unsigned __int64 *)(*(_QWORD *)a1 + 1736LL), *((int *)a1 + 28));
          sub_18011E9F8(v18, a1 + 6);
        }
        goto LABEL_33;
      }
    }
LABEL_38:
    PropVariantClear(pvar);
    v6 = -2147418113;
    goto LABEL_39;
  }
LABEL_6:
  PropVariantClear(pvar);
LABEL_39:
  sub_18004BD84(
    (int)retaddr,
    2156,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    v6);
  return (unsigned int)v6;
}
