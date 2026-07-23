/*
 * XREFs of PnpFindBestConfiguration @ 0x1407528A4
 * Callers:
 *     PnpAllocateResources @ 0x14074FEA8 (PnpAllocateResources.c)
 *     PnpReallocateResources @ 0x1408B32C0 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x1408B34A8 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x1408B8904 (PnpRebalance.c)
 * Callees:
 *     PnpFindBestConfigurationWorker @ 0x1407528FC (PnpFindBestConfigurationWorker.c)
 */

__int64 __fastcall PnpFindBestConfiguration(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < 2; ++i )
  {
    result = PnpFindBestConfigurationWorker(a1, a2, a3, i);
    if ( (int)result >= 0 )
      break;
  }
  return result;
}
