/*
 * XREFs of _TpQueryPoolStackInformation@8 @ 0x4B383B90
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQueryInformationWorkerFactory@20 @ 0x4B2F3E70 (_ZwQueryInformationWorkerFactory@20.c)
 */

NTSTATUS __cdecl TpQueryPoolStackInformation(PTP_POOL Pool, PTP_POOL_STACK_INFORMATION PoolStackInformation)
{
  NTSTATUS result; // eax
  _BYTE WorkerFactoryInformation[84]; // [esp+4h] [ebp-60h] BYREF
  SIZE_T v4; // [esp+58h] [ebp-Ch]

  if ( !Pool || !PoolStackInformation )
    return -1073741811;
  result = ZwQueryInformationWorkerFactory(
             *((HANDLE *)Pool + 9),
             WorkerFactoryBasicInformation,
             WorkerFactoryInformation,
             0x60u,
             0);
  if ( result >= 0 )
    PoolStackInformation->StackReserve = v4;
  return result;
}
