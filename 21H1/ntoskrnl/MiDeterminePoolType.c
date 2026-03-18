/*
 * XREFs of MiDeterminePoolType @ 0x1402AC3D0
 * Callers:
 *     ExFreeHeapPool @ 0x14024C790 (ExFreeHeapPool.c)
 *     MmFreePoolMemory @ 0x1402AC0AC (MmFreePoolMemory.c)
 *     ExGetHeapFromVA @ 0x1402AC2AC (ExGetHeapFromVA.c)
 *     ExProtectPoolEx @ 0x1402DF9C4 (ExProtectPoolEx.c)
 *     MmDeterminePoolType @ 0x140322298 (MmDeterminePoolType.c)
 *     ExpHpIsSpecialPoolHeap @ 0x1403C994C (ExpHpIsSpecialPoolHeap.c)
 *     MiGenerateAccessViolation @ 0x140542A40 (MiGenerateAccessViolation.c)
 *     ExAllocateHeapSpecialPool @ 0x1405B40CC (ExAllocateHeapSpecialPool.c)
 *     ExpFreeHeapSpecialPool @ 0x1405B4430 (ExpFreeHeapSpecialPool.c)
 *     ExpSizeHeapPool @ 0x1405B4678 (ExpSizeHeapPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDeterminePoolType(unsigned __int64 a1)
{
  unsigned __int8 v1; // cl

  if ( a1 >= 0xFFFF800000000000uLL )
  {
    v1 = byte_140C4F908[((a1 >> 39) & 0x1FF) - 256];
    switch ( v1 )
    {
      case 1u:
        return 33LL;
      case 5u:
        return 0LL;
      case 6u:
        return 1LL;
    }
  }
  return 32LL;
}
