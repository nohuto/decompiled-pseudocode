/*
 * XREFs of LdrpCreateLoaderEvents @ 0x18007E0A0
 * Callers:
 *     LdrpInitParallelLoadingSupport @ 0x18007E050 (LdrpInitParallelLoadingSupport.c)
 *     LdrpCompleteProcessCloning @ 0x1800D4A18 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     ZwCreateEvent @ 0x18009D710 (ZwCreateEvent.c)
 */

int LdrpCreateLoaderEvents()
{
  int result; // eax

  result = ZwCreateEvent(&LdrpLoadCompleteEvent, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  if ( result >= 0 )
    return ZwCreateEvent(&LdrpWorkCompleteEvent, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  return result;
}
