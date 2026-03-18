/*
 * XREFs of ?TPAAPSqmBlockedCount@@YGXH@Z @ 0x178870
 * Callers:
 *     ?TPAAPShouldAllowNow@@YGHKHH@Z @ 0x1786CD (-TPAAPShouldAllowNow@@YGHKHH@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall TPAAPSqmBlockedCount(void *this)
{
  WinSqmIncrementDWORD(0, 11611, 1);
  if ( this )
    WinSqmIncrementDWORD(0, 11610, 1);
}
