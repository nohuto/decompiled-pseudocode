/*
 * XREFs of HalpPowerInitDiscard @ 0x140A6A49C
 * Callers:
 *     HalpPowerInitSystem @ 0x1409A1CB0 (HalpPowerInitSystem.c)
 * Callees:
 *     RtlSetAllBits @ 0x1402934B0 (RtlSetAllBits.c)
 *     RtlClearBits @ 0x1402AB730 (RtlClearBits.c)
 *     HalpPowerInitNvsRegionData @ 0x140A6A594 (HalpPowerInitNvsRegionData.c)
 */

__int64 __fastcall HalpPowerInitDiscard(__int64 a1)
{
  __int64 **v2; // rdi
  __int64 *i; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  ULONG v6; // edx
  ULONG v7; // r8d

  HalpLowMemoryMap.SizeOfBitMap = 256;
  off_140C005A8[0] = (__int64 (__fastcall *)())HaliLocateHiberRanges;
  HalpLowMemoryMapStack.SizeOfBitMap = 256;
  off_140C005D8 = HaliHaltSystem;
  off_140C00838[0] = (__int64 (__fastcall *)())HalpPowerEarlyRestore;
  off_140C008A8[0] = (__int64 (__fastcall *)())HalpPowerSetRebootHandler;
  HalpLowMemoryMap.Buffer = (unsigned int *)&HalpLowMemoryMapBuffer;
  HalpLowMemoryMapStack.Buffer = (unsigned int *)&HalpLowMemoryMapStackBuffer;
  RtlSetAllBits(&HalpLowMemoryMap);
  v2 = (__int64 **)(a1 + 32);
  for ( i = *v2; i != (__int64 *)v2; i = (__int64 *)*i )
  {
    v4 = *((int *)i + 4);
    if ( (unsigned int)v4 <= 0x23 )
    {
      v5 = 0xBC0400048LL;
      if ( _bittest64(&v5, v4) )
        continue;
    }
    if ( (unsigned __int64)i[3] < 0x100 )
    {
      v6 = *((_DWORD *)i + 6);
      v7 = 256 - v6;
      if ( 256 - v6 > (unsigned __int64)i[4] )
        v7 = *((_DWORD *)i + 8);
      RtlClearBits(&HalpLowMemoryMap, v6, v7);
    }
  }
  HalpPowerInitNvsRegionData();
  return 0LL;
}
