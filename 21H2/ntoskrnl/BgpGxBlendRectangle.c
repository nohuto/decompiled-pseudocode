/*
 * XREFs of BgpGxBlendRectangle @ 0x1409F83F0
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x1403B19F8 (BgpTxtDisplayCharacter.c)
 *     BgpTxtDisplayString @ 0x1409F8784 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpGxBlendColor @ 0x1403B2188 (BgpGxBlendColor.c)
 *     BgpGxRectangleDestroy @ 0x1409F3290 (BgpGxRectangleDestroy.c)
 *     BgpGxRectangleCreate @ 0x1409F42C0 (BgpGxRectangleCreate.c)
 */

__int64 __fastcall BgpGxBlendRectangle(unsigned int *a1, _DWORD *a2, int *a3, __int64 *a4)
{
  __int64 v4; // rbx
  int v5; // edi
  __int64 *v6; // rsi
  _DWORD *v8; // rbp
  unsigned int *v9; // r14
  unsigned int v10; // r11d
  int v11; // r8d
  unsigned int v12; // r10d
  int v13; // r9d
  int v14; // r12d
  int v15; // ecx
  int v16; // eax
  int v17; // r9d
  __int64 v18; // r8
  __int64 v19; // r13
  unsigned int v20; // r15d
  __int64 v21; // rdx
  unsigned int v22; // ecx
  unsigned int v23; // eax
  __int64 v24; // r12
  unsigned int v25; // r14d
  __int64 v26; // rbp
  __int64 v27; // rsi
  bool v28; // zf
  int v30; // [rsp+20h] [rbp-78h]
  __int64 v31; // [rsp+28h] [rbp-70h] BYREF
  unsigned int v32; // [rsp+30h] [rbp-68h]
  __int64 v33; // [rsp+38h] [rbp-60h] BYREF
  int v34; // [rsp+40h] [rbp-58h]
  __int64 v35; // [rsp+48h] [rbp-50h]
  __int64 v36; // [rsp+50h] [rbp-48h]

  v34 = 0;
  v4 = 0LL;
  v5 = 0;
  v31 = 0LL;
  v6 = a4;
  v8 = a2;
  v9 = a1;
  if ( !a4
    || (v10 = *a1) == 0
    || (v11 = *a2) == 0
    || (v12 = a1[1]) == 0
    || (v13 = a2[1]) == 0
    || a1[2] != 32
    || a2[2] != 32
    || (v14 = *a3, v12 < *a3 + v13)
    || (v15 = a3[1], v10 < v15 + v11) )
  {
    v5 = -1073741811;
    goto LABEL_25;
  }
  v4 = *v6;
  if ( *v6 )
  {
    if ( *(_DWORD *)(v4 + 4) == v13 && *(_DWORD *)v4 == v11 )
    {
LABEL_15:
      v17 = *(_DWORD *)v4;
      v18 = *(_QWORD *)(v4 + 24);
      v19 = *((_QWORD *)v8 + 3);
      v20 = *(_DWORD *)(v4 + 8) >> 3;
      v36 = v18;
      LODWORD(v31) = v20;
      v30 = v17;
      v21 = *((_QWORD *)v9 + 3) + v20 * (v14 + v12 * v15);
      v35 = v21;
      if ( v17 )
      {
        v22 = *(_DWORD *)(v4 + 4);
        v23 = v22;
        do
        {
          v32 = 0;
          v24 = v19;
          if ( v22 )
          {
            v25 = v32;
            v33 = v20;
            v26 = v21 - v19;
            v27 = v18 - v19;
            do
            {
              *(_DWORD *)(v27 + v24) = BgpGxBlendColor(*(_DWORD *)(v24 + v26), *(_DWORD *)v24, *(_BYTE *)(v24 + 3));
              ++v25;
              v23 = *(_DWORD *)(v4 + 4);
              v24 += v20;
            }
            while ( v25 < v23 );
            v9 = a1;
            v8 = a2;
            v20 = v31;
            v21 = v35;
            v18 = v36;
            v17 = v30;
          }
          v22 = v23;
          v19 += v20 * v8[1];
          v21 += v20 * v9[1];
          v35 = v21;
          v18 += v20 * v23;
          v28 = v17-- == 1;
          v36 = v18;
          v30 = v17;
        }
        while ( !v28 );
        v6 = a4;
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
    HIDWORD(v33) = *a2;
    LODWORD(v33) = v13;
    v16 = BgpGxRectangleCreate(&v33, 32, &v31);
    v4 = v31;
    v5 = v16;
    if ( v16 >= 0 )
    {
      v12 = v9[1];
      v15 = a3[1];
      v14 = *a3;
      goto LABEL_15;
    }
  }
LABEL_26:
  if ( *v6 )
    return (unsigned int)v5;
  if ( v4 )
  {
    BgpGxRectangleDestroy(v4);
    v4 = 0LL;
  }
LABEL_29:
  if ( !*v6 )
    *v6 = v4;
  return (unsigned int)v5;
}
