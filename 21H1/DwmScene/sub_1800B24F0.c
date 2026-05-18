/*
 * XREFs of sub_1800B24F0 @ 0x1800B24F0
 * Callers:
 *     sub_1800B3B2C @ 0x1800B3B2C (sub_1800B3B2C.c)
 * Callees:
 *     sub_1800B2518 @ 0x1800B2518 (sub_1800B2518.c)
 */

__int64 __fastcall sub_1800B24F0(__int64 a1)
{
  __int64 result; // rax

  result = sub_1800B2518();
  *(_DWORD *)(a1 + 144) = 4;
  return result;
}
