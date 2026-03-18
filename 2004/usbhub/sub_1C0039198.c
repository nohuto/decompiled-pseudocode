/*
 * XREFs of sub_1C0039198 @ 0x1C0039198
 * Callers:
 *     sub_1C0010540 @ 0x1C0010540 (sub_1C0010540.c)
 * Callees:
 *     sub_1C000A080 @ 0x1C000A080 (sub_1C000A080.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0012400 @ 0x1C0012400 (sub_1C0012400.c)
 *     sub_1C00177A8 @ 0x1C00177A8 (sub_1C00177A8.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002FED0 @ 0x1C002FED0 (sub_1C002FED0.c)
 *     sub_1C003272C @ 0x1C003272C (sub_1C003272C.c)
 *     sub_1C00329F0 @ 0x1C00329F0 (sub_1C00329F0.c)
 *     sub_1C0032B54 @ 0x1C0032B54 (sub_1C0032B54.c)
 *     sub_1C0032E60 @ 0x1C0032E60 (sub_1C0032E60.c)
 *     sub_1C003363C @ 0x1C003363C (sub_1C003363C.c)
 *     sub_1C0037720 @ 0x1C0037720 (sub_1C0037720.c)
 *     sub_1C00378B0 @ 0x1C00378B0 (sub_1C00378B0.c)
 *     sub_1C0037D08 @ 0x1C0037D08 (sub_1C0037D08.c)
 *     sub_1C003ABE4 @ 0x1C003ABE4 (sub_1C003ABE4.c)
 *     sub_1C003B2A0 @ 0x1C003B2A0 (sub_1C003B2A0.c)
 *     sub_1C00449C0 @ 0x1C00449C0 (sub_1C00449C0.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C004BE38 @ 0x1C004BE38 (sub_1C004BE38.c)
 *     sub_1C004BF44 @ 0x1C004BF44 (sub_1C004BF44.c)
 *     sub_1C004F5D0 @ 0x1C004F5D0 (sub_1C004F5D0.c)
 *     sub_1C004FEB8 @ 0x1C004FEB8 (sub_1C004FEB8.c)
 *     sub_1C0050274 @ 0x1C0050274 (sub_1C0050274.c)
 *     sub_1C0050D40 @ 0x1C0050D40 (sub_1C0050D40.c)
 *     sub_1C0050D78 @ 0x1C0050D78 (sub_1C0050D78.c)
 *     sub_1C0051210 @ 0x1C0051210 (sub_1C0051210.c)
 *     sub_1C00513E0 @ 0x1C00513E0 (sub_1C00513E0.c)
 *     sub_1C0052F2C @ 0x1C0052F2C (sub_1C0052F2C.c)
 *     sub_1C00530C8 @ 0x1C00530C8 (sub_1C00530C8.c)
 *     sub_1C0053480 @ 0x1C0053480 (sub_1C0053480.c)
 *     sub_1C0054F88 @ 0x1C0054F88 (sub_1C0054F88.c)
 *     sub_1C0055158 @ 0x1C0055158 (sub_1C0055158.c)
 *     sub_1C0055234 @ 0x1C0055234 (sub_1C0055234.c)
 *     sub_1C005B7C4 @ 0x1C005B7C4 (sub_1C005B7C4.c)
 *     sub_1C005D898 @ 0x1C005D898 (sub_1C005D898.c)
 */

__int64 __fastcall sub_1C0039198(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v6; // rbx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  _DWORD *v13; // r12
  void *v14; // rcx
  int *v15; // r13
  __int64 result; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // r14d
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r9
  char v24; // r12
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  const EVENT_DESCRIPTOR *v28; // r9
  __int64 v29; // r8
  int v30; // ecx
  __int64 v31; // r9
  __int64 v32; // rcx
  int v33; // eax
  char v34; // cl
  char v35; // al
  __int128 v36; // xmm0
  int v37; // eax
  int v38; // edx
  int v39; // r8d
  __int64 v40; // rcx
  __int64 v41; // rax
  signed int v42; // r14d
  _QWORD *PoolWithTag; // rax
  int v44; // r8d
  void *v45; // r14
  int v46; // eax
  int v47; // eax
  unsigned int v48; // r10d
  int v49; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v50[4]; // [rsp+54h] [rbp-45h] BYREF
  int v51; // [rsp+58h] [rbp-41h] BYREF
  int v52; // [rsp+5Ch] [rbp-3Dh] BYREF
  int v53; // [rsp+60h] [rbp-39h] BYREF
  _DWORD *v54; // [rsp+68h] [rbp-31h]
  __int128 v55; // [rsp+70h] [rbp-29h] BYREF
  __int128 v56; // [rsp+80h] [rbp-19h]
  __int128 v57; // [rsp+90h] [rbp-9h]
  __int64 v58; // [rsp+A0h] [rbp+7h]
  __int64 v59; // [rsp+A8h] [rbp+Fh] BYREF
  char v60; // [rsp+B0h] [rbp+17h]
  int v61; // [rsp+B1h] [rbp+18h]

  v51 = 0;
  v49 = 0;
  v50[0] = 0;
  v54 = sub_1C000F050(a1);
  v6 = sub_1C0011220(a2);
  sub_1C000FD80(a1, 4, 1936028740, a2, *((unsigned __int16 *)v6 + 714));
  v7 = (void *)*((_QWORD *)v6 + 299);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *((_QWORD *)v6 + 299) = 0LL;
  }
  v8 = (void *)*((_QWORD *)v6 + 142);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *((_QWORD *)v6 + 142) = 0LL;
  }
  v9 = (void *)*((_QWORD *)v6 + 143);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *((_QWORD *)v6 + 143) = 0LL;
  }
  v10 = (void *)*((_QWORD *)v6 + 280);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *((_QWORD *)v6 + 280) = 0LL;
  }
  v11 = (void *)*((_QWORD *)v6 + 300);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *((_QWORD *)v6 + 300) = 0LL;
  }
  v12 = (void *)*((_QWORD *)v6 + 355);
  *((_QWORD *)v6 + 301) = 0LL;
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *((_QWORD *)v6 + 355) = 0LL;
  }
  v13 = v6 + 532;
  sub_1C0050D40(v6 + 532);
  v6[355] &= ~0x200u;
  sub_1C0050D40(v6 + 544);
  sub_1C0050D40(v6 + 548);
  v14 = (void *)*((_QWORD *)v6 + 316);
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0);
    *((_QWORD *)v6 + 316) = 0LL;
  }
  v15 = v6 + 706;
  sub_1C001D340((__m128 *)(v6 + 706), 0, 0x40uLL);
  result = sub_1C000A080(a1, *((_WORD *)v6 + 714), (__int64)&v51, &v49);
  if ( a3 )
    *a3 = v49;
  if ( (result & 0xC0000000) == 0xC0000000 )
  {
    v6[705] = 1073807368;
    return result;
  }
  v17 = 1LL;
  if ( (v51 & 0x200) != 0 )
  {
    v6[292] = 0;
    v17 = 0LL;
  }
  else if ( (v51 & 0x400) != 0 )
  {
    v6[292] = 2;
    v17 = 2LL;
  }
  else
  {
    v6[292] = 1;
  }
  sub_1C000FD80(a1, 4, 1936999473, a2, v17);
  v52 = 0;
  v53 = 18;
  if ( (int)sub_1C003ABE4(a1, *((_QWORD *)v6 + 145), (int)v6 + 1400, (unsigned int)&v53, 0LL, (__int64)&v52) < 0 )
    goto LABEL_119;
  sub_1C00449C0(v18, a2);
  if ( !*((_BYTE *)v6 + 2895) )
    goto LABEL_31;
  if ( (int)sub_1C003363C(a1, a2, (__int64)(v6 + 722)) < 0 )
  {
LABEL_41:
    v6[705] = 1073807390;
    return 3221225485LL;
  }
  if ( (int)sub_1C0055158(a1, a2) < 0 )
  {
LABEL_119:
    v6[705] = 1073807360;
    return 3221225485LL;
  }
  if ( !(unsigned __int8)sub_1C00530C8(a1, (int)v6 + 1400, v19, 0, 0LL) )
  {
    v6[705] = 1073807365;
    return 3221225485LL;
  }
  sub_1C004BF44(a1, *((_QWORD *)v6 + 145), v6 + 350, 0LL);
LABEL_31:
  result = sub_1C0037D08(a1, a2);
  v20 = result;
  if ( (result & 0xC0000000) == 0xC0000000 )
    return result;
  if ( *((_WORD *)v6 + 701) > 0x200u && (v6[358] & 0x20000) == 0 )
  {
    v21 = *((_QWORD *)v6 + 148);
    v49 = 0;
    v20 = sub_1C0054F88(v21, a2, &v49);
    if ( v20 < 0 )
      return (unsigned int)v20;
    v22 = *((_QWORD *)v6 + 300);
    v58 = 0LL;
    v55 = 0LL;
    v56 = 0LL;
    v57 = 0LL;
    v24 = sub_1C0052F2C(a1, v22, (int)v6 + 1400, v49, (__int64)&v55);
    if ( v24 == 1 )
      v6[701] |= 0x20u;
    v25 = *((_QWORD *)&v56 + 1);
    if ( *((_QWORD *)&v56 + 1) )
    {
      if ( *(_BYTE *)(*((_QWORD *)&v56 + 1) + 7LL) && (v6[355] & 0x40000000) == 0 )
      {
        v26 = **((_QWORD **)&v56 + 1);
        *v15 |= 4u;
        *((_QWORD *)v6 + 361) = v26;
        v20 = sub_1C003363C(a1, a2, v25);
        if ( v20 < 0 )
          goto LABEL_41;
        v24 = sub_1C0037720(a1, a2, (__int64)&v55);
        if ( !v24 )
          return 3221225485LL;
        RtlWriteRegistryValue(0, *((PCWSTR *)v6 + 143), L"MsOs20DescriptorSetInfo", 3u, v6 + 722, 8u);
        v25 = *((_QWORD *)&v56 + 1);
      }
      if ( v25 )
      {
        *v15 |= 1u;
        v6[358] &= 0xFFFFF9FF;
        if ( *(_WORD *)(v25 + 4) )
        {
          LOBYTE(v23) = *(_BYTE *)(v25 + 6);
          sub_1C004BF44(a1, *((_QWORD *)v6 + 145), 0LL, v23);
          v20 = sub_1C00329F0(a1, a2, *((__int64 *)&v56 + 1));
          v27 = a1;
          if ( v20 < 0 )
          {
            v28 = (const EVENT_DESCRIPTOR *)&unk_1C00628D0;
            v6[705] = 1073807388;
LABEL_48:
            sub_1C0012400(v27, 0LL, 0LL, v28);
            return (unsigned int)v20;
          }
          v24 = sub_1C0053480(a1, a2, *((_QWORD *)&v56 + 1));
          if ( !v24 )
          {
            v6[705] = 1073807389;
            sub_1C0012400(a1, 0LL, 0LL, &stru_1C0062710);
            return 3221225485LL;
          }
          v30 = *v15;
          if ( (*v15 & 0x200) != 0 )
            v6[355] |= 0x20u;
          if ( (v6[295] & 0x10) != 0 && (v6[355] & 4) == 0 && (v30 & 0x80u) != 0 )
          {
            LOBYTE(v29) = 1;
            v31 = *(unsigned __int8 *)(*((_QWORD *)v6 + 357) + 5LL);
            if ( (v54[640] & 1) == 0 )
              v31 = 20LL;
            sub_1C004BE38(a1, *((_QWORD *)v6 + 145), v29, v31);
            v6[355] |= 0x20000000u;
          }
        }
      }
    }
    v32 = v57;
    if ( (_QWORD)v57 )
    {
      v6[358] |= 0x40000u;
      v6[762] = *(_DWORD *)(v32 + 22);
      v59 = *((_QWORD *)v6 + 382);
      v33 = *(_DWORD *)(v32 + 22);
      v49 = 0;
      v60 = 1;
      v61 = v33;
      ZwUpdateWnfStateData(&unk_1C0062158, &v59, 13LL);
      sub_1C005D898(&v49);
      LOBYTE(v59) = 64;
      HIWORD(v59) = 0;
      LOWORD(v51) = 0;
      v34 = *(_BYTE *)(v57 + 21);
      *(_DWORD *)((char *)&v59 + 2) = v49;
      BYTE1(v59) = v34;
      v20 = sub_1C00177A8(*((_QWORD *)v6 + 148), a2, &v59, 0LL, &v51);
      if ( v20 < 0 )
        sub_1C000FD80(a1, 4, 1399075121, 0LL, 0LL);
    }
    if ( *((_QWORD *)&v57 + 1) )
    {
      result = sub_1C00378B0(*((_QWORD *)v6 + 148), a2, *((__int64 *)&v57 + 1));
      v20 = result;
      if ( (int)result < 0 )
        return result;
      *((_QWORD *)v6 + 301) = *((_QWORD *)&v57 + 1);
    }
    if ( *(_BYTE *)(*((_QWORD *)v6 + 299) + 4LL) > 1u && (_BYTE)v58 == 1 )
    {
      v35 = *((_BYTE *)v6 + 1404);
      if ( !v35 || v35 == -17 && *((_BYTE *)v6 + 1405) == 2 && *((_BYTE *)v6 + 1406) == 1 )
        v6[355] |= 0x20u;
    }
    if ( !*((_BYTE *)v6 + 2732) && v24 == 1 && (_QWORD)v56 )
    {
      v36 = *(_OWORD *)(v56 + 4);
      *((_BYTE *)v6 + 2732) = 1;
      *(_OWORD *)(v6 + 679) = v36;
    }
    v13 = v6 + 532;
    if ( *((_QWORD *)&v55 + 1) )
    {
      v6[355] |= 0x80000u;
      v6[701] |= 0x200u;
    }
  }
  if ( v20 < 0 )
    return (unsigned int)v20;
  if ( (*(_BYTE *)v15 & 2) == 0 )
  {
    v37 = sub_1C003272C(a1, a2);
    v20 = v37;
    if ( (v37 & 0xC0000000) == 0xC0000000 && v37 != -1073741637 )
    {
      v28 = (const EVENT_DESCRIPTOR *)&unk_1C0062BD8;
LABEL_84:
      v27 = a1;
      goto LABEL_48;
    }
  }
  result = sub_1C005B7C4(a1, a2, 0LL, v50);
  if ( (result & 0xC0000000) == 0xC0000000 )
    return result;
  v20 = sub_1C00513E0(a1, a2, v13);
  v40 = v20 & 0xC0000000;
  if ( (_DWORD)v40 == -1073741824 )
  {
    v28 = (const EVENT_DESCRIPTOR *)&unk_1C00629B8;
    goto LABEL_84;
  }
  v41 = *((_QWORD *)v6 + 267);
  if ( v41 )
  {
    v6[355] |= 0x200u;
    v40 = (__int64)&off_1C006B000;
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
    {
      v40 = (__int64)DeviceObject;
      if ( LOWORD(DeviceObject->DeviceType) )
        sub_1C003B2A0(DeviceObject->DeviceExtension, v38, v39, 40, (__int64)"FKh&", v41);
    }
  }
  LOBYTE(v40) = (v6[355] & 0x20) == 0;
  if ( ((unsigned __int8)v40 & ((v6[358] & 0x400) != 0)) != 0 )
    *((_QWORD *)v6 + 316) = sub_1C0032E60(v40, a2);
  if ( (v6[295] & 0x10) == 0 )
    v20 = sub_1C0032B54(a1, a2);
  if ( (v20 & 0xC0000000) == 0xC0000000 && v20 != -1073741637 )
    return (unsigned int)v20;
  sub_1C0050D40(v6 + 524);
  sub_1C0050D40(v6 + 520);
  sub_1C0050D40(v6 + 528);
  v42 = sub_1C004FEB8(a1, a2, v6 + 520);
  if ( v42 >= 0 )
  {
    v42 = sub_1C0050274(a1, a2, v6 + 524);
    if ( v42 >= 0 )
    {
      v42 = sub_1C004F5D0(a1, a2, v6 + 528);
      if ( (v42 & 0xC0000000) != 0xC0000000 )
        goto LABEL_103;
      sub_1C0050D40(v6 + 524);
    }
    sub_1C0050D40(v6 + 520);
  }
LABEL_103:
  sub_1C0050D78(a1, a2, v6 + 544);
  if ( *((_BYTE *)v6 + 1415) && (v6[358] & 0x800) == 0 )
    sub_1C0051210(*((_QWORD *)v6 + 148), a2, 1033LL, v6 + 540);
  if ( v42 >= 0 && v54[634] == 1 && v6[292] == 1 && *((_WORD *)v6 + 701) >= 0x200u )
  {
    PoolWithTag = ExAllocatePoolWithTag(PoolType, 0xAuLL, 0x42554855u);
    v45 = PoolWithTag;
    if ( PoolWithTag )
    {
      LOWORD(v51) = 10;
      *PoolWithTag = 0LL;
      *((_WORD *)PoolWithTag + 4) = 0;
      v46 = sub_1C0055234(a1, a2, v44, (_DWORD)PoolWithTag, (__int64)&v51);
    }
    else
    {
      v46 = -1073741670;
    }
    if ( v46 >= 0 )
    {
      sub_1C004A608(a1, *((unsigned __int16 *)v6 + 714), 100, (_DWORD)v45, 10, v46, 0, (__int64)aBusC, 4558, 0);
      v6[355] |= 1u;
    }
    if ( v45 )
      ExFreePoolWithTag(v45, 0);
    v42 = 0;
  }
  v47 = sub_1C002FED0(a1, 6u, v42, *((unsigned __int16 *)v6 + 714));
  sub_1C000FD80(a1, 4, 1936999486, a2, v47);
  return v48;
}
