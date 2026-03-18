/*
 * XREFs of _EditionIsGpqForegroundAccessibleCurrent@4 @ 0xAFEFA
 * Callers:
 *     <none>
 * Callees:
 *     ?IsGpqForegroundAccessibleCurrent@@YGHH@Z @ 0xAFF1C (-IsGpqForegroundAccessibleCurrent@@YGHH@Z.c)
 *     ?MSGLUA_GPQFOREGROUND@@YGXXZ @ 0xC5904 (-MSGLUA_GPQFOREGROUND@@YGXXZ.c)
 */

int __stdcall EditionIsGpqForegroundAccessibleCurrent(int a1)
{
  int savedregs; // [esp+0h] [ebp+0h]

  if ( IsGpqForegroundAccessibleCurrent(savedregs) )
    return 1;
  MSGLUA_GPQFOREGROUND();
  return 0;
}
