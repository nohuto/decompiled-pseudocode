/*
 * XREFs of BgpGxFindSubRectangle @ 0x1409F32B4
 * Callers:
 *     AnFwDisplayFade @ 0x1409F2C00 (AnFwDisplayFade.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     BgpGxRectangleCreate @ 0x1409F42C0 (BgpGxRectangleCreate.c)
 */

__int64 __fastcall BgpGxFindSubRectangle(unsigned int *a1, int a2, __int64 a3, unsigned int *a4, _BYTE *a5)
{
  unsigned int *v5; // r13
  __int64 v6; // r11
  unsigned int *v7; // rsi
  unsigned int v8; // r12d
  unsigned int v9; // r9d
  unsigned int v10; // r10d
  unsigned int v11; // ebp
  __int64 v12; // rcx
  unsigned int v13; // edi
  unsigned int v14; // ebx
  unsigned int v15; // r15d
  unsigned int v16; // r14d
  unsigned int v17; // r8d
  unsigned int i; // edx
  int v19; // edi
  __int64 v20; // rbp
  __int64 result; // rax
  unsigned int v22; // edx
  size_t v23; // rdi
  char *v24; // rbx
  char *v25; // rsi
  __int64 v26; // r12
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // r11d
  unsigned int v32; // r8d
  __int64 v33; // rax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  char v38; // [rsp+20h] [rbp-68h]
  _DWORD v39[24]; // [rsp+28h] [rbp-60h] BYREF

  v39[2] = 0;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  if ( !a4 )
    return 3221225485LL;
  if ( !a1 )
    return 3221225485LL;
  v8 = a1[2];
  if ( ((v8 - 24) & 0xFFFFFFF7) != 0 )
    return 3221225485LL;
  v9 = *a1;
  v10 = a1[1];
  v11 = 0;
  v12 = *((_QWORD *)a1 + 3);
  v13 = 0;
  v14 = v8 >> 3;
  v15 = v9;
  v38 = 0;
  v16 = v10;
  if ( a2 == -16777216 && v14 == 4 )
  {
    v17 = 0;
    if ( !v9 )
    {
LABEL_33:
      *a5 = 1;
      *(_QWORD *)a3 = 0LL;
      return 0LL;
    }
    do
    {
      for ( i = 0; i < v10; ++i )
      {
        if ( *(_DWORD *)v12 )
        {
          v38 = 1;
          v27 = i;
          if ( i >= v16 )
            v27 = v16;
          v16 = v27;
          v28 = i;
          if ( i <= v13 )
            v28 = v13;
          v13 = v28;
          v29 = v17;
          if ( v17 >= v15 )
            v29 = v15;
          v15 = v29;
          v30 = v17;
          if ( v17 <= v11 )
            v30 = v11;
          v11 = v30;
        }
        v12 += 4LL;
      }
      ++v17;
    }
    while ( v17 < v9 );
  }
  else
  {
    v31 = 0;
    if ( !v9 )
      goto LABEL_33;
    do
    {
      v32 = 0;
      if ( v10 )
      {
        v33 = v14;
        do
        {
          if ( *(_BYTE *)(v12 + 2) != BYTE2(a2) || *(_WORD *)v12 != (_WORD)a2 )
          {
            v38 = 1;
            v34 = v32;
            if ( v32 >= v16 )
              v34 = v16;
            v16 = v34;
            v35 = v32;
            if ( v32 <= v13 )
              v35 = v13;
            v13 = v35;
            v36 = v31;
            if ( v31 >= v15 )
              v36 = v15;
            v15 = v36;
            v37 = v31;
            if ( v31 <= v11 )
              v37 = v11;
            v11 = v37;
            v33 = v14;
          }
          v12 += v33;
          ++v32;
        }
        while ( v32 < v10 );
      }
      ++v31;
    }
    while ( v31 < v9 );
    v7 = a1;
    v5 = a4;
    v6 = a3;
  }
  if ( !v38 )
    goto LABEL_33;
  v19 = v13 - v16 + 1;
  v20 = v11 - v15 + 1;
  v39[0] = v19;
  v39[1] = v20;
  if ( !v15 && !v16 && v19 == v10 && (_DWORD)v20 == v9 )
    return 3221226021LL;
  result = BgpGxRectangleCreate(v39, v8, v6);
  if ( (int)result >= 0 )
  {
    v22 = v14 * v7[1];
    v23 = v14 * v19;
    v24 = (char *)(*((_QWORD *)v7 + 3) + v22 * v15 + v16 * v14);
    v25 = *(char **)(*(_QWORD *)a3 + 24LL);
    if ( (_DWORD)v20 )
    {
      v26 = v22;
      do
      {
        memmove(v25, v24, v23);
        v25 += v23;
        v24 += v26;
        --v20;
      }
      while ( v20 );
    }
    *v5 = v16;
    v5[1] = v15;
    *a5 = 0;
    return 0LL;
  }
  return result;
}
