/*
 * XREFs of PsmCrmStart @ 0x1800425D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800425F4 @ 0x1800425F4 (sub_1800425F4.c)
 *     sub_1800428FC @ 0x1800428FC (sub_1800428FC.c)
 */

__int64 PsmCrmStart()
{
  __int64 result; // rax

  sub_1800428FC();
  result = sub_1800425F4();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
