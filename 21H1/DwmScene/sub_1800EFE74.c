/*
 * XREFs of sub_1800EFE74 @ 0x1800EFE74
 * Callers:
 *     sub_1800EFE40 @ 0x1800EFE40 (sub_1800EFE40.c)
 * Callees:
 *     sub_1800EFCBC @ 0x1800EFCBC (sub_1800EFCBC.c)
 */

_DWORD *__fastcall sub_1800EFE74(__int64 a1, unsigned __int16 a2, char a3)
{
  int v4; // edi
  _DWORD *result; // rax

  v4 = -(a3 != 0);
  result = (_DWORD *)sub_1800EFCBC(a1, a2, 0);
  if ( *result != v4 )
  {
    *result = v4;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
