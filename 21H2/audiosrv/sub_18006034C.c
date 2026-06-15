/*
 * XREFs of sub_18006034C @ 0x18006034C
 * Callers:
 *     sub_1800558F4 @ 0x1800558F4 (sub_1800558F4.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18002A0F0 @ 0x18002A0F0 (sub_18002A0F0.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005E940 @ 0x18005E940 (sub_18005E940.c)
 *     sub_18005EA64 @ 0x18005EA64 (sub_18005EA64.c)
 *     sub_18005EAB8 @ 0x18005EAB8 (sub_18005EAB8.c)
 *     sub_180060978 @ 0x180060978 (sub_180060978.c)
 *     sub_1800609CC @ 0x1800609CC (sub_1800609CC.c)
 *     sub_180060A28 @ 0x180060A28 (sub_180060A28.c)
 *     sub_180060BA8 @ 0x180060BA8 (sub_180060BA8.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800C287C @ 0x1800C287C (sub_1800C287C.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall sub_18006034C(_QWORD *a1, char *a2)
{
  char **v4; // r14
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r15
  char *v7; // rax
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  void *v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  void *v14; // rcx
  LPVOID *v15; // rax
  void *v16; // rax
  char v17; // bl
  int v18; // eax
  LPVOID v19; // rcx
  LPVOID *v20; // rax
  LPVOID *v21; // rbx
  char v22; // r14
  int v23; // eax
  LPVOID v24; // rcx
  LPVOID *v25; // rax
  LPVOID *v26; // rbx
  char v27; // r14
  int v28; // eax
  LPVOID v29; // rcx
  LPVOID v30; // rcx
  LPVOID *v31; // rax
  struct _RTL_CRITICAL_SECTION *v32; // rbx
  int v33; // eax
  LPVOID v34; // rax
  int v35; // eax
  int v37; // edx
  void *v38; // rcx
  int v39; // r9d
  int v40; // edx
  LPVOID *v41; // rax
  void *v42; // rcx
  int v43; // eax
  LPVOID *v44; // rax
  LPVOID *v45; // rbx
  int v46; // eax
  LPVOID *v47; // [rsp+40h] [rbp-49h] BYREF
  char v48; // [rsp+48h] [rbp-41h]
  __int64 v49; // [rsp+50h] [rbp-39h] BYREF
  LPVOID *p_pv; // [rsp+58h] [rbp-31h]
  void *v51; // [rsp+60h] [rbp-29h] BYREF
  char v52; // [rsp+68h] [rbp-21h]
  _BYTE v53[112]; // [rsp+70h] [rbp-19h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+5Fh]
  __int64 v55; // [rsp+F0h] [rbp+67h] BYREF
  void (__fastcall ***v56)(_QWORD, __int64, __int64 *); // [rsp+100h] [rbp+77h] BYREF
  LPVOID pv; // [rsp+108h] [rbp+7Fh] BYREF

  v4 = (char **)(a1 + 29);
  sub_18002A504((void **)a1 + 29, 0LL);
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)&a2[2 * v5] );
  *v4 = 0LL;
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v8 = -2147024362;
    goto LABEL_120;
  }
  if ( is_mul_ok(v6, 2uLL) )
  {
    v7 = (char *)CoTaskMemAlloc(2 * v6);
    *v4 = v7;
    if ( !v7 )
    {
      v8 = -2147024882;
      goto LABEL_120;
    }
    v8 = 0;
    sub_18002A0F0(v7, v5 + 1, a2, v5);
  }
  else
  {
    v8 = -2147024362;
  }
  if ( v8 < 0 )
  {
LABEL_120:
    sub_18004BD84((int)retaddr, 307, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp", v8);
    return (unsigned int)v8;
  }
  v56 = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD))(**(_QWORD **)&dwCreationFlags + 40LL))(
         *(_QWORD *)&dwCreationFlags,
         *v4,
         &v56);
  v8 = v9;
  if ( v9 < 0 )
  {
    sub_18004BD84((int)retaddr, 310, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp", v9);
    goto LABEL_65;
  }
  v49 = 0LL;
  v10 = ((__int64 (__fastcall *)(_QWORD, void *, __int64 *))**v56)(v56, &unk_18015B040, &v49);
  v8 = v10;
  if ( v10 < 0 )
  {
    v37 = 313;
LABEL_71:
    sub_18004BD84((int)retaddr, v37, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp", v10);
    goto LABEL_64;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v49 + 64LL))(v49, a1 + 30);
  v8 = v10;
  if ( v10 < 0 )
  {
    v37 = 315;
    goto LABEL_71;
  }
  v55 = 0LL;
  v47 = 0LL;
  if ( ((int (__fastcall *)(_QWORD, void *, __int64))(*v56)[3])(v56, &unk_18015C488, 23LL) >= 0 )
  {
    pv = 0LL;
    p_pv = &pv;
    v51 = 0LL;
    v52 = 1;
    v8 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, void **))(*(_QWORD *)qword_18019EED0 + 32LL))(
           qword_18019EED0,
           *v4,
           0LL,
           &v51);
    if ( v52 )
    {
      v11 = *p_pv;
      *p_pv = v51;
      if ( v11 )
        CoTaskMemFree(v11);
    }
    if ( v8 < 0 )
    {
      sub_18004BD84((int)retaddr, 324, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp", v8);
      v38 = pv;
      pv = 0LL;
      if ( v38 )
        CoTaskMemFree(v38);
      sub_18000F708((__int64 *)&v47);
      goto LABEL_63;
    }
    sub_180060BA8(v53, pv);
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 12LL, &unk_18016DE00, a1);
    }
    v12 = v55;
    v55 = 0LL;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v13 = (*((__int64 (__fastcall **)(LPVOID *, _BYTE *, __int64))*v47 + 3))(v47, v53, 64LL);
    if ( v13 != -2147467262 && v13 < 0 )
      sub_18006D26C(retaddr, 335LL, "avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp", (unsigned int)v13);
    v14 = pv;
    pv = 0LL;
    if ( v14 )
      CoTaskMemFree(v14);
  }
  sub_18000F708((__int64 *)&v47);
  if ( v55 )
  {
    v15 = (LPVOID *)sub_18006A18C(432LL, &unk_18019F848);
    v47 = v15;
    if ( v15 )
      v16 = (void *)sub_180060A28(v15, a1 + 1);
    else
      v16 = 0LL;
    pv = v16;
    if ( !v16 )
    {
      v8 = -2147024882;
      v39 = -2147024882;
      v40 = 349;
LABEL_117:
      sub_18004BD84((int)retaddr, v40, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp", v39);
      goto LABEL_63;
    }
    v47 = &pv;
    v48 = 1;
    v17 = 1;
    v18 = sub_18005EAB8((__int64)v16, v56, v55);
    v19 = pv;
    if ( v18 >= 0 )
    {
      a1[31] = pv;
      v17 = 0;
    }
    if ( v17 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v19 + 16LL))(v19);
  }
  if ( a1[31] )
    goto LABEL_34;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 13LL, &unk_18016DE00, a2);
  }
  v41 = (LPVOID *)sub_18006A18C(312LL, &unk_18019F848);
  v47 = v41;
  if ( v41 )
    v42 = (void *)sub_1800C287C(v41, a1 + 1);
  else
    v42 = 0LL;
  pv = v42;
  if ( !v42 )
  {
    v8 = -2147024882;
    v39 = -2147024882;
    v40 = 364;
    goto LABEL_117;
  }
  v47 = &pv;
  v48 = 1;
  v43 = (*(__int64 (__fastcall **)(void *, void (__fastcall ***)(_QWORD, __int64, __int64 *)))(*(_QWORD *)v42 + 48LL))(
          v42,
          v56);
  v8 = v43;
  if ( v43 < 0 )
  {
    sub_18004BD84((int)retaddr, 367, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp", v43);
LABEL_91:
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    goto LABEL_63;
  }
  a1[31] = pv;
LABEL_34:
  if ( !v55 )
    goto LABEL_42;
  v20 = (LPVOID *)sub_18006A18C(88LL, &unk_18019F848);
  v21 = v20;
  v47 = v20;
  if ( v20 )
  {
    sub_1800609CC(v20, a1 + 1);
    *v21 = &off_180148898;
    v21[6] = 0LL;
    v21[7] = 0LL;
    *((_DWORD *)v21 + 16) = 0;
    *(_OWORD *)((char *)v21 + 68) = xmmword_18015B730;
  }
  else
  {
    v21 = 0LL;
  }
  pv = v21;
  if ( !v21 )
  {
    v8 = -2147024882;
    v39 = -2147024882;
    v40 = 388;
    goto LABEL_117;
  }
  v47 = &pv;
  v48 = 1;
  v22 = 1;
  v23 = sub_18005E940((__int64)v21, v56, v55);
  v24 = pv;
  if ( v23 >= 0 )
  {
    a1[32] = pv;
    v22 = 0;
  }
  if ( v22 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v24 + 16LL))(v24);
LABEL_42:
  if ( a1[32] )
    goto LABEL_43;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 14LL, &unk_18016DE00, a2);
  }
  v44 = (LPVOID *)sub_18006A18C(112LL, &unk_18019F848);
  v45 = v44;
  v47 = v44;
  if ( v44 )
  {
    sub_1800609CC(v44, a1 + 1);
    *v45 = &off_180154DD0;
    v45[6] = 0LL;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v45 + 7), 0, 0);
    v45[12] = 0LL;
    *((_BYTE *)v45 + 104) = 0;
  }
  else
  {
    v45 = 0LL;
  }
  pv = v45;
  if ( !v45 )
  {
    v8 = -2147024882;
    v39 = -2147024882;
    v40 = 403;
    goto LABEL_117;
  }
  v47 = &pv;
  v48 = 1;
  v46 = (*((__int64 (__fastcall **)(LPVOID *, void (__fastcall ***)(_QWORD, __int64, __int64 *)))*v45 + 6))(v45, v56);
  v8 = v46;
  if ( v46 < 0 )
  {
    sub_18004BD84((int)retaddr, 406, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp", v46);
    goto LABEL_91;
  }
  a1[32] = pv;
LABEL_43:
  if ( !v55 )
    goto LABEL_51;
  v25 = (LPVOID *)sub_18006A18C(48LL, &unk_18019F848);
  v26 = v25;
  v47 = v25;
  if ( v25 )
  {
    sub_180060978(v25);
    *v26 = &off_180148748;
    v26[4] = 0LL;
    v26[5] = 0LL;
  }
  else
  {
    v26 = 0LL;
  }
  pv = v26;
  if ( !v26 )
  {
    v8 = -2147024882;
    v39 = -2147024882;
    v40 = 422;
    goto LABEL_117;
  }
  v47 = &pv;
  v48 = 1;
  v27 = 1;
  v28 = sub_18005EA64((__int64)v26, v56, v55);
  v29 = pv;
  if ( v28 >= 0 )
  {
    a1[33] = pv;
    v27 = 0;
  }
  if ( v27 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v29 + 16LL))(v29);
LABEL_51:
  v30 = (LPVOID)a1[33];
  if ( v30 )
    goto LABEL_59;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 15LL, &unk_18016DE00, a2);
  }
  v31 = (LPVOID *)sub_18006A18C(80LL, &unk_18019F848);
  v32 = (struct _RTL_CRITICAL_SECTION *)v31;
  v47 = v31;
  if ( v31 )
  {
    sub_180060978(v31);
    v32->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&off_1801487B8;
    v32->SpinCount = 0LL;
    InitializeCriticalSectionEx(v32 + 1, 0, 0);
  }
  else
  {
    v32 = 0LL;
  }
  pv = v32;
  if ( !v32 )
  {
    v8 = -2147024882;
    v39 = -2147024882;
    v40 = 437;
    goto LABEL_117;
  }
  v47 = &pv;
  v48 = 1;
  v33 = (*(__int64 (__fastcall **)(struct _RTL_CRITICAL_SECTION *, void (__fastcall ***)(_QWORD, __int64, __int64 *)))&v32->DebugInfo[1].Type)(
          v32,
          v56);
  v8 = v33;
  if ( v33 < 0 )
  {
    sub_18004BD84((int)retaddr, 440, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp", v33);
    goto LABEL_91;
  }
  v34 = pv;
  a1[33] = pv;
  v30 = v34;
LABEL_59:
  v35 = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)v30 + 96LL))(v30);
  v8 = v35;
  if ( v35 < 0 )
  {
    v40 = 456;
LABEL_116:
    v39 = v35;
    goto LABEL_117;
  }
  v35 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)a1[32] + 96LL))(a1[32]);
  v8 = v35;
  if ( v35 < 0 )
  {
    v40 = 457;
    goto LABEL_116;
  }
  v35 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)a1[31] + 192LL))(a1[31]);
  v8 = v35;
  if ( v35 < 0 )
  {
    v40 = 458;
    goto LABEL_116;
  }
  v8 = 0;
LABEL_63:
  sub_18000F708(&v55);
LABEL_64:
  sub_18000F708(&v49);
LABEL_65:
  sub_18000F708((__int64 *)&v56);
  return (unsigned int)v8;
}
