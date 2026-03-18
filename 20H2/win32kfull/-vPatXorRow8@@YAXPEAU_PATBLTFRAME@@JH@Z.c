/*
 * XREFs of ?vPatXorRow8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C02C6AC0
 * Callers:
 *     <none>
 * Callees:
 *     vFetchAndMerge @ 0x1C014772C (vFetchAndMerge.c)
 *     vFetchShiftAndMerge @ 0x1C02DA668 (vFetchShiftAndMerge.c)
 */

void __fastcall vPatXorRow8(struct _PATBLTFRAME *a1, int a2, int a3)
{
  __int64 v3; // r13
  unsigned int v4; // edi
  int v5; // r15d
  int v6; // eax
  __int64 v8; // r14
  int v9; // r9d
  int v10; // edi
  __int64 v11; // r9
  int v12; // eax
  unsigned int v13; // esi
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r12
  signed int v18; // eax
  int v19; // r10d
  int v20; // r11d
  unsigned int v21; // esi
  unsigned int v22; // ecx
  __int128 v23; // [rsp+20h] [rbp-30h] BYREF
  __int128 v24; // [rsp+30h] [rbp-20h]
  __int64 v25; // [rsp+40h] [rbp-10h]
  int v26; // [rsp+98h] [rbp+48h]
  int v27; // [rsp+A0h] [rbp+50h]

  v3 = *((_QWORD *)a1 + 3);
  v4 = *((_DWORD *)a1 + 11);
  v25 = 0LL;
  v5 = a3;
  v6 = a2 * *((_DWORD *)a1 + 4);
  v23 = 0LL;
  v24 = 0LL;
  v8 = *(_QWORD *)a1 + v6;
  v9 = a2 - *((_DWORD *)a1 + 9);
  if ( v9 >= 0 )
    v10 = v9 % v4;
  else
    v10 = v4 - ~v9 % v4 - 1;
  v11 = *((_QWORD *)a1 + 1) + v10 * *((_DWORD *)a1 + 5);
  *((_QWORD *)&v23 + 1) = v11;
  if ( a3 )
  {
    do
    {
      v12 = *((_DWORD *)a1 + 12);
      v13 = *((_DWORD *)a1 + 10);
      v14 = (v12 * *(_DWORD *)v3) & 0xFFFFFFFC;
      v15 = ((_BYTE)v12 * *(_BYTE *)v3) & 3;
      v16 = ((_BYTE)v12 * *(_BYTE *)(v3 + 4)) & 3;
      v17 = (v12 * *(_DWORD *)(v3 + 4)) & 0xFFFFFFFC;
      v27 = ((_BYTE)v12 * *(_BYTE *)(v3 + 4)) & 3;
      v18 = ((v12 * *(_DWORD *)v3) & 0xFFFFFFFC) - *((_DWORD *)a1 + 8);
      v19 = aulLeftMask[v15];
      v20 = ~aulLeftMask[v16];
      v26 = v20;
      if ( v18 >= 0 )
        v21 = v18 % v13;
      else
        v21 = v13 - ~v18 % v13 - 1;
      if ( (_DWORD)v14 == (_DWORD)v17 )
      {
        LODWORD(v24) = v21;
        *(_DWORD *)(v14 + v8) ^= v19 & v20 & *(_DWORD *)(v21 + v11);
      }
      else
      {
        if ( (_DWORD)v15 )
        {
          LODWORD(v24) = v21;
          *(_DWORD *)(v14 + v8) ^= v19 & *(_DWORD *)(v21 + v11);
          LODWORD(v14) = v14 + 4;
          v21 += 4;
        }
        DWORD2(v24) = (unsigned int)(v17 - v14) >> 2;
        if ( (unsigned int)(v17 - v14) >= 4 )
        {
          v22 = *((_DWORD *)a1 + 10);
          *(_QWORD *)&v23 = v8 + (unsigned int)v14;
          v21 %= v22;
          *(_QWORD *)&v24 = __PAIR64__(v22, v21);
          HIDWORD(v24) = v22;
          if ( (((unsigned __int8)v21 | (unsigned __int8)v22) & 3) != 0 )
          {
            vFetchShiftAndMerge(&v23);
          }
          else
          {
            HIDWORD(v24) = v22 >> 2;
            vFetchAndMerge((__int64)&v23);
          }
          v20 = v26;
          v11 = *((_QWORD *)&v23 + 1);
        }
        if ( v27 )
        {
          LODWORD(v24) = ((int)v21 + 4 * (unsigned __int64)DWORD2(v24)) % *((unsigned int *)a1 + 10);
          *(_DWORD *)(v17 + v8) ^= v20 & *(_DWORD *)((unsigned int)v24 + v11);
        }
      }
      if ( ++v10 == *((_DWORD *)a1 + 11) )
      {
        v11 = *((_QWORD *)a1 + 1);
        v10 = 0;
      }
      else
      {
        v11 += *((int *)a1 + 5);
      }
      v8 += *((int *)a1 + 4);
      *((_QWORD *)&v23 + 1) = v11;
      v3 += 8LL;
      --v5;
    }
    while ( v5 );
  }
}
