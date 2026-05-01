/*
 * XREFs of sub_18002E320 @ 0x18002E320
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002E33C @ 0x18002E33C (sub_18002E33C.c)
 */

__int64 sub_18002E320()
{
  __int64 result; // rax

  result = sub_18002E33C();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
