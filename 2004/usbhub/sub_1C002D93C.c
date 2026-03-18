/*
 * XREFs of sub_1C002D93C @ 0x1C002D93C
 * Callers:
 *     sub_1C002D68C @ 0x1C002D68C (sub_1C002D68C.c)
 * Callees:
 *     sub_1C0001AE8 @ 0x1C0001AE8 (sub_1C0001AE8.c)
 *     sub_1C001B88C @ 0x1C001B88C (sub_1C001B88C.c)
 */

__int64 __fastcall sub_1C002D93C(__int64 a1, int a2, struct _KTIMER *a3, struct _KDPC *a4, int a5, char a6)
{
  __int64 result; // rax
  ULONG TimeIncrement; // eax

  if ( !a6 || (result = sub_1C0001AE8(a1, (__int64)a3, a5), (result & 0xC0000000) != 0xC0000000) )
  {
    TimeIncrement = KeQueryTimeIncrement();
    if ( KeSetTimer(a3, (LARGE_INTEGER)(int)(1 - 10000 * a2 - TimeIncrement), a4) )
    {
      if ( a6 )
        sub_1C001B88C(a1, (__int64)a3);
    }
    return 0LL;
  }
  return result;
}
