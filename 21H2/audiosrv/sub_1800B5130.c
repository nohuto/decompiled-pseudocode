/*
 * XREFs of sub_1800B5130 @ 0x1800B5130
 * Callers:
 *     sub_1800B555D @ 0x1800B555D (sub_1800B555D.c)
 *     sub_1800B560F @ 0x1800B560F (sub_1800B560F.c)
 * Callees:
 *     sub_1800B4B44 @ 0x1800B4B44 (sub_1800B4B44.c)
 */

__int64 __fastcall sub_1800B5130(__int64 a1, _WORD *a2, __int64 a3)
{
  __int64 result; // rax

  result = (__int64)a2;
  if ( a2 )
    return sub_1800B4B44(a2, a3, a1 + 24);
  return result;
}
