/*
 * XREFs of sub_180122780 @ 0x180122780
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_180047458 @ 0x180047458 (sub_180047458.c)
 *     sub_18004B9B4 @ 0x18004B9B4 (sub_18004B9B4.c)
 *     sub_18004BB48 @ 0x18004BB48 (sub_18004BB48.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006871C @ 0x18006871C (sub_18006871C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180122300 @ 0x180122300 (sub_180122300.c)
 */

__int64 __fastcall sub_180122780(_DWORD *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v5; // rsi
  int v6; // ecx
  int v7; // eax
  int v8; // r14d
  int v9; // r15d
  unsigned int v10; // r12d
  int v11; // r13d
  bool v12; // zf
  int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rsi
  int v17; // r15d
  __int64 v18; // rdi
  __int64 v19; // rsi
  int v20; // eax
  int v21; // esi
  __int64 *v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rdi
  int v25; // eax
  int v26; // ebx
  __int64 v27; // rbx
  int v28; // eax
  int v29; // ebx
  __int64 v30; // rax
  __int64 v32; // [rsp+38h] [rbp-49h] BYREF
  __int64 v33; // [rsp+40h] [rbp-41h] BYREF
  __int64 v34; // [rsp+48h] [rbp-39h] BYREF
  int v35; // [rsp+50h] [rbp-31h] BYREF
  int v36; // [rsp+54h] [rbp-2Dh]
  __int64 v37; // [rsp+58h] [rbp-29h] BYREF
  __int64 v38; // [rsp+60h] [rbp-21h] BYREF
  __int64 v39; // [rsp+68h] [rbp-19h] BYREF
  __int64 v40; // [rsp+70h] [rbp-11h] BYREF
  __int64 v41; // [rsp+78h] [rbp-9h] BYREF
  int v42; // [rsp+80h] [rbp-1h]
  _DWORD *v43; // [rsp+88h] [rbp+7h]
  __int64 v44[9]; // [rsp+90h] [rbp+Fh] BYREF
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+5Fh]
  int v46; // [rsp+E8h] [rbp+67h]

  v5 = a3;
  v6 = a1[10];
  v7 = a1[18];
  if ( v6 )
  {
    v8 = v7 - 1;
    v9 = -1;
  }
  else
  {
    v8 = 0;
    v9 = a1[18];
  }
  v36 = v9;
  v10 = 1;
  v11 = v8;
  v12 = a1[9] == 0;
  v42 = v6 != 0 ? -1 : 1;
  if ( v12 )
  {
    v46 = 0;
  }
  else
  {
    v13 = v7 - 1;
    v46 = v7 - 1;
    if ( a1[9] == 1 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
      if ( (unsigned int)sub_18004BB48(v14) == 1 )
        v11 = v13;
    }
  }
  v15 = v5;
  v32 = v5;
  sub_180047458(&v32);
  v44[0] = a2;
  sub_180047458(v44);
  v34 = 0LL;
  if ( v8 != v9 )
  {
    v16 = (__int64)(a1 + 16);
    v17 = -2005073917;
    v43 = a1 + 16;
    while ( 1 )
    {
      v41 = v15;
      sub_180047458(&v41);
      v18 = v15;
      if ( v8 == v46 )
        v18 = a2;
      v39 = v18;
      sub_180047458(&v39);
      v38 = 0LL;
      v19 = *(_QWORD *)sub_18004B9B4(v16, v8);
      sub_1800461B8(&v38);
      v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v19 + 56LL))(
              v19,
              v18,
              v15,
              &v38);
      v21 = v20;
      if ( v20 == -2005073917 )
      {
        v16 = (__int64)v43;
        v40 = 0LL;
        v35 = 0;
        v23 = (_QWORD *)sub_18004B9B4((__int64)v43, v8);
        if ( (int)sub_180122300(v23, &v40) >= 0
          && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v40 + 24LL))(v40, &v35) >= 0
          && (v35 & 1) != 0 )
        {
          v33 = 0LL;
          v24 = *(_QWORD *)sub_18004B9B4(v16, v8);
          sub_1800461B8(&v33);
          v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v24 + 56LL))(
                  v24,
                  0LL,
                  v15,
                  &v33);
          v26 = v25;
          if ( v25 < 0 )
          {
            sub_18004BD84(
              (int)retaddr,
              921,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              v25);
            v17 = v26;
LABEL_40:
            sub_1800461B8(&v33);
            sub_1800461B8(&v40);
LABEL_41:
            sub_1800461B8(&v38);
            sub_1800461B8(&v39);
            sub_1800461B8(&v41);
            goto LABEL_44;
          }
          if ( v8 == v11 )
            sub_18006871C(&v34, &v33);
          v37 = 0LL;
          v27 = *(_QWORD *)sub_18004B9B4(v16, v8);
          sub_1800461B8(&v37);
          v28 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v27 + 64LL))(
                  v27,
                  v33,
                  v33,
                  &v37);
          v29 = v28;
          if ( v28 < 0 )
          {
            sub_18004BD84(
              (int)retaddr,
              931,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              v28);
            v17 = v29;
            sub_1800461B8(&v37);
            goto LABEL_40;
          }
          sub_18006871C(&v32, &v37);
          sub_1800461B8(&v37);
          sub_1800461B8(&v33);
          v15 = v32;
        }
        sub_1800461B8(&v40);
      }
      else
      {
        if ( v20 )
        {
          if ( v20 != 1 )
          {
            if ( v20 < 0 )
              sub_18004BD84(
                (int)retaddr,
                938,
                (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                v20);
            v17 = v21;
            goto LABEL_41;
          }
          if ( v8 != v11 )
          {
            sub_18004BD84(
              (int)retaddr,
              897,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              -2005073917);
            goto LABEL_41;
          }
          sub_18006871C(&v34, &v38);
          v22 = &v34;
        }
        else
        {
          v22 = &v41;
        }
        if ( v18 )
          v22 = &v39;
        sub_18006871C(&v32, v22);
        v15 = v32;
        v16 = (__int64)v43;
      }
      sub_1800461B8(&v38);
      sub_1800461B8(&v39);
      sub_1800461B8(&v41);
      v8 += v42;
      if ( v8 == v36 )
      {
        v30 = v34;
        if ( v34 )
        {
          v34 = 0LL;
          *a4 = v30;
          goto LABEL_45;
        }
        v5 = a3;
        break;
      }
    }
  }
  *a4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v17 = 0;
LABEL_44:
  v10 = v17;
LABEL_45:
  sub_1800461B8(&v34);
  sub_1800461B8(v44);
  sub_1800461B8(&v32);
  return v10;
}
