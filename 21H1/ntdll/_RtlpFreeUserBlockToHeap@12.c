/*
 * XREFs of _RtlpFreeUserBlockToHeap@12 @ 0x4B2ADD03
 * Callers:
 *     @RtlpFreeUserBlock@12 @ 0x4B2C24DB (@RtlpFreeUserBlock@12.c)
 *     _RtlpLowFragHeapFlushCaches@4 @ 0x4B37172A (_RtlpLowFragHeapFlushCaches@4.c)
 * Callees:
 *     _RtlpGetHeapProtection@8 @ 0x4B2AF0A0 (_RtlpGetHeapProtection@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _ZwProtectVirtualMemory@20 @ 0x4B2F2E80 (_ZwProtectVirtualMemory@20.c)
 */

LOGICAL __fastcall RtlpFreeUserBlockToHeap(PVOID BaseAddress, _BYTE *a2, int a3)
{
  unsigned int v6; // edx
  unsigned int v7; // eax
  ULONG HeapProtection; // eax
  ULONG OldProtect; // [esp+8h] [ebp-Ch] BYREF
  PVOID BaseAddressa; // [esp+Ch] [ebp-8h] BYREF
  ULONG_PTR RegionSize; // [esp+10h] [ebp-4h] BYREF

  if ( a2[9] )
  {
    v6 = 1 << a2[8];
    if ( v6 > 0x78000 )
      v6 = 491520;
    v7 = v6 + *((unsigned __int16 *)a2 + 5);
    LODWORD(RegionSize) = 4096;
    BaseAddressa = &a2[v7];
    HeapProtection = RtlpGetHeapProtection(BaseAddress);
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddressa, &RegionSize, HeapProtection, &OldProtect);
  }
  return RtlFreeHeap(BaseAddress, 0x800000u, a2);
}
