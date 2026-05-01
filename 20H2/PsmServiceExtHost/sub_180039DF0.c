/*
 * XREFs of sub_180039DF0 @ 0x180039DF0
 * Callers:
 *     sub_180038718 @ 0x180038718 (sub_180038718.c)
 *     sub_180039D8C @ 0x180039D8C (sub_180039D8C.c)
 * Callees:
 *     sub_180039E74 @ 0x180039E74 (sub_180039E74.c)
 */

__int64 __fastcall sub_180039DF0(__int64 a1, __int16 a2, __int16 a3, char a4, __int16 a5, char a6)
{
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 result; // rax
  __int16 v10; // [rsp+20h] [rbp-28h] BYREF
  char v11; // [rsp+22h] [rbp-26h]
  int v12; // [rsp+24h] [rbp-24h]
  __int16 v13; // [rsp+28h] [rbp-20h]
  __int128 v14; // [rsp+30h] [rbp-18h]

  v6 = a1;
  *(_WORD *)a1 = a2;
  v7 = 0LL;
  *(_WORD *)(a1 + 6) = a5;
  *(_WORD *)(a1 + 2) = a3;
  *(_BYTE *)(a1 + 4) = a4;
  *(_BYTE *)(a1 + 8) = a6;
  if ( a5 )
  {
    v11 = a6;
    v10 = a5;
    v14 = 0LL;
    v12 = 0;
    v13 = 0;
    v8 = sub_180039E74(&v10);
  }
  else
  {
    v8 = 0LL;
  }
  *(_QWORD *)(v6 + 16) = v8;
  result = v6;
  *(_QWORD *)(v6 + 24) = v7;
  *(_QWORD *)(v6 + 32) = v7;
  *(_QWORD *)(v6 + 40) = v7;
  *(_QWORD *)(v6 + 48) = v7;
  *(_WORD *)(v6 + 56) = v7;
  *(_BYTE *)(v6 + 58) = v7;
  return result;
}
