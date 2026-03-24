/*
 * XREFs of BgpGxBlendRectangle @ 0x1409F73F0
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x1403B1888 (BgpTxtDisplayCharacter.c)
 *     BgpTxtDisplayString @ 0x1409F7784 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpGxBlendColor @ 0x1403B2018 (BgpGxBlendColor.c)
 *     BgpGxRectangleDestroy @ 0x1409F2290 (BgpGxRectangleDestroy.c)
 *     BgpGxRectangleCreate @ 0x1409F32C0 (BgpGxRectangleCreate.c)
 */

__int64 __fastcall BgpGxBlendRectangle(unsigned int *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int *v4; // rbx
  int v5; // edi
  unsigned int **v6; // rsi
  int *v7; // r15
  __int64 v8; // rbp
  unsigned int *v9; // r14
  unsigned int v10; // r11d
  unsigned int v11; // r10d
  int v12; // r12d
  int v13; // ecx
  int v14; // eax
  __int64 v15; // r13
  unsigned int v16; // r15d
  unsigned int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // r12
  unsigned int v20; // r14d
  __int64 v21; // rbp
  __int64 v22; // rsi
  bool v23; // zf
  int v25; // [rsp+20h] [rbp-78h]
  unsigned int *v26; // [rsp+28h] [rbp-70h] BYREF
  unsigned int v27; // [rsp+30h] [rbp-68h]
  unsigned __int64 v28; // [rsp+38h] [rbp-60h] BYREF
  int v29; // [rsp+40h] [rbp-58h]
  __int64 v30; // [rsp+48h] [rbp-50h]
  __int64 v31; // [rsp+50h] [rbp-48h]
  __int64 v33; // [rsp+A8h] [rbp+10h]
  unsigned int **v34; // [rsp+B8h] [rbp+20h]

  v34 = (unsigned int **)a4;
  v33 = a2;
  v29 = 0;
  v4 = 0LL;
  v5 = 0;
  v26 = 0LL;
  v6 = (unsigned int **)a4;
  v7 = (int *)a3;
  v8 = a2;
  v9 = a1;
  if ( !a4
    || (v10 = *a1) == 0
    || (a3 = *(unsigned int *)a2, !(_DWORD)a3)
    || (v11 = a1[1]) == 0
    || (a4 = *(unsigned int *)(a2 + 4), !(_DWORD)a4)
    || (a2 = 32LL, a1[2] != 32)
    || *(_DWORD *)(v8 + 8) != 32
    || (v12 = *v7, v11 < *v7 + (int)a4)
    || (v13 = v7[1], v10 < v13 + (int)a3) )
  {
    v5 = -1073741811;
    goto LABEL_25;
  }
  v4 = *v6;
  if ( *v6 )
  {
    if ( v4[1] == (_DWORD)a4 && *v4 == (_DWORD)a3 )
    {
LABEL_15:
      a4 = *v4;
      a3 = *((_QWORD *)v4 + 3);
      v15 = *(_QWORD *)(v8 + 24);
      v16 = v4[2] >> 3;
      v31 = a3;
      LODWORD(v26) = v16;
      v25 = a4;
      a2 = *((_QWORD *)v9 + 3) + v16 * (v12 + v11 * v13);
      v30 = a2;
      if ( (_DWORD)a4 )
      {
        v17 = v4[1];
        v18 = v17;
        do
        {
          v27 = 0;
          v19 = v15;
          if ( v17 )
          {
            v20 = v27;
            v28 = v16;
            v21 = a2 - v15;
            v22 = a3 - v15;
            do
            {
              *(_DWORD *)(v22 + v19) = BgpGxBlendColor(*(_DWORD *)(v19 + v21), *(_DWORD *)v19, *(_BYTE *)(v19 + 3));
              ++v20;
              v18 = v4[1];
              v19 += v16;
            }
            while ( v20 < v18 );
            v9 = a1;
            v8 = v33;
            v16 = (unsigned int)v26;
            a2 = v30;
            a3 = v31;
            LODWORD(a4) = v25;
          }
          v17 = v18;
          v15 += v16 * *(_DWORD *)(v8 + 4);
          a2 += v16 * v9[1];
          v30 = a2;
          a3 += v16 * v18;
          v23 = (_DWORD)a4 == 1;
          a4 = (unsigned int)(a4 - 1);
          v31 = a3;
          v25 = a4;
        }
        while ( !v23 );
        v6 = v34;
      }
LABEL_25:
      if ( v5 >= 0 )
        goto LABEL_29;
      goto LABEL_26;
    }
    v5 = -1073741670;
  }
  else
  {
    v28 = __PAIR64__(a3, a4);
    v14 = BgpGxRectangleCreate(&v28, 32, (__int64 *)&v26);
    v4 = v26;
    v5 = v14;
    if ( v14 >= 0 )
    {
      v11 = v9[1];
      v13 = v7[1];
      v12 = *v7;
      goto LABEL_15;
    }
  }
LABEL_26:
  if ( *v6 )
    return (unsigned int)v5;
  if ( v4 )
  {
    BgpGxRectangleDestroy((__int64)v4, a2, a3, (_DWORD *)a4);
    v4 = 0LL;
  }
LABEL_29:
  if ( !*v6 )
    *v6 = v4;
  return (unsigned int)v5;
}
