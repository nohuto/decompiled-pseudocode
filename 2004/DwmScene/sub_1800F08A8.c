/*
 * XREFs of sub_1800F08A8 @ 0x1800F08A8
 * Callers:
 *     sub_1800F5B60 @ 0x1800F5B60 (sub_1800F5B60.c)
 * Callees:
 *     sub_1800F09C4 @ 0x1800F09C4 (sub_1800F09C4.c)
 */

__int64 __fastcall sub_1800F08A8(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // r11
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rcx

  v4 = (a1[1] - *a1) / 12;
  v5 = sub_1800F09C4(a1, a2);
  v6 = a1[1];
  v7 = *a1;
  v8 = v5;
  while ( v7 != v6 )
  {
    *(_QWORD *)v8 = *(_QWORD *)v7;
    *(_DWORD *)(v8 + 8) = *(_DWORD *)(v7 + 8);
    v8 += 12LL;
    v7 += 12LL;
  }
  return sub_1800F0600(a1, v5, v4, a2);
}
