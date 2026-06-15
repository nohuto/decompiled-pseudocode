/*
 * XREFs of sub_180138B20 @ 0x180138B20
 * Callers:
 *     sub_1800661E0 @ 0x1800661E0 (sub_1800661E0.c)
 * Callees:
 *     sub_1800EA154 @ 0x1800EA154 (sub_1800EA154.c)
 *     sub_180138BF4 @ 0x180138BF4 (sub_180138BF4.c)
 */

__int64 __fastcall sub_180138B20(__int64 *a1, __int64 a2, char *a3)
{
  __int64 *v6; // rax
  unsigned __int64 v7; // r9
  char *v8; // rdx
  char *v9; // rcx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r8
  signed __int64 v12; // rcx
  unsigned __int16 v13; // r11
  int v14; // ecx
  bool v15; // sf
  _QWORD *v16; // rax
  char *v18; // [rsp+50h] [rbp+8h] BYREF
  char v19; // [rsp+68h] [rbp+20h] BYREF

  v6 = sub_1800EA154(a1, (__int64)a3);
  if ( v6 == (__int64 *)*a1 )
    goto LABEL_20;
  v8 = (char *)(v6 + 4);
  if ( (unsigned __int64)v6[7] >= 8 )
    v8 = (char *)v6[4];
  v9 = a3;
  if ( *((_QWORD *)a3 + 3) >= 8uLL )
    v9 = *(char **)a3;
  v10 = v6[6];
  v7 = *((_QWORD *)a3 + 2);
  v11 = v10;
  if ( v10 >= v7 )
    v11 = *((_QWORD *)a3 + 2);
  if ( v11 )
  {
    v12 = v9 - v8;
    while ( 1 )
    {
      v13 = *(_WORD *)&v8[v12];
      if ( v13 != *(_WORD *)v8 )
        break;
      v8 += 2;
      if ( !--v11 )
        goto LABEL_12;
    }
    v14 = v13 < *(_WORD *)v8 ? -1 : 1;
  }
  else
  {
LABEL_12:
    v14 = 0;
  }
  v15 = v14 < 0;
  if ( v14 )
    goto LABEL_17;
  if ( v7 < v10 )
    goto LABEL_20;
  if ( v7 <= v10 )
  {
    v15 = 0;
LABEL_17:
    if ( !v15 )
      goto LABEL_18;
LABEL_20:
    v18 = a3;
    v16 = (_QWORD *)sub_180138BF4((_DWORD)a1, (unsigned int)&v19, (_DWORD)v6, v7, (__int64)&v18);
    *(_BYTE *)(a2 + 8) = 1;
    *(_QWORD *)a2 = *v16;
    return a2;
  }
LABEL_18:
  *(_QWORD *)a2 = v6;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
