/*
 * XREFs of sub_1801320EC @ 0x1801320EC
 * Callers:
 *     sub_180132184 @ 0x180132184 (sub_180132184.c)
 * Callees:
 *     sub_180132378 @ 0x180132378 (sub_180132378.c)
 */

__int64 __fastcall sub_1801320EC(__int64 a1, int a2, int a3)
{
  char v3; // bl
  __int64 result; // rax

  v3 = a1;
  if ( a1 )
    result = RtlDestroyMemoryBlockLookaside();
  else
    result = 0LL;
  if ( (byte_18019F981 & 4) != 0 )
    return sub_180132378(a1, a2, a3, 4, v3, 0, 0, 0);
  return result;
}
