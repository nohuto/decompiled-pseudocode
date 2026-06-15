/*
 * XREFs of sub_1800E3D40 @ 0x1800E3D40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002A0F0 @ 0x18002A0F0 (sub_18002A0F0.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_180045EE0 @ 0x180045EE0 (sub_180045EE0.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

__int64 __fastcall sub_1800E3D40(__int64 a1, _OWORD *a2, char *a3)
{
  int v6; // edx
  int v7; // ebx
  void **v9; // r15
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r12
  char *v12; // rbp
  SIZE_T v13; // rax
  char *v14; // rax
  __int64 v15; // rcx
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  if ( *(_QWORD *)(a1 + 360) )
  {
    v6 = 1221;
LABEL_3:
    v7 = -2147418113;
LABEL_4:
    sub_18004BD84((int)retaddr, v6, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp", v7);
    return (unsigned int)v7;
  }
  v9 = (void **)(a1 + 1592);
  if ( *(_QWORD *)(a1 + 1592) )
  {
    v6 = 1222;
    goto LABEL_3;
  }
  v10 = -1LL;
  do
    ++v10;
  while ( *(_WORD *)&a3[2 * v10] );
  v11 = v10 + 1;
  v12 = 0LL;
  if ( v10 + 1 < v10 )
  {
    v7 = -2147024362;
  }
  else
  {
    v13 = 2 * v11;
    if ( is_mul_ok(v11, 2uLL) )
    {
      v7 = 0;
    }
    else
    {
      v13 = -1LL;
      v7 = -2147024362;
    }
    if ( v7 >= 0 )
    {
      v14 = (char *)CoTaskMemAlloc(v13);
      v12 = v14;
      if ( v14 )
      {
        v7 = 0;
        sub_18002A0F0(v14, v10 + 1, a3, v10);
      }
      else
      {
        v7 = -2147024882;
      }
    }
  }
  sub_18002A504(v9, v12);
  if ( v7 < 0 )
  {
    v6 = 1224;
    goto LABEL_4;
  }
  v15 = 9LL;
  v16 = (_OWORD *)(a1 + 328);
  do
  {
    *v16 = *a2;
    v16[1] = a2[1];
    v16[2] = a2[2];
    v16[3] = a2[3];
    v16[4] = a2[4];
    v16[5] = a2[5];
    v16[6] = a2[6];
    v16 += 8;
    v17 = a2[7];
    a2 += 8;
    *(v16 - 1) = v17;
    --v15;
  }
  while ( v15 );
  *v16 = *a2;
  v16[1] = a2[1];
  v16[2] = a2[2];
  v16[3] = a2[3];
  v16[4] = a2[4];
  v16[5] = a2[5];
  v16[6] = a2[6];
  sub_180045EE0(a1 - 8);
  return 0LL;
}
