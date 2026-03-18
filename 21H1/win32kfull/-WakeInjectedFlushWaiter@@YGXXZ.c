/*
 * XREFs of ?WakeInjectedFlushWaiter@@YGXXZ @ 0xADC8C
 * Callers:
 *     _EditionForegroundQAccessibleToMouseProducer@16 @ 0xA1E12 (_EditionForegroundQAccessibleToMouseProducer@16.c)
 * Callees:
 *     <none>
 */

void __stdcall WakeInjectedFlushWaiter()
{
  if ( (unsigned __int8)IsInputThread() )
  {
    if ( _gbMouseInjectionBlockedOnDIT )
      KeSetEvent(gpkeDITMouseInjectionResponseEvent, 1, 0);
  }
}
