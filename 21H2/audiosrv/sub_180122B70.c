/*
 * XREFs of sub_180122B70 @ 0x180122B70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_180047458 @ 0x180047458 (sub_180047458.c)
 *     sub_18004B9B4 @ 0x18004B9B4 (sub_18004B9B4.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006871C @ 0x18006871C (sub_18006871C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180122300 @ 0x180122300 (sub_180122300.c)
 */

__int64 __fastcall sub_180122B70(_DWORD *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int v4; // eax
  int v6; // ecx
  int v9; // r14d
  int v10; // esi
  bool v11; // cf
  int v12; // eax
  unsigned int v13; // r12d
  __int64 v14; // rbx
  __int64 v15; // rsi
  int v16; // r15d
  __int64 v17; // rdi
  __int64 v18; // rsi
  int v19; // eax
  int v20; // esi
  __int64 *v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // rbx
  int v24; // eax
  int v25; // ebx
  __int64 v26; // rbx
  int v27; // eax
  int v28; // ebx
  __int64 v29; // rax
  __int64 v31; // [rsp+30h] [rbp-49h] BYREF
  __int64 v32; // [rsp+38h] [rbp-41h] BYREF
  __int64 v33; // [rsp+40h] [rbp-39h] BYREF
  int v34; // [rsp+48h] [rbp-31h]
  __int64 v35; // [rsp+50h] [rbp-29h] BYREF
  __int64 v36; // [rsp+58h] [rbp-21h] BYREF
  __int64 v37; // [rsp+60h] [rbp-19h] BYREF
  __int64 v38; // [rsp+68h] [rbp-11h] BYREF
  __int64 v39; // [rsp+70h] [rbp-9h] BYREF
  int v40; // [rsp+78h] [rbp-1h]
  unsigned int v41; // [rsp+7Ch] [rbp+3h]
  _DWORD *v42; // [rsp+80h] [rbp+7h]
  __int64 v43[9]; // [rsp+88h] [rbp+Fh] BYREF
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+5Fh]
  int v45; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v46; // [rsp+E8h] [rbp+6Fh]
  unsigned int v47; // [rsp+F0h] [rbp+77h]
  __int64 *v48; // [rsp+F8h] [rbp+7Fh]

  v48 = a4;
  v46 = a2;
  v4 = a1[10];
  v6 = a1[18];
  if ( v4 )
  {
    v9 = v6 - 1;
    v10 = -1;
  }
  else
  {
    v9 = 0;
    v10 = v6;
  }
  v11 = v4 != 0;
  v34 = v10;
  v12 = a1[9];
  v13 = 1;
  v14 = a3;
  v31 = a3;
  v41 = v11 ? -1 : 1;
  v40 = v12 != 0 ? v6 - 1 : 0;
  v47 = v10 - v41;
  sub_180047458(&v31);
  v43[0] = a2;
  sub_180047458(v43);
  v33 = 0LL;
  if ( v9 != v10 )
  {
    v15 = (__int64)(a1 + 16);
    v16 = -2005073917;
    v42 = a1 + 16;
    while ( 1 )
    {
      v39 = v14;
      sub_180047458(&v39);
      v17 = v14;
      if ( v9 == v40 )
        v17 = v46;
      v37 = v17;
      sub_180047458(&v37);
      v36 = 0LL;
      v18 = *(_QWORD *)sub_18004B9B4(v15, v9);
      sub_1800461B8(&v36);
      v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v18 + 64LL))(
              v18,
              v17,
              v14,
              &v36);
      v20 = v19;
      if ( v19 == -2005073917 )
      {
        v15 = (__int64)v42;
        v38 = 0LL;
        v45 = 0;
        v22 = (_QWORD *)sub_18004B9B4((__int64)v42, v9);
        if ( (int)sub_180122300(v22, &v38) >= 0
          && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v38 + 24LL))(v38, &v45) >= 0
          && (v45 & 1) != 0 )
        {
          v35 = 0LL;
          v23 = *(_QWORD *)sub_18004B9B4(v15, v9);
          sub_1800461B8(&v35);
          v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v23 + 56LL))(
                  v23,
                  0LL,
                  v17,
                  &v35);
          v25 = v24;
          if ( v24 < 0 )
          {
            sub_18004BD84(
              (int)retaddr,
              1045,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              v24);
            v16 = v25;
LABEL_35:
            sub_1800461B8(&v35);
            sub_1800461B8(&v38);
LABEL_36:
            sub_1800461B8(&v36);
            sub_1800461B8(&v37);
            sub_1800461B8(&v39);
            goto LABEL_38;
          }
          v32 = 0LL;
          v26 = *(_QWORD *)sub_18004B9B4(v15, v9);
          sub_1800461B8(&v32);
          v27 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v26 + 64LL))(
                  v26,
                  v35,
                  v35,
                  &v32);
          v28 = v27;
          if ( v27 < 0 )
          {
            sub_18004BD84(
              (int)retaddr,
              1049,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              v27);
            v16 = v28;
            sub_1800461B8(&v32);
            goto LABEL_35;
          }
          sub_18006871C(&v31, &v32);
          if ( v9 == v47 )
            sub_18006871C(&v33, &v32);
          sub_1800461B8(&v32);
          sub_1800461B8(&v35);
          v14 = v31;
        }
        sub_1800461B8(&v38);
      }
      else
      {
        if ( v19 )
        {
          if ( v19 != 1 )
          {
            if ( v19 < 0 )
              sub_18004BD84(
                (int)retaddr,
                1062,
                (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                v19);
            v16 = v20;
            goto LABEL_36;
          }
          if ( v9 != v47 )
          {
            sub_18004BD84(
              (int)retaddr,
              1022,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              -2005073917);
            goto LABEL_36;
          }
          sub_18006871C(&v33, &v36);
          v21 = &v33;
        }
        else
        {
          v21 = &v39;
        }
        if ( v17 )
          v21 = &v37;
        sub_18006871C(&v31, v21);
        v14 = v31;
        v15 = (__int64)v42;
      }
      sub_1800461B8(&v36);
      sub_1800461B8(&v37);
      sub_1800461B8(&v39);
      v9 += v41;
      if ( v9 == v34 )
      {
        v29 = v33;
        if ( !v33 )
          break;
        v33 = 0LL;
        *v48 = v29;
        goto LABEL_39;
      }
    }
  }
  *v48 = a3;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v16 = 0;
LABEL_38:
  v13 = v16;
LABEL_39:
  sub_1800461B8(&v33);
  sub_1800461B8(v43);
  sub_1800461B8(&v31);
  return v13;
}
