/*
 * XREFs of sub_18007FAEC @ 0x18007FAEC
 * Callers:
 *     sub_180081288 @ 0x180081288 (sub_180081288.c)
 * Callees:
 *     sub_180069BA4 @ 0x180069BA4 (sub_180069BA4.c)
 */

__int64 __fastcall sub_18007FAEC(__int64 a1, unsigned __int8 *a2)
{
  int v2; // eax
  int v3; // eax
  __int64 v4; // rdx
  int v5; // eax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v8 = 0LL;
  v2 = *a2;
  v7 = 0LL;
  LODWORD(v7) = v2;
  v3 = a2[1];
  v4 = *(_QWORD *)(a1 + 16);
  LODWORD(v8) = v3;
  v5 = sub_180069BA4(*(__int64 *)&qword_1800B41A8, v4, 1u, (__int64)&v7);
  if ( v5 >= 0 )
    return 0LL;
  else
    return v5 | 0xC0000000;
}
