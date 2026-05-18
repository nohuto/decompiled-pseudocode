/*
 * XREFs of sub_18010BCA0 @ 0x18010BCA0
 * Callers:
 *     sub_18010B77C @ 0x18010B77C (sub_18010B77C.c)
 *     sub_18010B8D4 @ 0x18010B8D4 (sub_18010B8D4.c)
 *     sub_18010B998 @ 0x18010B998 (sub_18010B998.c)
 * Callees:
 *     sub_1800B933C @ 0x1800B933C (sub_1800B933C.c)
 */

char __fastcall sub_18010BCA0(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // rdi
  char v5; // bl

  v4 = *a2;
  v5 = sub_1800B933C(*a3);
  if ( sub_1800B933C(v4) == v5 )
    return 0;
  else
    return sub_1800B933C(*a2);
}
