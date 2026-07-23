/*
 * XREFs of HalpMmReservePageTablePages @ 0x1403BB37C
 * Callers:
 *     HalpMmInitSystem @ 0x1409A1500 (HalpMmInitSystem.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x14037AE50 (HalQueryMaximumProcessorCount.c)
 *     HalpInterruptModel @ 0x14037AEA4 (HalpInterruptModel.c)
 *     HalpMmGetPteAddressSafe @ 0x1403BBC70 (HalpMmGetPteAddressSafe.c)
 */

__int64 HalpMmReservePageTablePages()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rsi

  result = HalpInterruptModel();
  if ( (_DWORD)result == 3 )
  {
    result = HalQueryMaximumProcessorCount(v2);
    v1 = ((unsigned int)result + 16LL) << 18;
  }
  v3 = 0LL;
  v4 = HalpOriginalHeapStart;
  v5 = (unsigned __int64)(v1 + (HalpMmEarlyPhysicalPagesAllocated << 12) + 0x1FFFFF) >> 21;
  if ( v5 )
  {
    do
    {
      if ( v4 > HalpOriginalHeapEnd )
        break;
      result = HalpMmGetPteAddressSafe(v4);
      ++v3;
      v4 += 0x200000LL;
    }
    while ( v3 < v5 );
  }
  return result;
}
