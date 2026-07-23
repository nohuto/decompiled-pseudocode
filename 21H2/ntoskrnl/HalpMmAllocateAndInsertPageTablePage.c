/*
 * XREFs of HalpMmAllocateAndInsertPageTablePage @ 0x1403BB510
 * Callers:
 *     HalpMmGetPteAddressSafe @ 0x1403BBC70 (HalpMmGetPteAddressSafe.c)
 * Callees:
 *     HalpMmZeroPageWithTemporaryMapping @ 0x1403BB598 (HalpMmZeroPageWithTemporaryMapping.c)
 *     HalpAllocPhysicalMemory @ 0x140A65AC0 (HalpAllocPhysicalMemory.c)
 */

char __fastcall HalpMmAllocateAndInsertPageTablePage(unsigned __int64 *a1)
{
  char v2; // di
  __int64 v3; // rax
  __int64 v4; // rbx
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = 0;
  v3 = HalpAllocPhysicalMemory(HalpMmLoaderBlock, 0LL, 1LL, 0LL);
  v4 = v3;
  if ( v3 && (int)HalpMmZeroPageWithTemporaryMapping(v3) >= 0 )
  {
    _InterlockedOr(v6, 0);
    v2 = 1;
    *a1 = v4 & 0xFFFFFFFFF000LL | 0x8000000000000003uLL;
  }
  return v2;
}
