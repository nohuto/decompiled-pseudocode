/*
 * XREFs of sub_1C004BC30 @ 0x1C004BC30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 */

_DWORD *__fastcall sub_1C004BC30(__int64 a1)
{
  _DWORD *result; // rax

  result = sub_1C000F050(*(_QWORD *)(a1 + 1184));
  _InterlockedDecrement(result + 855);
  return result;
}
