/*
 * XREFs of HalpDmaInitDiscard @ 0x140B1D7D0
 * Callers:
 *     HalpDmaInitSystem @ 0x140A5A5D0 (HalpDmaInitSystem.c)
 * Callees:
 *     HalpDmaInitMemory @ 0x140AF9CC8 (HalpDmaInitMemory.c)
 */

__int64 __fastcall HalpDmaInitDiscard(__int64 a1)
{
  __int64 *i; // rdx
  unsigned __int64 v2; // rax
  __int64 v3; // r9

  qword_140C02140 = (__int64)HaliGetDmaAdapter;
  off_140C01F58[0] = (__int64 (__fastcall *)())HalpDmaLinkDeviceObjectByToken;
  off_140C01F60 = (__int64 (__fastcall *)())HalpDmaCheckAdapterToken;
  off_140C01C40[0] = (__int64 (__fastcall *)())HalpAllocateMapRegisters;
  off_140C01EA8[0] = (__int64 (__fastcall *)())HalpDmaFreeCrashDumpRegisters;
  for ( i = *(__int64 **)(a1 + 32); i != (__int64 *)(a1 + 32); i = (__int64 *)*i )
  {
    v2 = *((int *)i + 6);
    if ( (unsigned int)v2 <= 0x25 )
    {
      v3 = 0x2BC0400048LL;
      if ( _bittest64(&v3, v2) )
        continue;
    }
    if ( ((i[4] + i[5]) << 12) - 1 > (unsigned __int64)HalpMaximumPhysicalMemoryAddress )
      HalpMaximumPhysicalMemoryAddress = ((i[4] + i[5]) << 12) - 1;
  }
  HalpDmaInitMemory(a1);
  return 0LL;
}
