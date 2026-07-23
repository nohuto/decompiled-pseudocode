/*
 * XREFs of HalpDmaInitDiscard @ 0x140A64AC0
 * Callers:
 *     HalpDmaInitSystem @ 0x1409A1270 (HalpDmaInitSystem.c)
 * Callees:
 *     HalpDmaInitMemory @ 0x140A658D4 (HalpDmaInitMemory.c)
 */

__int64 __fastcall HalpDmaInitDiscard(__int64 a1)
{
  __int64 *i; // rdx
  unsigned __int64 v2; // rax
  __int64 v3; // r9

  qword_140C00AD0 = (__int64)HaliGetDmaAdapter;
  off_140C00908[0] = (__int64 (__fastcall *)())HalpDmaLinkDeviceObjectByToken;
  off_140C00910 = (__int64 (__fastcall *)())HalpDmaCheckAdapterToken;
  off_140C005F0[0] = (__int64 (__fastcall *)())HalpAllocateMapRegisters;
  off_140C00858[0] = (__int64 (__fastcall *)())HalpDmaFreeCrashDumpRegisters;
  for ( i = *(__int64 **)(a1 + 32); i != (__int64 *)(a1 + 32); i = (__int64 *)*i )
  {
    v2 = *((int *)i + 4);
    if ( (unsigned int)v2 <= 0x25 )
    {
      v3 = 0x2BC0400048LL;
      if ( _bittest64(&v3, v2) )
        continue;
    }
    if ( ((i[3] + i[4]) << 12) - 1 > (unsigned __int64)HalpMaximumPhysicalMemoryAddress )
      HalpMaximumPhysicalMemoryAddress = ((i[3] + i[4]) << 12) - 1;
  }
  HalpDmaInitMemory();
  return 0LL;
}
