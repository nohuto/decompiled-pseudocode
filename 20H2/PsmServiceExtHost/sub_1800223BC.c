/*
 * XREFs of sub_1800223BC @ 0x1800223BC
 * Callers:
 *     sub_180010990 @ 0x180010990 (sub_180010990.c)
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 *     sub_18001F8F0 @ 0x18001F8F0 (sub_18001F8F0.c)
 *     sub_180035534 @ 0x180035534 (sub_180035534.c)
 *     sub_1800714F0 @ 0x1800714F0 (sub_1800714F0.c)
 *     sub_180075D24 @ 0x180075D24 (sub_180075D24.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800223BC(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned int i; // r9d

  result = 0LL;
  for ( i = 0; i < 2; ++i )
  {
    if ( _bittest(&a2, i) )
      result = (unsigned int)(*(_DWORD *)(a1 + 24 * ((int)i + 47LL)) + result);
  }
  return result;
}
