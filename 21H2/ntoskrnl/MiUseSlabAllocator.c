/*
 * XREFs of MiUseSlabAllocator @ 0x140313D20
 * Callers:
 *     MiFinalizeImageHeaderPage @ 0x1402EB1A0 (MiFinalizeImageHeaderPage.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiResolveMappedFileFault @ 0x140339520 (MiResolveMappedFileFault.c)
 *     MiGetHardFaultPages @ 0x14033E280 (MiGetHardFaultPages.c)
 *     MiPfPrepareSequentialReadList @ 0x1407BCB30 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1407BD420 (MiPfPrepareReadList.c)
 * Callees:
 *     MiGetSlabAllocatorTypeByProtection @ 0x1402EB3F8 (MiGetSlabAllocatorTypeByProtection.c)
 */

__int64 __fastcall MiUseSlabAllocator(__int64 a1, __int64 *a2, __int16 a3, int *a4)
{
  __int64 v4; // r10
  int v7; // r8d
  int v8; // edx
  int v9; // eax
  int v10; // eax
  int SlabAllocatorTypeByProtection; // eax
  _DWORD *v12; // r9

  v4 = *a2;
  if ( (*(_DWORD *)(*a2 + 56) & 0x20) == 0 || (*(_BYTE *)(v4 + 62) & 0xC) == 4 || (a3 & 0x400) == 0 )
    return 0LL;
  v7 = *(_DWORD *)(a1 + 4);
  v8 = (*((unsigned __int16 *)a2 + 16) >> 1) & 0x1F;
  if ( (*(_DWORD *)(v4 + 92) & 0xC0000) != 0 )
  {
    if ( (v7 & 8) != 0 && ((*((_BYTE *)a2 + 34) & 2) == 0 || (v8 & 5) != 4) )
    {
      SlabAllocatorTypeByProtection = MiGetSlabAllocatorTypeByProtection(a1, v8, 1);
      *v12 = SlabAllocatorTypeByProtection;
      return 1LL;
    }
    return 0LL;
  }
  if ( (v7 & 0x10) == 0 )
    return 0LL;
  v9 = v8 & 5;
  if ( v9 == 5 || v9 == 4 )
  {
    *a4 = 6;
    return 1LL;
  }
  else
  {
    if ( (v8 & 2) != 0 )
      v10 = 4;
    else
      v10 = 5;
    *a4 = v10;
    return 1LL;
  }
}
