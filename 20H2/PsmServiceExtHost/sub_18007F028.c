/*
 * XREFs of sub_18007F028 @ 0x18007F028
 * Callers:
 *     sub_18001B300 @ 0x18001B300 (sub_18001B300.c)
 *     sub_18007D9F0 @ 0x18007D9F0 (sub_18007D9F0.c)
 *     sub_18007E80C @ 0x18007E80C (sub_18007E80C.c)
 *     sub_18007ECDC @ 0x18007ECDC (sub_18007ECDC.c)
 * Callees:
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 */

__int64 __fastcall sub_18007F028(__int64 **a1)
{
  __int64 *i; // rbx
  __int64 result; // rax

  for ( i = *a1; i != (__int64 *)a1; i = (__int64 *)*i )
  {
    if ( (i[5] & 1) != 0 )
    {
      result = sub_18000A110((__int64)(i - 91));
      *((_DWORD *)i + 10) &= ~1u;
    }
  }
  return result;
}
