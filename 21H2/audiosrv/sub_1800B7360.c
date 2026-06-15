/*
 * XREFs of sub_1800B7360 @ 0x1800B7360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 sub_1800B7360()
{
  __int64 result; // rax

  result = 0LL;
  if ( lpCriticalSection )
    return LODWORD(lpCriticalSection[2].OwningThread);
  return result;
}
