/*
 * XREFs of PnpFindBestConfiguration @ 0x14081FF24
 * Callers:
 *     PnpAllocateResources @ 0x140747FB4 (PnpAllocateResources.c)
 *     PnpReallocateResources @ 0x140958D9C (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x140958F84 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x14095A02C (PnpRebalance.c)
 * Callees:
 *     PnpFindBestConfigurationWorker @ 0x14081FF7C (PnpFindBestConfigurationWorker.c)
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
