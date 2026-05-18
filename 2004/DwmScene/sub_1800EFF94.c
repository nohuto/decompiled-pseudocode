/*
 * XREFs of sub_1800EFF94 @ 0x1800EFF94
 * Callers:
 *     sub_1800EFF60 @ 0x1800EFF60 (sub_1800EFF60.c)
 * Callees:
 *     sub_1800EFCBC @ 0x1800EFCBC (sub_1800EFCBC.c)
 */

_DWORD *__fastcall sub_1800EFF94(__int64 a1, unsigned __int16 a2, int a3)
{
  _DWORD *result; // rax

  result = (_DWORD *)sub_1800EFCBC(a1, a2, 1);
  if ( *result != a3 )
  {
    *result = a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
