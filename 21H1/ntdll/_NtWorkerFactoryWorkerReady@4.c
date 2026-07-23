/*
 * XREFs of _NtWorkerFactoryWorkerReady@4 @ 0x4B2F2970
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtWorkerFactoryWorkerReady(HANDLE WorkerFactoryHandle)
{
  return Wow64SystemServiceCall();
}
