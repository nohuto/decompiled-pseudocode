/*
 * XREFs of MiDeterminePoolType @ 0x1402FAD9C
 * Callers:
 *     MmDeterminePoolType @ 0x1402D2AAC (MmDeterminePoolType.c)
 *     MmFreePoolMemory @ 0x1402FA848 (MmFreePoolMemory.c)
 *     ExGetHeapFromVA @ 0x1402FAC7C (ExGetHeapFromVA.c)
 *     ExProtectPoolEx @ 0x140362BE8 (ExProtectPoolEx.c)
 *     ExpHpIsSpecialPoolHeap @ 0x1403CDD4C (ExpHpIsSpecialPoolHeap.c)
 *     MiGenerateAccessViolation @ 0x140548560 (MiGenerateAccessViolation.c)
 *     ExAllocateHeapSpecialPool @ 0x1405B9D7C (ExAllocateHeapSpecialPool.c)
 *     ExpFreeHeapSpecialPool @ 0x1405BA0E0 (ExpFreeHeapSpecialPool.c)
 *     ExpSizeHeapPool @ 0x1405BA330 (ExpSizeHeapPool.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MiDeterminePoolType(__int64 a1)
{
  int SystemRegionType; // eax
  int v2; // ecx
  __int64 result; // rax

  SystemRegionType = MiGetSystemRegionType(a1);
  v2 = SystemRegionType;
  if ( SystemRegionType == 1 )
    return 33LL;
  if ( SystemRegionType == 5 )
    return 0LL;
  result = 32LL;
  if ( v2 == 6 )
    return 1LL;
  return result;
}
