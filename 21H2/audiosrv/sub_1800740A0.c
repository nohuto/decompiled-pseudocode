/*
 * XREFs of sub_1800740A0 @ 0x1800740A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800740A0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  *a2 = off_18014B178;
  result = *(_QWORD *)(a1 + 8);
  a2[1] = result;
  return result;
}
