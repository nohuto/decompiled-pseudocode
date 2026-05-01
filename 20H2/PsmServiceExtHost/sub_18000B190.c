/*
 * XREFs of sub_18000B190 @ 0x18000B190
 * Callers:
 *     sub_18000B2DC @ 0x18000B2DC (sub_18000B2DC.c)
 * Callees:
 *     sub_18000934C @ 0x18000934C (sub_18000934C.c)
 *     sub_180011AC0 @ 0x180011AC0 (sub_180011AC0.c)
 *     sub_180020F50 @ 0x180020F50 (sub_180020F50.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 */

__int64 __fastcall sub_18000B190(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // r9
  _OWORD *v7; // rax
  _OWORD *v8; // r10
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  bool v16; // zf
  int v17; // eax
  int v18; // edi
  _DWORD v20[100]; // [rsp+30h] [rbp-198h] BYREF
  __int64 v21; // [rsp+1E8h] [rbp+20h] BYREF

  v4 = 0LL;
  v21 = 0LL;
  v6 = 3LL;
  if ( *(_BYTE *)(a4 + 40) == 3 )
    goto LABEL_8;
  v7 = (_OWORD *)(a1 + 8);
  v8 = v20;
  do
  {
    v9 = v7[1];
    *v8 = *v7;
    v10 = v7[2];
    v8[1] = v9;
    v11 = v7[3];
    v8[2] = v10;
    v12 = v7[4];
    v8[3] = v11;
    v13 = v7[5];
    v8[4] = v12;
    v14 = v7[6];
    v8[5] = v13;
    v15 = v7[7];
    v7 += 8;
    v8[6] = v14;
    v8 += 8;
    *(v8 - 1) = v15;
    --v6;
  }
  while ( v6 );
  v16 = *(_DWORD *)(a2 + 560) == 2;
  *(_QWORD *)v8 = *(_QWORD *)v7;
  if ( !v16 )
    v20[0] &= ~0x400u;
  v17 = sub_180011AC0(
          *(_QWORD *)(a1 + 400),
          (*(_DWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 776) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                 + 120)
                     + 32LL) & 0xFFFFFFFC)
        - 168,
          a2,
          (unsigned int)v20,
          a3,
          (__int64)&v21);
  v4 = v21;
  v18 = v17;
  if ( v17 >= 0 )
  {
    *(_QWORD *)(v21 + 72) = a4;
    *(_QWORD *)a4 = v4;
    sub_18000934C(a4);
LABEL_8:
    v18 = 0;
  }
  if ( v4 )
  {
    if ( v18 < 0 )
      sub_180020F50(v4);
    sub_1800274E0(v4);
  }
  return (unsigned int)v18;
}
