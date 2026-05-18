/*
 * XREFs of sub_1800F5864 @ 0x1800F5864
 * Callers:
 *     sub_1800F5830 @ 0x1800F5830 (sub_1800F5830.c)
 * Callees:
 *     sub_1800F558C @ 0x1800F558C (sub_1800F558C.c)
 */

_DWORD *__fastcall sub_1800F5864(__int64 a1, unsigned __int16 a2, int a3)
{
  _DWORD *result; // rax

  result = (_DWORD *)sub_1800F558C(a1, a2, 1);
  if ( *result != a3 )
  {
    *result = a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
