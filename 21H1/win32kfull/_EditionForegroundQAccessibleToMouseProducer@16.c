/*
 * XREFs of _EditionForegroundQAccessibleToMouseProducer@16 @ 0xA1E12
 * Callers:
 *     <none>
 * Callees:
 *     ?WakeInjectedFlushWaiter@@YGXXZ @ 0xADC8C (-WakeInjectedFlushWaiter@@YGXXZ.c)
 *     ?MSGLUA_GPQFOREGROUND@@YGXXZ @ 0xC5904 (-MSGLUA_GPQFOREGROUND@@YGXXZ.c)
 */

int __stdcall EditionForegroundQAccessibleToMouseProducer(char a1, int a2, int a3, int a4)
{
  if ( !_gpqForeground || (unsigned __int8)CheckAccess(&a1, _gpqForeground + 316) )
    return 1;
  if ( a3 )
    MSGLUA_GPQFOREGROUND();
  if ( a4 )
    WakeInjectedFlushWaiter();
  return 0;
}
