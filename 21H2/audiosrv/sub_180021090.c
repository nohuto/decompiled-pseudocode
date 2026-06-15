/*
 * XREFs of sub_180021090 @ 0x180021090
 * Callers:
 *     sub_18005B960 @ 0x18005B960 (sub_18005B960.c)
 * Callees:
 *     sub_1800210D8 @ 0x1800210D8 (sub_1800210D8.c)
 *     sub_1800210FC @ 0x1800210FC (sub_1800210FC.c)
 */

bool __fastcall sub_180021090(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( (int)sub_1800210FC(&v5, a2, 16LL) < 0 )
    return 0;
  v3 = sub_1800210D8(v5);
  *a1 = v3;
  return v3 != 0;
}
