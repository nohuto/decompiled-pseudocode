/*
 * XREFs of sub_1800F5744 @ 0x1800F5744
 * Callers:
 *     sub_1800F5710 @ 0x1800F5710 (sub_1800F5710.c)
 * Callees:
 *     sub_1800F558C @ 0x1800F558C (sub_1800F558C.c)
 */

_DWORD *__fastcall sub_1800F5744(__int64 a1, unsigned __int16 a2, char a3)
{
  int v4; // edi
  _DWORD *result; // rax

  v4 = -(a3 != 0);
  result = (_DWORD *)sub_1800F558C(a1, a2, 0);
  if ( *result != v4 )
  {
    *result = v4;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
