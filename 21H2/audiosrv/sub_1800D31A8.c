/*
 * XREFs of sub_1800D31A8 @ 0x1800D31A8
 * Callers:
 *     sub_1800D30A8 @ 0x1800D30A8 (sub_1800D30A8.c)
 *     sub_1800D4618 @ 0x1800D4618 (sub_1800D4618.c)
 * Callees:
 *     sub_18001B5C0 @ 0x18001B5C0 (sub_18001B5C0.c)
 */

_DWORD *__fastcall sub_1800D31A8(const void **a1)
{
  _DWORD *result; // rax

  result = *a1;
  if ( *((int *)*a1 - 2) > 1 )
  {
    sub_18001B5C0(a1, *(result - 4));
    return *a1;
  }
  return result;
}
