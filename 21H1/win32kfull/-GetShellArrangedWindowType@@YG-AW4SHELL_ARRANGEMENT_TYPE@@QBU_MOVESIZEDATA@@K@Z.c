/*
 * XREFs of ?GetShellArrangedWindowType@@YG?AW4SHELL_ARRANGEMENT_TYPE@@QBU_MOVESIZEDATA@@K@Z @ 0x171205
 * Callers:
 *     ?PreserveShellArrangementDuringTopBottomSize@@YGHPBU_MOVESIZEDATA@@@Z @ 0x171F4C (-PreserveShellArrangementDuringTopBottomSize@@YGHPBU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall GetShellArrangedWindowType(int a1, char a2)
{
  int v2; // esi

  v2 = 6;
  if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 20) + 145) & 1) == 0 )
  {
    if ( (a2 & 0xE) == 0xE )
      return 3;
    if ( (a2 & 6) == 6 )
      return 4;
    if ( (a2 & 0xC) != 0xC )
      return v2;
    return 5;
  }
  if ( (a2 & 0xB) != 0xB )
  {
    if ( (a2 & 3) == 3 )
      return 1;
    if ( (a2 & 9) != 9 )
      return v2;
    return 2;
  }
  return 0;
}
