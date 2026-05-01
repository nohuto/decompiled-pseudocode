/*
 * XREFs of sub_180001608 @ 0x180001608
 * Callers:
 *     sub_1800014F0 @ 0x1800014F0 (sub_1800014F0.c)
 *     sub_1800767F0 @ 0x1800767F0 (sub_1800767F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180001608(char a1)
{
  int v2; // [rsp+58h] [rbp+10h] BYREF
  int v3; // [rsp+5Ch] [rbp+14h]

  v3 = -1;
  v2 = (2 * a1) & 2 | 1;
  return NtUpdateWnfStateData(&unk_180095400, &v2, 8LL, 0LL, 0LL, 0, 0);
}
