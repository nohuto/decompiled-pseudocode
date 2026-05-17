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

int __fastcall RtlpFreeUserBlockToHeap(int a1, int a2, int a3)
{
  unsigned int v6; // edx
  unsigned int v7; // eax
  int HeapProtection; // eax
  _BYTE v9[4]; // [esp+8h] [ebp-Ch] BYREF
  int v10; // [esp+Ch] [ebp-8h] BYREF
  int v11; // [esp+10h] [ebp-4h] BYREF

  if ( *(_BYTE *)(a2 + 9) )
  {
    v6 = 1 << *(_BYTE *)(a2 + 8);
    if ( v6 > 0x78000 )
      v6 = 491520;
    v7 = v6 + *(unsigned __int16 *)(a2 + 10);
    v11 = 4096;
    v10 = a2 + v7;
    HeapProtection = RtlpGetHeapProtection(a1, 1);
    ZwProtectVirtualMemory(-1, &v10, &v11, HeapProtection, v9);
  }
  return RtlFreeHeap(a1, 0x800000, a2);
}
