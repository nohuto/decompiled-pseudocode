/*
 * XREFs of ?vSolidFillRow1@@YAXPEAU_ROW@@KJPEAEKJK@Z @ 0x1C0147430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSolidFillRow1(
        struct _ROW *a1,
        unsigned int a2,
        int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        int a6,
        char a7)
{
  __int64 v7; // r10
  __int64 v9; // r15
  unsigned __int8 *v10; // r9
  char v11; // r14
  int v12; // ebp
  int v13; // r12d
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rbp
  __int64 v17; // r12
  int v18; // ebx
  unsigned int v19; // ecx
  unsigned __int8 *v20; // r10
  unsigned __int64 v21; // r8
  int v22; // edx

  if ( a2 )
  {
    v7 = a6;
    v9 = a2;
    v10 = &a4[a6 * a3];
    v11 = 5 - a7;
    while ( 1 )
    {
      v12 = *((_DWORD *)a1 + 1);
      v13 = v12 - *(_DWORD *)a1;
      v14 = (unsigned int)(*(int *)a1 >> v11);
      v15 = (*(_DWORD *)a1 << a7) & 0x1F;
      v16 = (unsigned int)(v12 >> v11);
      v17 = ((unsigned __int8)(*(_DWORD *)a1 << a7) + (unsigned __int8)(v13 << a7)) & 0x1F;
      v18 = ~aulMsk[v17];
      if ( (_DWORD)v14 == (_DWORD)v16 || (_DWORD)v15 )
      {
        v22 = v18 & aulMsk[v15];
        if ( (_DWORD)v14 != (_DWORD)v16 )
          v22 = aulMsk[v15];
        *(_DWORD *)&v10[4 * v14] = a5 & v22 | *(_DWORD *)&v10[4 * v14] & ~v22;
        if ( (_DWORD)v14 == (_DWORD)v16 )
          goto LABEL_15;
        v14 = (unsigned int)(v14 + 1);
      }
      v19 = 4 * (v16 - v14);
      if ( v19 )
        break;
LABEL_13:
      if ( (_DWORD)v17 )
        *(_DWORD *)&v10[4 * v16] = a5 & v18 | *(_DWORD *)&v10[4 * v16] & ~v18;
LABEL_15:
      a1 = (struct _ROW *)((char *)a1 + 8);
      v10 += v7;
      if ( !--v9 )
        return;
    }
    v20 = &v10[4 * v14];
    v21 = (unsigned __int64)v19 >> 2;
    if ( v21 )
    {
      if ( ((unsigned __int8)v20 & 4) == 0 )
        goto LABEL_10;
      *(_DWORD *)v20 = a5;
      if ( --v21 )
      {
        v20 += 4;
LABEL_10:
        memset64(v20, a5 | ((unsigned __int64)a5 << 32), v21 >> 1);
        if ( (v21 & 1) != 0 )
          *(_DWORD *)&v20[4 * v21 - 4] = a5;
      }
    }
    v7 = a6;
    goto LABEL_13;
  }
}
