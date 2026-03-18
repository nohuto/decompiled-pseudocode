/*
 * XREFs of MiUseSlabAllocatorForDriverPage @ 0x1402EB398
 * Callers:
 *     MiMakeDriverPagesPrivate @ 0x14033F41C (MiMakeDriverPagesPrivate.c)
 *     MiAllocateDriverPage @ 0x14079D08C (MiAllocateDriverPage.c)
 * Callees:
 *     MiGetSlabAllocatorTypeByProtection @ 0x1402EB3F8 (MiGetSlabAllocatorTypeByProtection.c)
 */

__int64 __fastcall MiUseSlabAllocatorForDriverPage(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int SlabAllocatorTypeByProtection; // eax
  _DWORD *v4; // r10

  if ( (MiFlags & 0x8000) != 0 && (*(_BYTE *)(a1 + 4) & 8) != 0 && (a2 & 2) != 0 )
  {
    v2 = 1LL;
    goto LABEL_5;
  }
  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 && (_DWORD)a2 )
  {
    v2 = 0LL;
LABEL_5:
    SlabAllocatorTypeByProtection = MiGetSlabAllocatorTypeByProtection(a1, a2, v2);
    *v4 = SlabAllocatorTypeByProtection;
    return 1LL;
  }
  return 0LL;
}
