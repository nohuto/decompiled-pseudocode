/*
 * XREFs of HalpCheckLowMemoryPreSleep @ 0x1409A8FCC
 * Callers:
 *     HaliAcpiSleep @ 0x140386080 (HaliAcpiSleep.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 *     RtlClearAllBits @ 0x1402F70D0 (RtlClearAllBits.c)
 *     IoGetStackLimits @ 0x14035B170 (IoGetStackLimits.c)
 *     HalpUnmapVirtualAddress @ 0x1403BBA00 (HalpUnmapVirtualAddress.c)
 *     HalpMapPhysicalMemory64 @ 0x1403EFFF0 (HalpMapPhysicalMemory64.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpSimpleCheck @ 0x1409A90EC (HalpSimpleCheck.c)
 */

void __fastcall HalpCheckLowMemoryPreSleep(int a1)
{
  char *v1; // rbx
  unsigned __int64 v2; // rdi
  PHYSICAL_ADDRESS v3; // rax
  unsigned __int64 i; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 LowLimit; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 HighLimit; // [rsp+40h] [rbp+18h] BYREF

  if ( (a1 & 0x20000) != 0 )
  {
    HighLimit = 0LL;
    LowLimit = 0LL;
    RtlClearAllBits(&HalpLowMemoryMapStack);
    IoGetStackLimits(&LowLimit, &HighLimit);
    v1 = (char *)(LowLimit & 0xFFFFFFFFFFFFF000uLL);
    v2 = (HighLimit + 4095) & 0xFFFFFFFFFFFFF000uLL;
    while ( (unsigned __int64)v1 < v2 )
    {
      v3.QuadPart = MmGetPhysicalAddress(v1).QuadPart >> 12;
      if ( v3.QuadPart < 0x100uLL )
        _bittestandset((signed __int32 *)HalpLowMemoryMapStack.Buffer, v3.LowPart);
      v1 += 4096;
    }
    memset(HalpPhysicalMemoryCheckSums, 0, sizeof(HalpPhysicalMemoryCheckSums));
    for ( i = 0LL; i < 0x100; ++i )
    {
      if ( !_bittest((const signed __int32 *)HalpLowMemoryMap.Buffer, i)
        && !_bittest((const signed __int32 *)HalpLowMemoryMapStack.Buffer, i) )
      {
        v5 = HalpMapPhysicalMemory64(i << 12, 1LL, 0, 4LL);
        if ( v5 )
        {
          HalpPhysicalMemoryCheckSums[i] = HalpSimpleCheck(v5, v6, v7, v5);
          HalpUnmapVirtualAddress(v8, 1LL, 0LL);
        }
      }
    }
  }
}
