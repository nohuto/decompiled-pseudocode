/*
 * XREFs of sub_18008415C @ 0x18008415C
 * Callers:
 *     sub_180084130 @ 0x180084130 (sub_180084130.c)
 *     sub_18008431C @ 0x18008431C (sub_18008431C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18008415C(__int64 a1)
{
  __int64 result; // rax

  result = HamStartActivityAsync(
             *(_QWORD *)((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 72),
             *(_QWORD *)(a1 + 40),
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    *(_BYTE *)(a1 + 52) = 1;
    return 0LL;
  }
  return result;
}
