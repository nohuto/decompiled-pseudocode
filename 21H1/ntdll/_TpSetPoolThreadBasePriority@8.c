/*
 * XREFs of _TpSetPoolThreadBasePriority@8 @ 0x4B2ABA70
 * Callers:
 *     <none>
 * Callees:
 *     _ZwSetInformationWorkerFactory@16 @ 0x4B2F4370 (_ZwSetInformationWorkerFactory@16.c)
 */

NTSTATUS __cdecl TpSetPoolThreadBasePriority(PTP_POOL Pool, ULONG BasePriority)
{
  if ( !Pool )
    return -1073741811;
  if ( (int)BasePriority < 15 )
  {
    if ( (int)BasePriority <= -15 )
      BasePriority = -16;
  }
  else
  {
    BasePriority = 16;
  }
  return ZwSetInformationWorkerFactory(*((HANDLE *)Pool + 9), WorkerFactoryThreadBasePriority, &BasePriority, 4u);
}
