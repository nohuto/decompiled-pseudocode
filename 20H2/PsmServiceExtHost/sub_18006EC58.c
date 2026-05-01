/*
 * XREFs of sub_18006EC58 @ 0x18006EC58
 * Callers:
 *     sub_180032644 @ 0x180032644 (sub_180032644.c)
 * Callees:
 *     sub_18006EC04 @ 0x18006EC04 (sub_18006EC04.c)
 *     sub_18006F614 @ 0x18006F614 (sub_18006F614.c)
 */

__int64 __fastcall sub_18006EC58(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  if ( (unsigned __int8)sub_18006F614(*(_QWORD *)(a1 + 56)) )
    sub_18006EC04(v2, v1);
  return 0LL;
}
