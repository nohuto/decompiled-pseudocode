/*
 * XREFs of sub_180074110 @ 0x180074110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180074110(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  *a2 = off_18014B1A0;
  result = *(_QWORD *)(a1 + 8);
  a2[1] = result;
  return result;
}
