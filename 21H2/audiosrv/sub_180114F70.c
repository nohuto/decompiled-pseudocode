/*
 * XREFs of sub_180114F70 @ 0x180114F70
 * Callers:
 *     sub_180114EE0 @ 0x180114EE0 (sub_180114EE0.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18011125C @ 0x18011125C (sub_18011125C.c)
 */

__int64 __fastcall sub_180114F70(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // rdi
  int *v4; // rbx
  int v6; // edx
  _OWORD *v8; // rcx
  __int128 v9; // xmm1
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 2LL;
  v4 = a3;
  if ( (unsigned int)(a3[2] - 2) > 1 )
  {
    v6 = 15;
LABEL_3:
    sub_18004BD84(
      (int)retaddr,
      v6,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\remappolicyrule.cpp",
      -2147024809);
    return 2147942487LL;
  }
  if ( a3[3] >= 9 )
  {
    v6 = 17;
    goto LABEL_3;
  }
  if ( *a3 >= 9 )
  {
    v6 = 18;
    goto LABEL_3;
  }
  sub_18011125C((__int64 *)(a1 + 16), a2, (__int64)a3);
  v8 = (_OWORD *)(a1 + 64);
  do
  {
    *v8 = *(_OWORD *)v4;
    v8[1] = *((_OWORD *)v4 + 1);
    v8[2] = *((_OWORD *)v4 + 2);
    v8[3] = *((_OWORD *)v4 + 3);
    v8[4] = *((_OWORD *)v4 + 4);
    v8[5] = *((_OWORD *)v4 + 5);
    v8[6] = *((_OWORD *)v4 + 6);
    v8 += 8;
    v9 = *((_OWORD *)v4 + 7);
    v4 += 32;
    *(v8 - 1) = v9;
    --v3;
  }
  while ( v3 );
  *v8 = *(_OWORD *)v4;
  *((_DWORD *)v8 + 4) = v4[4];
  return 0LL;
}
