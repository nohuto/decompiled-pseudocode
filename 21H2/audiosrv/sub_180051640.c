/*
 * XREFs of sub_180051640 @ 0x180051640
 * Callers:
 *     sub_180051570 @ 0x180051570 (sub_180051570.c)
 *     sub_1800E5560 @ 0x1800E5560 (sub_1800E5560.c)
 *     sub_1800EC7A0 @ 0x1800EC7A0 (sub_1800EC7A0.c)
 * Callees:
 *     sub_180051680 @ 0x180051680 (sub_180051680.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 */

__int64 __fastcall sub_180051640(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = sub_18006A18C(32LL, &unk_18019F848);
  v3 = 0LL;
  if ( v2 )
    return sub_180051680(v2, a1);
  return v3;
}
