/*
 * XREFs of sub_18003504C @ 0x18003504C
 * Callers:
 *     sub_1800202A0 @ 0x1800202A0 (sub_1800202A0.c)
 * Callees:
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18000F450 @ 0x18000F450 (sub_18000F450.c)
 *     sub_18000F990 @ 0x18000F990 (sub_18000F990.c)
 *     sub_180011AC0 @ 0x180011AC0 (sub_180011AC0.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180022DB0 @ 0x180022DB0 (sub_180022DB0.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 */

__int64 __fastcall sub_18003504C(__int64 *a1, __int64 a2, __int128 *a3, __int64 *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // r15
  int v10; // r12d
  __int64 v11; // r13
  int v12; // eax
  __int64 v13; // rbx
  unsigned int v14; // edi
  int v15; // eax
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  __int64 v20[9]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v21; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+10h]
  __int64 *v23; // [rsp+C8h] [rbp+20h]

  v23 = a4;
  v22 = a2;
  sub_18000F450();
  v7 = *a1;
  v20[0] = 0LL;
  v21 = 0LL;
  v8 = -1LL;
  v9 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v12 = sub_180022DB0(v7, a2, &v21);
  v13 = v21;
  v14 = v12;
  if ( v12 >= 0 )
  {
    v10 = *(_DWORD *)(v21 + 560);
    v9 = v21 + 24;
    v11 = v21 + 488;
    v15 = sub_180011AC0((__int64)a1, *a1, v21, a3, 0, v20);
    v16 = (_QWORD *)v20[0];
    v14 = v15;
    if ( v15 >= 0 )
    {
      v14 = 0;
      v8 = *(_QWORD *)(v20[0] + 40);
      *v23 = v8;
    }
    if ( v16 )
      sub_1800274E0(v16);
  }
  sub_18000F990(v14, v8, 0LL, v9, v10, v11, v22, (__int64)a3);
  if ( v13 )
  {
    sub_18001E380();
    if ( (*(_QWORD *)(v13 + 592))-- == 1LL )
      sub_18000A1AC(v13 - 64, v17);
    sub_18000F390();
  }
  return v14;
}
