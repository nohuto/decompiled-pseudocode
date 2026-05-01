/*
 * XREFs of sub_18007E630 @ 0x18007E630
 * Callers:
 *     sub_18007E664 @ 0x18007E664 (sub_18007E664.c)
 * Callees:
 *     sub_18007E5CC @ 0x18007E5CC (sub_18007E5CC.c)
 */

__int64 __fastcall sub_18007E630(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r10

  result = sub_18007E5CC(a1);
  if ( result )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v2 + 8) + 24LL) != *(_QWORD *)(*(_QWORD *)(result + 8) + 24LL) )
      return 0LL;
  }
  return result;
}
