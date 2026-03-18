/*
 * XREFs of sub_1C004BD00 @ 0x1C004BD00
 * Callers:
 *     sub_1C004BFCC @ 0x1C004BFCC (sub_1C004BFCC.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 */

_DWORD *__fastcall sub_1C004BD00(__int64 a1)
{
  _DWORD *result; // rax

  result = sub_1C000F050(*(_QWORD *)(a1 + 1184));
  _InterlockedIncrement(result + 855);
  return result;
}
