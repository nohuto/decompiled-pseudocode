/*
 * XREFs of sub_1800A027C @ 0x1800A027C
 * Callers:
 *     sub_18009F8E0 @ 0x18009F8E0 (sub_18009F8E0.c)
 *     sub_18009FAA4 @ 0x18009FAA4 (sub_18009FAA4.c)
 * Callees:
 *     sub_18009EE50 @ 0x18009EE50 (sub_18009EE50.c)
 *     sub_1800A00C0 @ 0x1800A00C0 (sub_1800A00C0.c)
 */

__int64 __fastcall sub_1800A027C(__int64 a1, int *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 *v7; // rax
  __int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v7 = sub_1800A00C0(v9, a2, a4);
  sub_18009EE50(a1, v7, a3, a4);
  return a1;
}
