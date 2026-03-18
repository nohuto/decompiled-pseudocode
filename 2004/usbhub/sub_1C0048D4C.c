/*
 * XREFs of sub_1C0048D4C @ 0x1C0048D4C
 * Callers:
 *     sub_1C0049400 @ 0x1C0049400 (sub_1C0049400.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C001D080 @ 0x1C001D080 (sub_1C001D080.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C003DAA8 @ 0x1C003DAA8 (sub_1C003DAA8.c)
 *     sub_1C00489B8 @ 0x1C00489B8 (sub_1C00489B8.c)
 */

__int64 __fastcall sub_1C0048D4C(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4, __int64 a5)
{
  unsigned __int64 v6; // r12
  unsigned __int32 v8; // esi
  _DWORD *v9; // r15
  __int64 v10; // r13
  __int64 result; // rax
  __m128 *v12; // rax
  __m128 *v13; // rdi
  unsigned int v14; // ebp
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  int v22; // [rsp+60h] [rbp+18h] BYREF

  v6 = a3;
  v8 = 0;
  v9 = sub_1C0011220(a1);
  v22 = 0;
  v10 = *((_QWORD *)v9 + 148);
  if ( (unsigned int)v6 < 0x4B2 )
  {
    *a4 = 1202;
    return 3221225507LL;
  }
  v12 = sub_1C003DAA8(v10, &v22, a5);
  v13 = v12;
  if ( v22 >= 0 )
  {
    v14 = 11 * v12[3].m128_i32[0] + 1191;
    if ( v14 > (unsigned int)v6 )
    {
      *a4 = v14;
      ExFreePoolWithTag(v12, 0);
      return 3221225507LL;
    }
    sub_1C001D340((__m128 *)a2, 0, v6);
    *(_DWORD *)a2 = 1431519822;
    *(_DWORD *)(a2 + 4) = v14;
    *(_OWORD *)(a2 + 8) = *(_OWORD *)((char *)v9 + 2442);
    *(_OWORD *)(a2 + 24) = *(_OWORD *)((char *)v9 + 2458);
    *(_OWORD *)(a2 + 40) = *(_OWORD *)((char *)v9 + 2474);
    *(_OWORD *)(a2 + 56) = *(_OWORD *)((char *)v9 + 2490);
    *(_OWORD *)(a2 + 72) = *(_OWORD *)((char *)v9 + 2506);
    *(_DWORD *)(a2 + 88) = 0;
    sub_1C00489B8(v10, (_OWORD *)(a2 + 92), *((_WORD *)v9 + 714));
    *(_OWORD *)(a2 + 130) = *(_OWORD *)(v9 + 350);
    *(_WORD *)(a2 + 146) = *((_WORD *)v9 + 708);
    *(_DWORD *)(a2 + 149) = v9[292];
    *(_WORD *)(a2 + 128) = *((_WORD *)v9 + 714);
    *(_BYTE *)(a2 + 148) = v13[2].m128_i8[0];
    *(_WORD *)(a2 + 153) = v13[2].m128_i16[1];
    v15 = sub_1C0016CA0(v10, *((_WORD *)v9 + 714));
    if ( v15 )
    {
      *(_DWORD *)(a2 + 155) = *(unsigned __int16 *)(v15 + 4);
      *(_DWORD *)(a2 + 159) = *(_DWORD *)(v15 + 428);
    }
    *(_DWORD *)(a2 + 1187) = v13[3].m128_i32[0];
    if ( v13[3].m128_i32[0] )
    {
      do
      {
        v16 = v8++;
        v17 = 11 * (v16 + 97);
        *(_DWORD *)(v17 + a2 + 124) = v13[3].m128_i32[3 * v16 + 1];
        *(_WORD *)(v17 + a2 + 128) = v13[3].m128_i16[6 * v16 + 4];
        *(_BYTE *)(v17 + a2 + 130) = v13[3].m128_i8[12 * v16 + 10];
        *(_DWORD *)(11 * v16 + a2 + 1198) = v13[3].m128_i32[3 * v16 + 3];
      }
      while ( v8 < v13[3].m128_i32[0] );
    }
    ExFreePoolWithTag(v13, 0);
    v18 = v9[525];
    if ( v18 > 0x100 )
      v18 = 256;
    sub_1C001D080((char *)(a2 + 163), *((char **)v9 + 263), v18);
    v19 = v9[529];
    if ( v19 > 0x100 )
      v19 = 256;
    sub_1C001D080((char *)(a2 + 419), *((char **)v9 + 265), v19);
    v20 = v9[533];
    if ( v20 > 0x100 )
      v20 = 256;
    sub_1C001D080((char *)(a2 + 675), *((char **)v9 + 267), v20);
    v21 = v9[553];
    if ( v21 > 0x100 )
      v21 = 256;
    sub_1C001D080((char *)(a2 + 931), *((char **)v9 + 277), v21);
    result = 0LL;
    *a4 = v14;
  }
  else
  {
    *a4 = 0;
    return 3221225629LL;
  }
  return result;
}
