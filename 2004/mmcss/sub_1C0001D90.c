/*
 * XREFs of sub_1C0001D90 @ 0x1C0001D90
 * Callers:
 *     sub_1C000A210 @ 0x1C000A210 (sub_1C000A210.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0001D90(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 48));
  if ( result <= 1 )
    __fastfail(0xEu);
  return result;
}
