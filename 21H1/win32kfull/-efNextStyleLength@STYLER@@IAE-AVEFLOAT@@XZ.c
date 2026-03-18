/*
 * XREFs of ?efNextStyleLength@STYLER@@IAE?AVEFLOAT@@XZ @ 0x23600C
 * Callers:
 *     ?vNextStyleEvent@STYLER@@QAEXXZ @ 0x23710F (-vNextStyleEvent@STYLER@@QAEXXZ.c)
 * Callees:
 *     _ftoef_c@8 @ 0xEEEB1 (_ftoef_c@8.c)
 */

_DWORD *__fastcall STYLER::efNextStyleLength(unsigned int a1, int a2, _DWORD *a3)
{
  _DWORD *result; // eax
  int v5[2]; // [esp+4h] [ebp-8h] BYREF

  ftoef_c(a1, a2, **(_DWORD **)(a1 + 700), v5);
  *(_DWORD *)(a1 + 700) += 4;
  if ( *(_DWORD *)(a1 + 700) >= *(_DWORD *)(a1 + 704) )
    *(_DWORD *)(a1 + 700) = *(_DWORD *)(a1 + 696);
  result = a3;
  *a3 = v5[0];
  a3[1] = v5[1];
  return result;
}
