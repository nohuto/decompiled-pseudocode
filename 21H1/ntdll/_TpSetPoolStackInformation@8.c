/*
 * XREFs of _TpSetPoolStackInformation@8 @ 0x4B2ED670
 * Callers:
 *     _TppPoolpReferenceGlobalPool@12 @ 0x4B2B50CD (_TppPoolpReferenceGlobalPool@12.c)
 *     _TpSetDefaultPoolStackInformation@4 @ 0x4B383D40 (_TpSetDefaultPoolStackInformation@4.c)
 * Callees:
 *     _ZwSetInformationWorkerFactory@16 @ 0x4B2F4370 (_ZwSetInformationWorkerFactory@16.c)
 */

NTSTATUS __cdecl TpSetPoolStackInformation(PTP_POOL Pool, PTP_POOL_STACK_INFORMATION PoolStackInformation)
{
  if ( Pool && PoolStackInformation )
    return ZwSetInformationWorkerFactory(*((HANDLE *)Pool + 9), WorkerFactoryStackInformation, PoolStackInformation, 8u);
  else
    return -1073741811;
}
