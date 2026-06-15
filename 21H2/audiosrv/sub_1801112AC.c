/*
 * XREFs of sub_1801112AC @ 0x1801112AC
 * Callers:
 *     sub_18010ED94 @ 0x18010ED94 (sub_18010ED94.c)
 *     sub_18010F970 @ 0x18010F970 (sub_18010F970.c)
 *     sub_1801118BC @ 0x1801118BC (sub_1801118BC.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800BC578 @ 0x1800BC578 (sub_1800BC578.c)
 *     sub_18011073C @ 0x18011073C (sub_18011073C.c)
 *     sub_18011080C @ 0x18011080C (sub_18011080C.c)
 *     sub_1801108E4 @ 0x1801108E4 (sub_1801108E4.c)
 *     sub_180110E94 @ 0x180110E94 (sub_180110E94.c)
 *     sub_18011105C @ 0x18011105C (sub_18011105C.c)
 *     sub_180111980 @ 0x180111980 (sub_180111980.c)
 *     sub_180111C9C @ 0x180111C9C (sub_180111C9C.c)
 *     sub_180112944 @ 0x180112944 (sub_180112944.c)
 *     sub_180112CEC @ 0x180112CEC (sub_180112CEC.c)
 *     sub_180113A88 @ 0x180113A88 (sub_180113A88.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1801112AC(__int64 a1, __int64 a2, _DWORD *a3, _QWORD *a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // r15
  int v8; // r9d
  char v9; // si
  int v10; // edx
  int v11; // ebx
  int v12; // r9d
  int v13; // edx
  int v14; // eax
  int v15; // edx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // r9d
  int v19; // edx
  int v20; // eax
  unsigned int v21; // r12d
  __int64 v22; // rdx
  int v23; // edx
  int v24; // eax
  int v25; // r9d
  int v26; // edx
  int v27; // r9d
  __int64 v29; // rsi
  __int64 *v30; // rdi
  __int64 **v31; // r9
  __int64 *v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  int v36; // eax
  __int64 v37; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v38; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v40; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v41; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v42; // [rsp+58h] [rbp-A8h]
  __int64 *v43; // [rsp+60h] [rbp-A0h]
  __int128 *v44; // [rsp+68h] [rbp-98h]
  char v45; // [rsp+70h] [rbp-90h]
  __int128 v46; // [rsp+78h] [rbp-88h] BYREF
  __int64 v47; // [rsp+88h] [rbp-78h]
  __int128 v48; // [rsp+90h] [rbp-70h]
  int v49; // [rsp+A0h] [rbp-60h]
  struct _RTL_CRITICAL_SECTION *v50; // [rsp+A8h] [rbp-58h]
  __int64 v51; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v52[288]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v53; // [rsp+1E0h] [rbp+E0h] BYREF
  __int16 v54; // [rsp+1F0h] [rbp+F0h]
  _UNKNOWN *retaddr; // [rsp+248h] [rbp+148h]

  v38 = a2;
  v40 = a3;
  v53 = 0LL;
  v54 = 0;
  v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v50 = v7;
  v37 = 0LL;
  v39 = 0LL;
  v9 = 1;
  if ( *a3 > 8u && *a3 != 0x7FFF || (v10 = a3[1], v10 > 2) )
  {
    v11 = -2147024809;
    goto LABEL_46;
  }
  switch ( a3[2] )
  {
    case 1:
      v37 = 0LL;
      v11 = sub_18011073C(&v37, &v38, &v40);
      if ( v11 < 0 )
        goto LABEL_46;
      break;
    case 2:
      v37 = 0LL;
      v20 = sub_1801108E4(&v37, &v38, &v40);
      v11 = v20;
      if ( v20 < 0 )
      {
        v13 = 376;
LABEL_39:
        v12 = v20;
        goto LABEL_40;
      }
      break;
    case 3:
      v46 = 0LL;
      v47 = 0LL;
      v48 = 0LL;
      v49 = 10;
      v14 = sub_180111C9C(a1, v10, *a3, v8, (__int64)&v46);
      v11 = v14;
      if ( v14 < 0 )
      {
        v15 = 384;
LABEL_28:
        sub_18004BD84(
          (int)retaddr,
          v15,
          (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
          v14);
        goto LABEL_29;
      }
      if ( v47 )
      {
        v9 = 0;
        if ( !(_QWORD)v46 )
          sub_1800B8610(-2147467259);
        v16 = *(_QWORD *)(v46 + 16);
        v37 = v16;
        if ( v16 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
          v16 = v37;
        }
        v14 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v16 + 88LL))(v16, v38, v52);
        v11 = v14;
        if ( v14 < 0 )
        {
          v15 = 397;
          goto LABEL_28;
        }
        v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v37 + 72LL))(v37, v38);
        v11 = v14;
        if ( v14 < 0 )
        {
          v15 = 400;
          goto LABEL_28;
        }
        v41 = &v37;
        v42 = &v38;
        v43 = (__int64 *)v52;
        LOBYTE(v44) = 1;
        v17 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v37 + 96LL))(v37, v38, a3);
        v11 = v17;
        if ( v17 < 0 )
        {
          v18 = v17;
          v19 = 412;
LABEL_24:
          sub_18004BD84(
            (int)retaddr,
            v19,
            (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
            v18);
          LOBYTE(v44) = 0;
          sub_18011105C(&v41);
LABEL_29:
          sub_1800BC578((__int64 *)&v46);
          goto LABEL_46;
        }
        if ( !(unsigned __int8)sub_180113A88(a1, &v53) )
        {
          v11 = -2147467259;
          v18 = -2147467259;
          v19 = 417;
          goto LABEL_24;
        }
      }
      else
      {
        v37 = 0LL;
        v14 = sub_18011080C(&v37, &v38, &v40);
        v11 = v14;
        if ( v14 < 0 )
        {
          v15 = 423;
          goto LABEL_28;
        }
      }
      sub_1800BC578((__int64 *)&v46);
      break;
    default:
      v11 = -2147467263;
      v12 = -2147467263;
      v13 = 428;
LABEL_40:
      sub_18004BD84(
        (int)retaddr,
        v13,
        (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
        v12);
      goto LABEL_46;
  }
  v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 64LL))(v37);
  v22 = v39;
  v39 = 0LL;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  v20 = (**(__int64 (__fastcall ***)(__int64, const IID *, __int64 *))v37)(v37, &stru_18015B900, &v39);
  v11 = v20;
  if ( v20 < 0 )
  {
    v13 = 435;
    goto LABEL_39;
  }
  v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v38 + 392LL))(v38, a1, v39);
  v11 = v20;
  if ( v20 < 0 )
  {
    v13 = 439;
    goto LABEL_39;
  }
  v41 = (__int64 *)a1;
  v42 = &v38;
  v43 = &v39;
  v44 = &v53;
  v45 = 1;
  LOBYTE(v23) = v9;
  v24 = sub_180111980(a1, v23, *a3, a3[1], v37, (__int64)&v53);
  v11 = v24;
  if ( v24 < 0 )
  {
    v25 = v24;
    v26 = 455;
LABEL_45:
    sub_18004BD84((int)retaddr, v26, (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp", v25);
    LOBYTE(v27) = 1;
    sub_180112CEC(a1, v38, v39, v27, (__int64)&v53);
LABEL_46:
    sub_18000F708(&v39);
    sub_18000F708(&v37);
    if ( v7 )
      LeaveCriticalSection(v7);
    return (unsigned int)v11;
  }
  if ( !(unsigned __int8)sub_180113A88(a1, &v53) )
  {
    v11 = -2147467259;
    v25 = -2147467259;
    v26 = 459;
    goto LABEL_45;
  }
  v45 = 0;
  v29 = v39;
  v30 = (__int64 *)(a1 + 984);
  v31 = (__int64 **)(a1 + 968);
  v32 = *(__int64 **)(a1 + 968);
  v33 = v32[1];
  if ( *(_BYTE *)(v33 + 25) )
    goto LABEL_57;
  v34 = *v30;
  do
  {
    if ( *(_QWORD *)(v33 + 32) >= v34 )
    {
      v32 = (__int64 *)v33;
      v33 = *(_QWORD *)v33;
    }
    else
    {
      v33 = *(_QWORD *)(v33 + 16);
    }
  }
  while ( !*(_BYTE *)(v33 + 25) );
  if ( v32 == *v31 || v34 < v32[4] )
  {
LABEL_57:
    v40 = (_QWORD *)(a1 + 984);
    v32 = (__int64 *)*sub_180110E94((__int64 *)(a1 + 968), &v51, v32, (__int64)v31, &v40);
  }
  v35 = (_QWORD *)v32[5];
  if ( v35 != (_QWORD *)v29 )
  {
    if ( v29 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
      v35 = (_QWORD *)v32[5];
    }
    v40 = v35;
    v32[5] = v29;
    sub_1800461B8((__int64 *)&v40);
  }
  *a4 = (*v30)++;
  sub_18000F708(&v39);
  sub_18000F708(&v37);
  if ( v7 )
    LeaveCriticalSection(v7);
  v36 = sub_180112944(a1, &v53, v21);
  v11 = v36;
  if ( v36 < 0 )
  {
    sub_18004BD84((int)retaddr, 472, (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp", v36);
    return (unsigned int)v11;
  }
  return 0LL;
}
