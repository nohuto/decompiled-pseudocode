/*
 * XREFs of ZwWorkerFactoryWorkerReady @ 0x1403F8190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwWorkerFactoryWorkerReady()
{
  _disable();
  __readeflags();
  return KiServiceInternal();
}
