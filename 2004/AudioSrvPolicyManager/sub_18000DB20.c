/*
 * XREFs of sub_18000DB20 @ 0x18000DB20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000DB20(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_18003EBE0;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  return result;
}
