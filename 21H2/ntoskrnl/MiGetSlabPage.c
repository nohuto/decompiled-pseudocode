/*
 * XREFs of MiGetSlabPage @ 0x1402EB440
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1402715A0 (MiPfPutPagesInTransition.c)
 *     MiGetPageTablePages @ 0x14027D03C (MiGetPageTablePages.c)
 *     MiFinalizeImageHeaderPage @ 0x1402EB1A0 (MiFinalizeImageHeaderPage.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiResolveMappedFileFault @ 0x140339520 (MiResolveMappedFileFault.c)
 *     MiAllocateKernelStackPages @ 0x14033B770 (MiAllocateKernelStackPages.c)
 *     MiGetHardFaultPages @ 0x14033E280 (MiGetHardFaultPages.c)
 *     MiProtectDriverSectionPte @ 0x140582320 (MiProtectDriverSectionPte.c)
 *     MmAllocateNonChargedSecurePages @ 0x14058A110 (MmAllocateNonChargedSecurePages.c)
 *     MiCompleteSecureProcessFault @ 0x1405A6E74 (MiCompleteSecureProcessFault.c)
 *     MmAllocateSecureKernelPages @ 0x1405B1A10 (MmAllocateSecureKernelPages.c)
 *     MiAllocateDriverPage @ 0x14079D08C (MiAllocateDriverPage.c)
 *     MiPfPrepareSequentialReadList @ 0x1407BCB30 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1407BD420 (MiPfPrepareReadList.c)
 *     MmAllocateIndependentPagesEx @ 0x140829CBC (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     MiGetPageFromSlabAllocator @ 0x1402EB59C (MiGetPageFromSlabAllocator.c)
 *     MiReplenishSlabAllocator @ 0x1405B1974 (MiReplenishSlabAllocator.c)
 *     MiSlabAllocatorRecentFailure @ 0x1405B19C8 (MiSlabAllocatorRecentFailure.c)
 */

__int64 __fastcall MiGetSlabPage(__int64 a1, signed int a2, unsigned int a3, char a4, _QWORD *a5, unsigned int a6)
{
  __int64 v7; // rdi
  __int64 result; // rax
  unsigned int v10; // ebx
  unsigned int *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbp
  unsigned int *v15; // [rsp+20h] [rbp-38h]

  v7 = a2;
  if ( (unsigned __int64)a5 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    *a5 = 0LL;
  if ( (unsigned int)a2 > 3 && *(_BYTE *)(a2 + a1 + 15976) )
    return -1LL;
  v10 = a3 >> byte_140C506CC;
  while ( 1 )
  {
    v11 = (unsigned int *)(qword_140C506D8 + 4LL * v10 * (unsigned __int16)KeNumberNodes);
    v12 = (a4 & 1) != 0 ? 4LL : 4LL * (unsigned __int16)KeNumberNodes;
    v15 = (unsigned int *)((char *)v11 + v12);
    if ( v11 < (unsigned int *)((char *)v11 + v12) )
      break;
LABEL_16:
    if ( (a4 & 2) == 0 )
    {
      result = -1LL;
      if ( (unsigned int)v7 > 3 && (a4 & 1) == 0 )
        *(_BYTE *)(v7 + a1 + 15976) = 1;
      return result;
    }
    a4 &= ~2u;
  }
  v13 = 168 * v7;
  while ( 1 )
  {
    v14 = *(_QWORD *)(a1 + 16) + 24512LL * *v11 + v13 + 23168;
    result = MiGetPageFromSlabAllocator(v14);
    if ( result != -1 )
      return result;
    if ( (a4 & 2) == 0
      && *(_DWORD *)(v14 + 48) <= 3u
      && !(unsigned int)MiSlabAllocatorRecentFailure(v14)
      && (unsigned int)MiReplenishSlabAllocator(v14, a1, 1LL, a6) )
    {
      --v11;
    }
    v13 = 168 * v7;
    if ( ++v11 >= v15 )
      goto LABEL_16;
  }
}
