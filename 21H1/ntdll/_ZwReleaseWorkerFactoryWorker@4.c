/*
 * XREFs of _ZwReleaseWorkerFactoryWorker@4 @ 0x4B2F4070
 * Callers:
 *     _TppPrepareDirectParams@24 @ 0x4B2B64B0 (_TppPrepareDirectParams@24.c)
 *     _TpPostTask@16 @ 0x4B2C1C3F (_TpPostTask@16.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwReleaseWorkerFactoryWorker(HANDLE WorkerFactoryHandle)
{
  return Wow64SystemServiceCall();
}
