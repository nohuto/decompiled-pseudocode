/*
 * XREFs of sub_1800ED858 @ 0x1800ED858
 * Callers:
 *     sub_1800EC88C @ 0x1800EC88C (sub_1800EC88C.c)
 * Callees:
 *     sub_180013360 @ 0x180013360 (sub_180013360.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180047458 @ 0x180047458 (sub_180047458.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006F4E4 @ 0x18006F4E4 (sub_18006F4E4.c)
 *     sub_18006F884 @ 0x18006F884 (sub_18006F884.c)
 *     sub_18006FB08 @ 0x18006FB08 (sub_18006FB08.c)
 *     sub_18006FC08 @ 0x18006FC08 (sub_18006FC08.c)
 *     sub_18006FC38 @ 0x18006FC38 (sub_18006FC38.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800CD58C @ 0x1800CD58C (sub_1800CD58C.c)
 *     sub_1800E3CDC @ 0x1800E3CDC (sub_1800E3CDC.c)
 *     sub_1800ED08C @ 0x1800ED08C (sub_1800ED08C.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800ED858(
        __int64 a1,
        _QWORD **a2,
        __int64 a3,
        unsigned __int16 *a4,
        void *Src,
        __int64 a6,
        __int64 *a7)
{
  __int64 *v10; // rsi
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  int v14; // eax
  LPVOID *v15; // rbx
  int v16; // eax
  __int64 *v17; // r14
  LPVOID v18; // rsi
  __int64 v19; // rdi
  unsigned int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 *v23; // rax
  __int64 v24; // rbx
  LPVOID pv; // [rsp+50h] [rbp-81h] BYREF
  __int64 v27; // [rsp+58h] [rbp-79h] BYREF
  __int64 v28[2]; // [rsp+60h] [rbp-71h] BYREF
  __int128 v29; // [rsp+70h] [rbp-61h] BYREF
  __int64 v30; // [rsp+80h] [rbp-51h]
  int v31[4]; // [rsp+90h] [rbp-41h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-29h] BYREF
  int v34; // [rsp+B0h] [rbp-21h]
  _QWORD v35[6]; // [rsp+B8h] [rbp-19h] BYREF
  char v36; // [rsp+E8h] [rbp+17h]
  _UNKNOWN *retaddr; // [rsp+118h] [rbp+47h]
  _QWORD **v38; // [rsp+128h] [rbp+57h] BYREF
  LPVOID *v39; // [rsp+130h] [rbp+5Fh] BYREF

  v38 = a2;
  v10 = a7;
  LODWORD(a7) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a7 + 184LL))(*a7);
  v29 = 0LL;
  v30 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)a3 + 104LL))(a3, *v10, &v29);
  v12 = v11;
  if ( v11 < 0 )
  {
    sub_18004BD84((int)retaddr, 2629, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v11);
    goto LABEL_44;
  }
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(
      *((_QWORD *)off_18019C348 + 2),
      0x23u,
      (__int64)&unk_18015E5F0,
      (__int64)(*((_QWORD *)&v29 + 1) - v29) >> 3);
  }
  if ( !((__int64)(*((_QWORD *)&v29 + 1) - v29) >> 3) )
    goto LABEL_43;
  v39 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, LPVOID **))(*(_QWORD *)*v10 + 104LL))(*v10, &v39);
  v12 = v13;
  if ( v13 >= 0 )
  {
    v32 = 0LL;
    *(_OWORD *)v28 = *((_OWORD *)v39 + 4);
    *(_OWORD *)v31 = *((_OWORD *)v39 + 3);
    v14 = sub_180013360(
            (__int64)v38,
            0,
            *((_DWORD *)v39 + 2),
            (__int128 *)v31,
            v28,
            a4,
            (unsigned __int16 *)Src,
            a6,
            &v32);
    v12 = v14;
    v15 = (LPVOID *)v32;
    if ( v14 < 0 )
    {
      sub_18004BD84((int)retaddr, 2649, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v14);
LABEL_27:
      if ( v15 )
        sub_1800E3CDC(v15);
      goto LABEL_29;
    }
    *(_QWORD *)v31 = *v10;
    sub_180047458((__int64 *)v31);
    sub_18006F884(v28, (_QWORD *)v29, *((_QWORD **)&v29 + 1), (__int64 *)v31);
    sub_18006FC08(v28);
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0x25u, (__int64)&unk_18015E5F0);
    }
    sub_1800461B8(v10);
    pv = 0LL;
    sub_18002A504(&pv, 0LL);
    v16 = (*(__int64 (__fastcall **)(_QWORD *, LPVOID *))(*v38[2] + 40LL))(v38[2], &pv);
    v12 = v16;
    if ( v16 < 0 )
    {
      sub_18004BD84((int)retaddr, 2668, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v16);
LABEL_25:
      if ( pv )
        CoTaskMemFree(pv);
      goto LABEL_27;
    }
    v35[0] = &a7;
    v35[1] = a1;
    v35[2] = &pv;
    v35[3] = &v38;
    v35[4] = &v39;
    v35[5] = &v29;
    v36 = 1;
    v33 = 0LL;
    v34 = (int)a7;
    *(_OWORD *)v28 = *((_OWORD *)v39 + 3);
    v17 = *(__int64 **)(a1 + 48);
    v18 = pv;
    v19 = *v17;
    v20 = ((__int64 (__fastcall *)(_QWORD **))(*v38)[7])(v38);
    v21 = (*(__int64 (__fastcall **)(__int64 *, LPVOID, _QWORD, __int64 *, _DWORD, _DWORD, __int64 *))(v19 + 56))(
            v17,
            v18,
            v20,
            v28,
            *((_DWORD *)v39 + 2),
            (_DWORD)a7,
            &v33);
    v12 = v21;
    if ( v21 < 0 )
    {
      sub_18004BD84((int)retaddr, 2713, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v21);
LABEL_22:
      if ( v33 )
        sub_1800ED08C(v33);
      sub_18006FC38((__int64)v35);
      goto LABEL_25;
    }
    v27 = 0LL;
    sub_1800461B8(&v27);
    v22 = (*(__int64 (__fastcall **)(__int64, _QWORD **, LPVOID *, __int64, _DWORD, __int64 *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)qword_18019EE48 + 24LL))(
            qword_18019EE48,
            v38,
            v15,
            2LL,
            0,
            &v33,
            0LL,
            0LL,
            &v27);
    v12 = v22;
    if ( v22 < 0 )
    {
      sub_18004BD84((int)retaddr, 2724, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v22);
      sub_1800461B8(&v27);
      goto LABEL_22;
    }
    v23 = sub_18006FB08(v28, &v27);
    sub_18006F4E4((__int64 *)v31, v29, *((__int64 *)&v29 + 1), v23);
    sub_18006FC08((__int64 *)v31);
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0x29u, (__int64)&unk_18015E5F0);
    }
    v36 = 0;
    sub_1800461B8(&v27);
    if ( v33 )
      sub_1800ED08C(v33);
    sub_18006FC38((__int64)v35);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v15 )
      sub_1800E3CDC(v15);
    if ( v39 )
      sub_1800E3CDC(v39);
LABEL_43:
    v12 = 0;
    goto LABEL_44;
  }
  sub_18004BD84((int)retaddr, 2636, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v13);
LABEL_29:
  if ( v39 )
    sub_1800E3CDC(v39);
LABEL_44:
  v24 = v29;
  if ( (_QWORD)v29 )
  {
    sub_1800CD58C((__int64 *)v29, *((__int64 **)&v29 + 1));
    sub_1800472E0(v24, (v30 - v24) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  return v12;
}
