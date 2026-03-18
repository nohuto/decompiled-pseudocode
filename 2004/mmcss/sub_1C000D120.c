/*
 * XREFs of sub_1C000D120 @ 0x1C000D120
 * Callers:
 *     DriverEntry @ 0x1C000D010 (DriverEntry.c)
 * Callees:
 *     sub_1C000C494 @ 0x1C000C494 (sub_1C000C494.c)
 *     sub_1C000D150 @ 0x1C000D150 (sub_1C000D150.c)
 */

__int64 sub_1C000D120()
{
  __int64 result; // rax
  unsigned int v1; // ebx

  result = sub_1C000D150();
  v1 = result;
  if ( (int)result < 0 )
  {
    sub_1C000C494();
    return v1;
  }
  return result;
}
