/*
 * XREFs of sub_1800178A0 @ 0x1800178A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800178D0 @ 0x1800178D0 (sub_1800178D0.c)
 */

__int64 __fastcall sub_1800178A0(__int64 a1, __int64 a2, __int128 *a3)
{
  __int128 v3; // xmm0
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+30h] [rbp-18h]

  v3 = *a3;
  v6 = *((_DWORD *)a3 + 4);
  v5 = v3;
  return sub_1800178D0(a1 - 72, a2, &v5);
}
