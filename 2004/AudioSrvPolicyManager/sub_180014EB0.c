/*
 * XREFs of sub_180014EB0 @ 0x180014EB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180007220 @ 0x180007220 (sub_180007220.c)
 */

__int64 __fastcall sub_180014EB0(struct _RTL_CRITICAL_SECTION *a1, __int64 a2)
{
  if ( a2 )
    return sub_180007220(a1, (__int64)&a1[-1].LockSemaphore, a2);
  else
    return 2147942487LL;
}
