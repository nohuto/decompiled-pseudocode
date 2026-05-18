/*
 * XREFs of sub_1800D4890 @ 0x1800D4890
 * Callers:
 *     sub_18007B4CC @ 0x18007B4CC (sub_18007B4CC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D4890(_OWORD *a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  result = a2;
  *(_OWORD *)(a2 + 24) = *a1;
  return result;
}
