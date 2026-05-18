/*
 * XREFs of sub_1801060C8 @ 0x1801060C8
 * Callers:
 *     sub_18010633C @ 0x18010633C (sub_18010633C.c)
 * Callees:
 *     sub_180105DF4 @ 0x180105DF4 (sub_180105DF4.c)
 *     sub_1801063D0 @ 0x1801063D0 (sub_1801063D0.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_1801060C8(_QWORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  _QWORD *v8; // rsi
  _QWORD *v9; // rsi
  _QWORD *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  bool v14; // zf
  _QWORD *v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  _QWORD *result; // rax
  _BYTE v35[8]; // [rsp+20h] [rbp-58h] BYREF

  v6 = (_QWORD *)(a2 + 16 * ((__int64)((__int64)a3 - a2) >> 5));
  sub_180105DF4(a2, (__int64)v6, (__int64)(a3 - 2));
  v7 = v6 + 2;
  if ( a2 < (unsigned __int64)v6 )
  {
    v8 = v6;
    do
    {
      v8 -= 2;
      if ( (unsigned __int8)sub_1801063D0(v35, v8, v6) )
        break;
      if ( (unsigned __int8)sub_1801063D0(v35, v6, v8) )
        break;
      v6 = v8;
    }
    while ( a2 < (unsigned __int64)v8 );
  }
  while ( v7 < a3 && !(unsigned __int8)sub_1801063D0(v35, v7, v6) && !(unsigned __int8)sub_1801063D0(v35, v6, v7) )
    v7 += 2;
  v9 = v7;
  v10 = v6;
  while ( 1 )
  {
    while ( v9 < a3 )
    {
      if ( (unsigned __int8)sub_1801063D0(v35, v6, v9) )
        goto LABEL_17;
      if ( (unsigned __int8)sub_1801063D0(v35, v9, v6) )
        break;
      if ( v7 != v9 )
      {
        v11 = *v7;
        *v7 = *v9;
        v12 = v9[1];
        *v9 = v11;
        v13 = v7[1];
        v7[1] = v12;
        v9[1] = v13;
      }
      v7 += 2;
LABEL_17:
      v9 += 2;
    }
    v14 = v10 == (_QWORD *)a2;
    if ( (unsigned __int64)v10 > a2 )
    {
      v15 = v10 - 2;
      do
      {
        if ( !(unsigned __int8)sub_1801063D0(v35, v15, v6) )
        {
          if ( (unsigned __int8)sub_1801063D0(v35, v6, v15) )
            break;
          v6 -= 2;
          if ( v6 != v15 )
          {
            v16 = *v6;
            *v6 = *v15;
            v17 = v15[1];
            *v15 = v16;
            v18 = v6[1];
            v6[1] = v17;
            v15[1] = v18;
          }
        }
        v10 -= 2;
        v15 -= 2;
      }
      while ( a2 < (unsigned __int64)v10 );
      v14 = v10 == (_QWORD *)a2;
    }
    if ( v14 )
      break;
    v10 -= 2;
    if ( v9 != a3 )
    {
      v31 = *v9;
      *v9 = *v10;
      v32 = v10[1];
      *v10 = v31;
      v33 = v9[1];
      v9[1] = v32;
      v10[1] = v33;
      goto LABEL_17;
    }
    v6 -= 2;
    if ( v10 != v6 )
    {
      v25 = *v10;
      *v10 = *v6;
      v26 = v6[1];
      *v6 = v25;
      v27 = v10[1];
      v10[1] = v26;
      v6[1] = v27;
    }
    v28 = *v6;
    v7 -= 2;
    *v6 = *v7;
    v29 = v7[1];
    *v7 = v28;
    v30 = v6[1];
    v6[1] = v29;
    v7[1] = v30;
  }
  if ( v9 != a3 )
  {
    if ( v7 != v9 )
    {
      v19 = *v6;
      *v6 = *v7;
      v20 = v7[1];
      *v7 = v19;
      v21 = v6[1];
      v6[1] = v20;
      v7[1] = v21;
    }
    v22 = *v6;
    v7 += 2;
    *v6 = *v9;
    v23 = v9[1];
    *v9 = v22;
    v24 = v6[1];
    v6[1] = v23;
    v6 += 2;
    v9[1] = v24;
    goto LABEL_17;
  }
  *a1 = v6;
  result = a1;
  a1[1] = v7;
  return result;
}
