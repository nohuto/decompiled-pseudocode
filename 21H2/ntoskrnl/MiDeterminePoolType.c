/*
 * XREFs of MiDeterminePoolType @ 0x140366FB0
 * Callers:
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     ExGetHeapFromVA @ 0x140366C48 (ExGetHeapFromVA.c)
 *     MmFreePoolMemory @ 0x140366DA8 (MmFreePoolMemory.c)
 *     ExProtectPoolEx @ 0x140367008 (ExProtectPoolEx.c)
 *     MmDeterminePoolType @ 0x140367A44 (MmDeterminePoolType.c)
 *     ExReturnPoolQuota @ 0x140367A64 (ExReturnPoolQuota.c)
 *     ExpHpIsSpecialPoolHeap @ 0x140461DE4 (ExpHpIsSpecialPoolHeap.c)
 *     MiGenerateAccessViolation @ 0x1405A7258 (MiGenerateAccessViolation.c)
 *     ExQueryPoolBlockSize @ 0x14063B220 (ExQueryPoolBlockSize.c)
 *     ExAllocateHeapSpecialPool @ 0x140641F58 (ExAllocateHeapSpecialPool.c)
 *     ExpFreeHeapSpecialPool @ 0x1406423A4 (ExpFreeHeapSpecialPool.c)
 *     ExpSizeHeapPool @ 0x1406427C4 (ExpSizeHeapPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDeterminePoolType(unsigned __int64 a1)
{
  char v1; // cl

  if ( a1 >= 0xFFFF800000000000uLL )
  {
    v1 = byte_140C53F50[((a1 >> 39) & 0x1FF) - 256];
    switch ( v1 )
    {
      case 1:
        return 33LL;
      case 5:
        return 0LL;
      case 6:
        return 1LL;
    }
  }
  return 32LL;
}
