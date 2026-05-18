/*
 * XREFs of sub_180025928 @ 0x180025928
 * Callers:
 *     sub_180025928 @ 0x180025928 (sub_180025928.c)
 *     sub_1800276A0 @ 0x1800276A0 (sub_1800276A0.c)
 *     sub_1800277E8 @ 0x1800277E8 (sub_1800277E8.c)
 *     sub_180027A54 @ 0x180027A54 (sub_180027A54.c)
 *     sub_180068040 @ 0x180068040 (sub_180068040.c)
 *     sub_180068240 @ 0x180068240 (sub_180068240.c)
 *     sub_180091630 @ 0x180091630 (sub_180091630.c)
 *     sub_1800D5640 @ 0x1800D5640 (sub_1800D5640.c)
 *     sub_1800D5C08 @ 0x1800D5C08 (sub_1800D5C08.c)
 *     sub_1800F4524 @ 0x1800F4524 (sub_1800F4524.c)
 * Callees:
 *     sub_180025928 @ 0x180025928 (sub_180025928.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_180025928(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_180025928(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
