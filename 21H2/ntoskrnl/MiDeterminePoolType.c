/*
 * XREFs of MiDeterminePoolType @ 0x140305AEC
 * Callers:
 *     MmDeterminePoolType @ 0x14025102C (MmDeterminePoolType.c)
 *     ExProtectPoolEx @ 0x1402F7F18 (ExProtectPoolEx.c)
 *     MmFreePoolMemory @ 0x140305598 (MmFreePoolMemory.c)
 *     ExGetHeapFromVA @ 0x1403059CC (ExGetHeapFromVA.c)
 *     ExpHpIsSpecialPoolHeap @ 0x1403CDEBC (ExpHpIsSpecialPoolHeap.c)
 *     MiGenerateAccessViolation @ 0x1405487A0 (MiGenerateAccessViolation.c)
 *     ExAllocateHeapSpecialPool @ 0x1405B9FAC (ExAllocateHeapSpecialPool.c)
 *     ExpFreeHeapSpecialPool @ 0x1405BA310 (ExpFreeHeapSpecialPool.c)
 *     ExpSizeHeapPool @ 0x1405BA560 (ExpSizeHeapPool.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
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
