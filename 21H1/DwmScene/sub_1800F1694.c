/*
 * XREFs of sub_1800F1694 @ 0x1800F1694
 * Callers:
 *     sub_1800A40D4 @ 0x1800A40D4 (sub_1800A40D4.c)
 * Callees:
 *     sub_1800F0E04 @ 0x1800F0E04 (sub_1800F0E04.c)
 */

unsigned __int64 __fastcall sub_1800F1694(__int64 a1, _OWORD *a2)
{
  __int64 *v2; // rcx
  char *v4; // rdx
  unsigned __int64 result; // rax

  v2 = (__int64 *)(a1 + 24);
  v4 = (char *)v2[1];
  if ( (char *)v2[2] == v4 )
    return sub_1800F0E04(v2, v4, a2);
  *(_OWORD *)v4 = *a2;
  v2[1] += 16LL;
  return result;
}
