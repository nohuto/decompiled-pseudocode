/*
 * XREFs of sub_18004D200 @ 0x18004D200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004D200(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_1801555A8;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  return result;
}
