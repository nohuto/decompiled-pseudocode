/*
 * XREFs of sub_1800DAEE4 @ 0x1800DAEE4
 * Callers:
 *     sub_1800DB3B4 @ 0x1800DB3B4 (sub_1800DB3B4.c)
 * Callees:
 *     sub_1800DAC68 @ 0x1800DAC68 (sub_1800DAC68.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800DAEE4(
        _QWORD *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        unsigned __int8 (__fastcall *a4)(_QWORD *, _QWORD *))
{
  _QWORD *v6; // rbx
  _QWORD *v8; // rdi
  _QWORD *v9; // rsi
  _QWORD *v10; // rsi
  _QWORD *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  bool v15; // zf
  _QWORD *v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  _QWORD *result; // rax

  v6 = (_QWORD *)(a2 + 16 * ((__int64)((__int64)a3 - a2) >> 5));
  sub_1800DAC68(a2, (__int64)v6, (__int64)(a3 - 2));
  v8 = v6 + 2;
  if ( a2 < (unsigned __int64)v6 )
  {
    v9 = v6;
    do
    {
      v9 -= 2;
      if ( a4(v9, v6) )
        break;
      if ( a4(v6, v9) )
        break;
      v6 = v9;
    }
    while ( a2 < (unsigned __int64)v9 );
  }
  while ( v8 < a3 && !a4(v8, v6) && !a4(v6, v8) )
    v8 += 2;
  v10 = v8;
  v11 = v6;
  while ( 1 )
  {
    while ( v10 < a3 )
    {
      if ( a4(v6, v10) )
        goto LABEL_17;
      if ( a4(v10, v6) )
        break;
      if ( v8 != v10 )
      {
        v12 = *v8;
        *v8 = *v10;
        v13 = v10[1];
        *v10 = v12;
        v14 = v8[1];
        v8[1] = v13;
        v10[1] = v14;
      }
      v8 += 2;
LABEL_17:
      v10 += 2;
    }
    v15 = v11 == (_QWORD *)a2;
    if ( (unsigned __int64)v11 > a2 )
    {
      v16 = v11 - 2;
      do
      {
        if ( !a4(v16, v6) )
        {
          if ( a4(v6, v16) )
            break;
          v6 -= 2;
          if ( v6 != v16 )
          {
            v17 = *v6;
            *v6 = *v16;
            v18 = v16[1];
            *v16 = v17;
            v19 = v6[1];
            v6[1] = v18;
            v16[1] = v19;
          }
        }
        v11 -= 2;
        v16 -= 2;
      }
      while ( a2 < (unsigned __int64)v11 );
      v15 = v11 == (_QWORD *)a2;
    }
    if ( v15 )
      break;
    v11 -= 2;
    if ( v10 != a3 )
    {
      v32 = *v10;
      *v10 = *v11;
      v33 = v11[1];
      *v11 = v32;
      v34 = v10[1];
      v10[1] = v33;
      v11[1] = v34;
      goto LABEL_17;
    }
    v6 -= 2;
    if ( v11 != v6 )
    {
      v26 = *v11;
      *v11 = *v6;
      v27 = v6[1];
      *v6 = v26;
      v28 = v11[1];
      v11[1] = v27;
      v6[1] = v28;
    }
    v29 = *v6;
    v8 -= 2;
    *v6 = *v8;
    v30 = v8[1];
    *v8 = v29;
    v31 = v6[1];
    v6[1] = v30;
    v8[1] = v31;
  }
  if ( v10 != a3 )
  {
    if ( v8 != v10 )
    {
      v20 = *v6;
      *v6 = *v8;
      v21 = v8[1];
      *v8 = v20;
      v22 = v6[1];
      v6[1] = v21;
      v8[1] = v22;
    }
    v23 = *v6;
    v8 += 2;
    *v6 = *v10;
    v24 = v10[1];
    *v10 = v23;
    v25 = v6[1];
    v6[1] = v24;
    v6 += 2;
    v10[1] = v25;
    goto LABEL_17;
  }
  result = a1;
  *a1 = v6;
  a1[1] = v8;
  return result;
}
