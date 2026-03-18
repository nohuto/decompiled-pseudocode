/*
 * XREFs of MiDeterminePoolType @ 0x1402533A0
 * Callers:
 *     MmFreePoolMemory @ 0x14025307C (MmFreePoolMemory.c)
 *     ExGetHeapFromVA @ 0x14025327C (ExGetHeapFromVA.c)
 *     ExProtectPoolEx @ 0x14027033C (ExProtectPoolEx.c)
 *     ExFreeHeapPool @ 0x140289030 (ExFreeHeapPool.c)
 *     MmDeterminePoolType @ 0x14035FBAC (MmDeterminePoolType.c)
 *     ExpHpIsSpecialPoolHeap @ 0x1403CA72C (ExpHpIsSpecialPoolHeap.c)
 *     MiGenerateAccessViolation @ 0x140543090 (MiGenerateAccessViolation.c)
 *     ExAllocateHeapSpecialPool @ 0x1405B47EC (ExAllocateHeapSpecialPool.c)
 *     ExpFreeHeapSpecialPool @ 0x1405B4B50 (ExpFreeHeapSpecialPool.c)
 *     ExpSizeHeapPool @ 0x1405B4D98 (ExpSizeHeapPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDeterminePoolType(unsigned __int64 a1)
{
  char v1; // cl

  if ( a1 >= 0xFFFF800000000000uLL )
  {
    v1 = byte_140C4F7C8[((a1 >> 39) & 0x1FF) - 256];
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
