/*
 * XREFs of sub_18003C668 @ 0x18003C668
 * Callers:
 *     sub_18003C630 @ 0x18003C630 (sub_18003C630.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003C668(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  result = (unsigned __int64)v1 >> 63;
  if ( v1 < 0 )
    return sub_180077A70(2 * v1);
  return result;
}
