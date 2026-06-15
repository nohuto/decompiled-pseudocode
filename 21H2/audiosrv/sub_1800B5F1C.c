/*
 * XREFs of sub_1800B5F1C @ 0x1800B5F1C
 * Callers:
 *     sub_1800B470C @ 0x1800B470C (sub_1800B470C.c)
 *     sub_1800B5F60 @ 0x1800B5F60 (sub_1800B5F60.c)
 * Callees:
 *     sub_1800B6060 @ 0x1800B6060 (sub_1800B6060.c)
 */

__int64 __fastcall sub_1800B5F1C(
        volatile signed __int32 **a1,
        volatile signed __int32 *a2,
        volatile signed __int32 *a3)
{
  __int64 result; // rax

  result = sub_1800B6060(a1);
  if ( a2 )
  {
    *a1 = a2;
    a1[1] = a3;
    _InterlockedIncrement(a2);
  }
  return result;
}
