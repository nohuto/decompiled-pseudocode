/*
 * XREFs of sub_18000FED0 @ 0x18000FED0
 * Callers:
 *     sub_180010540 @ 0x180010540 (sub_180010540.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000FED0(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
}
