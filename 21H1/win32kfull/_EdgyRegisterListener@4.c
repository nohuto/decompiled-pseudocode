/*
 * XREFs of _EdgyRegisterListener@4 @ 0x16F0BE
 * Callers:
 *     _NtUserRegisterEdgy@12 @ 0x167F38 (_NtUserRegisterEdgy@12.c)
 * Callees:
 *     ?_AddOrUpdateListener@Edgy@@YGHPAUtagDESKTOP@@PAXW4tagEDGY_LOCATION@@PAUHWND__@@@Z @ 0x16E23D (-_AddOrUpdateListener@Edgy@@YGHPAUtagDESKTOP@@PAXW4tagEDGY_LOCATION@@PAUHWND__@@@Z.c)
 */

int __thiscall EdgyRegisterListener(int *this)
{
  if ( this )
    return Edgy::_AddOrUpdateListener(*(_DWORD *)(_gptiCurrent + 248), *this, this[2], this[1]);
  else
    return 0;
}
