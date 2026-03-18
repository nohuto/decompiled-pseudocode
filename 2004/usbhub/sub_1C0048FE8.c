/*
 * XREFs of sub_1C0048FE8 @ 0x1C0048FE8
 * Callers:
 *     sub_1C0049900 @ 0x1C0049900 (sub_1C0049900.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0015C80 @ 0x1C0015C80 (sub_1C0015C80.c)
 *     sub_1C0016670 @ 0x1C0016670 (sub_1C0016670.c)
 *     sub_1C0016B5C @ 0x1C0016B5C (sub_1C0016B5C.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C00171A0 @ 0x1C00171A0 (sub_1C00171A0.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C003DAA8 @ 0x1C003DAA8 (sub_1C003DAA8.c)
 */

__int64 __fastcall sub_1C0048FE8(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4; // r12
  unsigned __int64 v5; // r15
  _DWORD *v8; // rax
  unsigned int v9; // ebx
  _DWORD *v10; // r14
  unsigned int v11; // r13d
  unsigned int v12; // ebp
  unsigned int v13; // r14d
  _DWORD *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r15
  _DWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // r12
  __m128 *v21; // rax
  __int64 result; // rax
  int v23; // [rsp+80h] [rbp+18h] BYREF
  unsigned int *v24; // [rsp+88h] [rbp+20h]

  v24 = a4;
  v4 = a4;
  v5 = a3;
  v8 = sub_1C000F050(a1);
  v9 = 0;
  v23 = 0;
  v10 = v8;
  v11 = *((unsigned __int8 *)sub_1C000F050(a1) + 2938);
  v12 = 16 * v11 + 1186;
  if ( v12 <= (unsigned int)v5 )
  {
    sub_1C001D340((__m128 *)a2, 0, v5);
    *(_DWORD *)a2 = 1431519822;
    *(_DWORD *)(a2 + 88) = 1;
    *(_DWORD *)(a2 + 4) = v12;
    *(_OWORD *)(a2 + 92) = *(_OWORD *)(v10 + 1298);
    *(_OWORD *)(a2 + 108) = *(_OWORD *)(v10 + 1302);
    *(_OWORD *)(a2 + 124) = *(_OWORD *)(v10 + 734);
    *(_OWORD *)(a2 + 140) = *(_OWORD *)(v10 + 738);
    *(_OWORD *)(a2 + 156) = *(_OWORD *)(v10 + 742);
    *(_OWORD *)(a2 + 172) = *(_OWORD *)(v10 + 746);
    *(_DWORD *)(a2 + 188) = v10[750];
    *(_WORD *)(a2 + 192) = *((_WORD *)v10 + 1502);
    *(_BYTE *)(a2 + 194) = *((_BYTE *)v10 + 3006);
    *(_DWORD *)(a2 + 195) = v10[344];
    *(_DWORD *)(a2 + 207) = *((unsigned __int8 *)sub_1C000F050(a1) + 2938);
    if ( (v10[640] & 1) != 0 )
      *(_BYTE *)(a2 + 202) = 1;
    if ( v10[758] != 100 )
      *(_BYTE *)(a2 + 201) = 1;
    v13 = 0;
    if ( v11 )
    {
      v14 = (_DWORD *)(a2 + 219);
      do
      {
        v15 = sub_1C0016CA0(a1, (unsigned __int16)v13 + 1);
        if ( v15 )
        {
          *((_WORD *)v14 - 2) = *(_WORD *)(v15 + 4);
          *v14 = *(unsigned __int16 *)(v15 + 4);
          v14[1] = *(_DWORD *)(v15 + 428);
          v16 = sub_1C0016B5C(a1, (unsigned __int16)v13 + 1, 0LL, 0x574D4948u);
          v17 = v16;
          if ( v16 )
          {
            v18 = sub_1C0011220(v16);
            v19 = sub_1C0015C80(*((_QWORD *)v18 + 148), v17, 0LL, 0x4844686Eu);
            v20 = v19;
            if ( v19 )
            {
              v21 = sub_1C003DAA8(a1, &v23, v19);
              if ( v23 >= 0 )
              {
                *((_WORD *)v14 - 1) = v21[2].m128_i16[1];
                ExFreePoolWithTag(v21, 0);
              }
              sub_1C0016670(a1, v20, 0LL, 0x4844686Eu);
            }
            sub_1C00171A0(a1, v17, 0LL, 0x574D4948u);
          }
        }
        ++v13;
        v14 += 4;
      }
      while ( v13 < v11 );
      v4 = v24;
    }
  }
  else
  {
    v9 = -1073741789;
  }
  result = v9;
  *v4 = v12;
  return result;
}
