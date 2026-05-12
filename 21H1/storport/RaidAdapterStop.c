/*
 * XREFs of RaidAdapterStop @ 0x1C000FF90
 * Callers:
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C000F8FC (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterReleaseResources @ 0x1C0077A4C (RaidAdapterReleaseResources.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C0077D68 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     RaidAdapterStopAdapter @ 0x1C000FFE0 (RaidAdapterStopAdapter.c)
 *     RaidIsAdapterControlSupported @ 0x1C00166D8 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterStop(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 536) || !*(_QWORD *)(a1 + 544) )
    return 0LL;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 1LL) )
    return (unsigned int)RaidAdapterStopAdapter(a1);
  return v1;
}
