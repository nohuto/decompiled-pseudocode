/*
 * XREFs of sub_1800308A0 @ 0x1800308A0
 * Callers:
 *     sub_18000AC70 @ 0x18000AC70 (sub_18000AC70.c)
 *     sub_180134A80 @ 0x180134A80 (sub_180134A80.c)
 *     sub_180134C8C @ 0x180134C8C (sub_180134C8C.c)
 *     sub_180135EAC @ 0x180135EAC (sub_180135EAC.c)
 *     sub_180135FC8 @ 0x180135FC8 (sub_180135FC8.c)
 *     sub_1801374C0 @ 0x1801374C0 (sub_1801374C0.c)
 *     sub_1801375A0 @ 0x1801375A0 (sub_1801375A0.c)
 *     sub_1801376CC @ 0x1801376CC (sub_1801376CC.c)
 *     sub_1801380CC @ 0x1801380CC (sub_1801380CC.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800308A0(_QWORD *a1, _QWORD *a2, char *a3)
{
  unsigned __int64 v3; // r15
  char *v4; // rbx
  __int64 v5; // r11
  char *v8; // r10
  unsigned __int64 v9; // rax
  __int64 i; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rbp
  __int64 v19; // r14
  _QWORD *v20; // rax
  char *v21; // rdx
  char *v22; // r8
  unsigned __int64 v23; // rdi
  char *v24; // r10
  __int64 v25; // r9
  signed __int64 v26; // r10
  signed __int64 v27; // rbx
  _QWORD *result; // rax

  v3 = *((_QWORD *)a3 + 3);
  v4 = a3;
  v5 = *((_QWORD *)a3 + 2);
  v8 = a3;
  if ( v3 >= 8 )
    v8 = *(char **)a3;
  v9 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; v9 < 2 * v5; i = 0x100000001B3LL * (v11 ^ i) )
    v11 = (unsigned __int8)v8[v9++];
  v12 = a1[3];
  v13 = a1[6];
  v14 = (_QWORD *)a1[1];
  v15 = i & v13;
  v16 = 2 * (i & v13);
  v17 = *(_QWORD **)(v12 + 16 * v15);
  v18 = *(_QWORD **)(v12 + 8 * v16);
  v19 = v12 + 8 * v16;
  while ( 1 )
  {
    v20 = v18 == v14 ? v14 : **(_QWORD ***)(v19 + 8);
    if ( v17 == v20 )
      break;
    v21 = (char *)(v17 + 2);
    v22 = v4;
    if ( v3 >= 8 )
      v22 = *(char **)v4;
    v23 = v17[5];
    v24 = (char *)(v17 + 2);
    if ( v23 >= 8 )
      v24 = *(char **)v21;
    v25 = v17[4];
    if ( v25 == v5 )
    {
      if ( !v25 )
      {
LABEL_18:
        if ( v23 >= 8 )
          v21 = *(char **)v21;
        if ( v3 >= 8 )
          v4 = *(char **)v4;
        if ( v5 )
        {
          v27 = v4 - v21;
          while ( *(_WORD *)&v21[v27] == *(_WORD *)v21 )
          {
            v21 += 2;
            if ( !--v5 )
              goto LABEL_26;
          }
        }
        else
        {
LABEL_26:
          v14 = v17;
        }
        break;
      }
      v26 = v24 - v22;
      while ( *(_WORD *)&v22[v26] == *(_WORD *)v22 )
      {
        v22 += 2;
        if ( !--v25 )
          goto LABEL_18;
      }
    }
    v17 = (_QWORD *)*v17;
  }
  result = a2;
  *a2 = v14;
  return result;
}
