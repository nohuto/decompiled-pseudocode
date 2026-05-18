/*
 * XREFs of sub_1800C62A4 @ 0x1800C62A4
 * Callers:
 *     sub_1800BF6A4 @ 0x1800BF6A4 (sub_1800BF6A4.c)
 * Callees:
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_1800C62A4(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v4; // r14
  _QWORD *v5; // rdx
  unsigned __int64 v8; // rcx
  __int64 i; // r8
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rcx
  _QWORD *v13; // r8
  __int64 v14; // r12
  __int64 v15; // rsi
  _QWORD *v16; // rbp
  _QWORD *j; // rax
  _QWORD *v18; // rcx
  char *v19; // rdx
  char *v20; // r11
  __int64 v21; // r10
  signed __int64 v22; // r11
  unsigned __int16 v23; // cx
  int v24; // ecx
  _QWORD *v25; // rdx
  _QWORD *v26; // rcx
  char *v27; // rcx
  char *v28; // r11
  __int64 v29; // rsi
  signed __int64 v30; // r11
  unsigned __int16 v31; // r10
  int v32; // ecx

  v4 = a3[2];
  v5 = a3;
  if ( a3[3] >= 8uLL )
    v5 = (_QWORD *)*a3;
  v8 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; v8 < 2 * v4; i = 0x100000001B3LL * (v10 ^ i) )
    v10 = *((unsigned __int8 *)v5 + v8++);
  v11 = a1[3];
  v12 = i & a1[6];
  v13 = (_QWORD *)a1[1];
  v14 = 2 * v12;
  v15 = 2 * v12;
  v16 = *(_QWORD **)(v11 + 16 * v12);
  for ( j = v16; ; j = (_QWORD *)*j )
  {
    v18 = v16 == v13 ? v13 : **(_QWORD ***)(v11 + 8 * v15 + 8);
    if ( j == v18 )
      break;
    v19 = (char *)a3;
    if ( a3[3] >= 8uLL )
      v19 = (char *)*a3;
    v20 = (char *)(j + 2);
    if ( j[5] >= 8uLL )
      v20 = (char *)j[2];
    v21 = j[4];
    if ( v21 == v4 )
    {
      if ( v21 )
      {
        v22 = v20 - v19;
        while ( 1 )
        {
          v23 = *(_WORD *)&v19[v22];
          if ( v23 != *(_WORD *)v19 )
            break;
          v19 += 2;
          if ( !--v21 )
            goto LABEL_19;
        }
        v24 = v23 < *(_WORD *)v19 ? -1 : 1;
      }
      else
      {
LABEL_19:
        v24 = 0;
      }
      if ( !v24 )
      {
        v25 = j;
        while ( 1 )
        {
          v26 = v16 == v13 ? v13 : **(_QWORD ***)(v11 + 8 * v14 + 8);
          if ( j == v26 )
            break;
          v27 = (char *)(j + 2);
          if ( j[5] >= 8uLL )
            v27 = (char *)j[2];
          v28 = (char *)a3;
          if ( a3[3] >= 8uLL )
            v28 = (char *)*a3;
          if ( v4 != j[4] )
            break;
          v29 = v4;
          if ( v4 )
          {
            v30 = v28 - v27;
            while ( 1 )
            {
              v31 = *(_WORD *)&v27[v30];
              if ( v31 != *(_WORD *)v27 )
                break;
              v27 += 2;
              if ( !--v29 )
                goto LABEL_37;
            }
            v32 = v31 < *(_WORD *)v27 ? -1 : 1;
          }
          else
          {
LABEL_37:
            v32 = 0;
          }
          if ( v32 )
            break;
          j = (_QWORD *)*j;
        }
        if ( v25 != j )
        {
          *a2 = v25;
          a2[1] = j;
          return a2;
        }
        break;
      }
    }
  }
  *a2 = v13;
  a2[1] = v13;
  return a2;
}
