/*
 * XREFs of ?vPatXorRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C0144F60
 * Callers:
 *     <none>
 * Callees:
 *     vFetchAndMerge @ 0x1C01450FC (vFetchAndMerge.c)
 *     vFetchShiftAndMerge @ 0x1C02DBB08 (vFetchShiftAndMerge.c)
 */

void __fastcall vPatXorRect8(struct _PATBLTFRAME *a1)
{
  _DWORD *v1; // r8
  int v3; // r9d
  unsigned int v4; // edi
  int v5; // r12d
  char v6; // cl
  unsigned int v7; // r9d
  __int64 v8; // rcx
  char v9; // r13
  unsigned int v10; // r12d
  __int64 v11; // r13
  int v12; // eax
  int v13; // r11d
  int v14; // r15d
  unsigned int v15; // edi
  int v16; // r10d
  int v17; // eax
  unsigned int v18; // esi
  int v19; // esi
  int v20; // r14d
  int v21; // eax
  int v22; // r15d
  __int64 v23; // rcx
  int v24; // eax
  int v25; // ecx
  int v26; // r14d
  int v27; // r11d
  _DWORD *v28; // rcx
  __int64 i; // rdx
  int v30; // r10d
  _DWORD *v31; // rcx
  __int64 v32; // r9
  __int64 v33; // rdx
  __int128 v34; // [rsp+20h] [rbp-30h] BYREF
  __int128 v35; // [rsp+30h] [rbp-20h]
  __int64 v36; // [rsp+40h] [rbp-10h]
  int v37; // [rsp+80h] [rbp+30h]

  v1 = (_DWORD *)*((_QWORD *)a1 + 3);
  v36 = 0LL;
  v3 = *v1 * *((_DWORD *)a1 + 12);
  v4 = *((_DWORD *)a1 + 10);
  v5 = *((_DWORD *)a1 + 12) * v1[2];
  v34 = 0LL;
  v6 = v3;
  v7 = v3 & 0xFFFFFFFC;
  v8 = v6 & 3;
  v35 = 0LL;
  v9 = v5;
  v10 = v5 & 0xFFFFFFFC;
  v11 = v9 & 3;
  v12 = v7 - *((_DWORD *)a1 + 8);
  v13 = aulLeftMask[v8];
  v14 = ~aulLeftMask[v11];
  v37 = v14;
  if ( v12 < 0 )
    v15 = v4 - ~v12 % v4 - 1;
  else
    v15 = v12 % v4;
  v16 = v1[1];
  v17 = v16 - *((_DWORD *)a1 + 9);
  v18 = *((_DWORD *)a1 + 11);
  if ( v17 < 0 )
    v19 = v18 - ~v17 % v18 - 1;
  else
    v19 = v17 % v18;
  if ( v7 != v10 && !(_DWORD)v8 )
    goto LABEL_7;
  LODWORD(v35) = v15;
  v26 = v14 & v13;
  if ( v7 != v10 )
    v26 = v13;
  v27 = v19;
  v28 = (_DWORD *)(*(_QWORD *)a1 + v7 + (__int64)(*((_DWORD *)a1 + 4) * v16));
  for ( i = *((_QWORD *)a1 + 1) + v19 * *((_DWORD *)a1 + 5); v16 < v1[3]; v28 = (_DWORD *)((char *)v28 + *((int *)a1 + 4)) )
  {
    ++v27;
    *v28 ^= v26 & *(_DWORD *)(v15 + i);
    if ( v27 == *((_DWORD *)a1 + 11) )
    {
      i = *((_QWORD *)a1 + 1);
      v27 = 0;
    }
    else
    {
      i += *((int *)a1 + 5);
    }
    v1 = (_DWORD *)*((_QWORD *)a1 + 3);
    ++v16;
  }
  if ( v7 != v10 )
  {
    v7 += 4;
    v15 += 4;
LABEL_7:
    DWORD2(v35) = (v10 - v7) >> 2;
    if ( v10 - v7 >= 4 )
    {
      v20 = v1[1];
      DWORD1(v35) = *((_DWORD *)a1 + 10);
      v21 = *((_DWORD *)a1 + 4) * v20;
      v22 = v19;
      v15 %= DWORD1(v35);
      LODWORD(v35) = v15;
      HIDWORD(v35) = DWORD1(v35);
      v23 = v7 + (__int64)v21;
      v24 = v19 * *((_DWORD *)a1 + 5);
      *(_QWORD *)&v34 = *(_QWORD *)a1 + v23;
      *((_QWORD *)&v34 + 1) = *((_QWORD *)a1 + 1) + v24;
      v25 = v1[3];
      if ( (((unsigned __int8)v15 | BYTE4(v35)) & 3) != 0 )
      {
        if ( v20 < v25 )
        {
          do
          {
            vFetchShiftAndMerge(&v34);
            if ( ++v22 == *((_DWORD *)a1 + 11) )
            {
              v22 = 0;
              *((_QWORD *)&v34 + 1) = *((_QWORD *)a1 + 1);
            }
            else
            {
              *((_QWORD *)&v34 + 1) += *((int *)a1 + 5);
            }
            v1 = (_DWORD *)*((_QWORD *)a1 + 3);
            ++v20;
            *(_QWORD *)&v34 = *((int *)a1 + 4) + (_QWORD)v34;
            LODWORD(v35) = v15;
          }
          while ( v20 < v1[3] );
        }
      }
      else
      {
        HIDWORD(v35) = DWORD1(v35) >> 2;
        if ( v20 < v25 )
        {
          do
          {
            vFetchAndMerge(&v34);
            if ( ++v22 == *((_DWORD *)a1 + 11) )
            {
              v22 = 0;
              *((_QWORD *)&v34 + 1) = *((_QWORD *)a1 + 1);
            }
            else
            {
              *((_QWORD *)&v34 + 1) += *((int *)a1 + 5);
            }
            v1 = (_DWORD *)*((_QWORD *)a1 + 3);
            ++v20;
            *(_QWORD *)&v34 = *((int *)a1 + 4) + (_QWORD)v34;
          }
          while ( v20 < v1[3] );
        }
      }
    }
    if ( (_DWORD)v11 )
    {
      v30 = v1[1];
      v31 = (_DWORD *)(*(_QWORD *)a1 + v10 + (__int64)(*((_DWORD *)a1 + 4) * v30));
      v32 = *((_QWORD *)a1 + 1) + v19 * *((_DWORD *)a1 + 5);
      v33 = (v15 + 4 * DWORD2(v35)) % *((_DWORD *)a1 + 10);
      if ( v30 < v1[3] )
      {
        do
        {
          ++v19;
          *v31 ^= v37 & *(_DWORD *)(v33 + v32);
          if ( v19 == *((_DWORD *)a1 + 11) )
          {
            v32 = *((_QWORD *)a1 + 1);
            v19 = 0;
          }
          else
          {
            v32 += *((int *)a1 + 5);
          }
          ++v30;
          v31 = (_DWORD *)((char *)v31 + *((int *)a1 + 4));
        }
        while ( v30 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
      }
    }
  }
}
