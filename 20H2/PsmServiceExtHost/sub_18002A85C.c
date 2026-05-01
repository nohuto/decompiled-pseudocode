/*
 * XREFs of sub_18002A85C @ 0x18002A85C
 * Callers:
 *     sub_18002A0DC @ 0x18002A0DC (sub_18002A0DC.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18002A85C(
        unsigned __int8 *a1,
        int *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6)
{
  int v6; // r10d
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r9
  int v9; // ecx
  unsigned __int64 v10; // r11
  int v11; // r10d
  char v12; // dl
  __int64 v13; // rax
  int v14; // ecx
  unsigned __int64 v15; // rax
  int v16; // ecx

  v6 = *a2;
  v7 = a4;
  if ( (*a2 & 6) != 0 )
    a3 = *((_QWORD *)a1 + 1);
  v8 = *((_QWORD *)a1 + 1) + *((_QWORD *)a1 + 2) - a3;
  if ( v8 >= a5 )
    v8 = a5;
  if ( (v6 & 8) != 0 )
  {
    v13 = a6;
    *(_OWORD *)a6 = 0LL;
    *(_BYTE *)a6 = 5;
    goto LABEL_11;
  }
  v9 = *a1 - 1;
  if ( !v9 )
  {
    v10 = a5 - v8;
    v11 = *a2 & 1;
    if ( !v11 )
      v10 = a3;
    a3 = v10;
    v12 = (v11 != 0) + 1;
    if ( v10 )
      goto LABEL_10;
    goto LABEL_22;
  }
  v14 = v9 - 1;
  if ( !v14 )
  {
    v12 = 1;
    if ( (v6 & 1) != 0 )
    {
      v12 = 2;
    }
    else
    {
      v15 = v7;
      if ( v7 >= a3 )
        v15 = a3;
      a3 = v15;
    }
    if ( !a3 )
    {
      v12 = 3;
      a3 = 1000LL;
    }
    goto LABEL_10;
  }
  v16 = v14 - 1;
  if ( !v16 )
  {
    v12 = 4 - (a3 != 0);
    goto LABEL_10;
  }
  if ( v16 == 1 )
  {
    a3 = 0LL;
LABEL_22:
    v12 = 4;
LABEL_10:
    v13 = a6;
    *(_OWORD *)a6 = 0LL;
    *(_BYTE *)a6 = v12;
    *(_QWORD *)(a6 + 8) = a3;
LABEL_11:
    *(_QWORD *)(v13 + 16) = v8;
  }
}
