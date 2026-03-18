/*
 * XREFs of MiDeterminePoolType @ 0x1402381E0
 * Callers:
 *     ExFreeHeapPool @ 0x1402176E0 (ExFreeHeapPool.c)
 *     MmFreePoolMemory @ 0x140237AB4 (MmFreePoolMemory.c)
 *     ExGetHeapFromVA @ 0x1402380B4 (ExGetHeapFromVA.c)
 *     ExProtectPoolEx @ 0x140238434 (ExProtectPoolEx.c)
 *     MmDeterminePoolType @ 0x14033093C (MmDeterminePoolType.c)
 *     ExpHpIsSpecialPoolHeap @ 0x1403CD36C (ExpHpIsSpecialPoolHeap.c)
 *     MiGenerateAccessViolation @ 0x140546A60 (MiGenerateAccessViolation.c)
 *     ExAllocateHeapSpecialPool @ 0x1405B834C (ExAllocateHeapSpecialPool.c)
 *     ExpFreeHeapSpecialPool @ 0x1405B86B0 (ExpFreeHeapSpecialPool.c)
 *     ExpSizeHeapPool @ 0x1405B88F8 (ExpSizeHeapPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDeterminePoolType(unsigned __int64 a1)
{
  char v1; // cl

  if ( a1 >= 0xFFFF800000000000uLL )
  {
    v1 = byte_140C4F848[((a1 >> 39) & 0x1FF) - 256];
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
