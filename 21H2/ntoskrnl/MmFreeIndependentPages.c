/*
 * XREFs of MmFreeIndependentPages @ 0x14096ED20
 * Callers:
 *     KeAllocateProcessorProfileStructures @ 0x1403D83A0 (KeAllocateProcessorProfileStructures.c)
 *     HvlStartBootLogicalProcessors @ 0x1403DEDD0 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x14054B14C (HvlpInitializeHvCrashdump.c)
 *     ExDeletePoolTagTable @ 0x14063A6C0 (ExDeletePoolTagTable.c)
 *     HvpFreeBin @ 0x1406D16F8 (HvpFreeBin.c)
 *     HvlDeleteProcessor @ 0x140931100 (HvlDeleteProcessor.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14093C2FC (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpReleaseResources @ 0x14093CFC8 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x14093D590 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14093DA18 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     KiStartDynamicProcessor @ 0x14096029C (KiStartDynamicProcessor.c)
 *     MmFreeIsrStack @ 0x1409783E8 (MmFreeIsrStack.c)
 *     KeStartAllProcessors @ 0x140B03C68 (KeStartAllProcessors.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140228660 (MiLockAndDecrementShareCount.c)
 *     MiReturnPoolCharges @ 0x140228AA0 (MiReturnPoolCharges.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiIsPfnFromSlabAllocation @ 0x140277C50 (MiIsPfnFromSlabAllocation.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 */

void __fastcall MmFreeIndependentPages(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  _QWORD *PteAddress; // rdi
  _QWORD *v4; // r13
  __int64 v5; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // r12
  int v8; // r15d
  bool v9; // zf
  _OWORD v10[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v11; // [rsp+40h] [rbp-20h]
  __int64 v12; // [rsp+50h] [rbp-10h]
  __int64 v13; // [rsp+A8h] [rbp+48h] BYREF
  unsigned __int64 v14; // [rsp+B0h] [rbp+50h]
  _QWORD *v15; // [rsp+B8h] [rbp+58h]

  v12 = 0LL;
  v2 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v14 = v2;
  v10[0] = v2;
  v11 = v2;
  v10[1] = 0LL;
  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  v15 = PteAddress;
  v4 = &PteAddress[v2];
  do
  {
    v13 = MI_READ_PTE_LOCK_FREE((unsigned __int64)PteAddress);
    v5 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13) >> 12) & 0xFFFFFFFFFFLL)
       - 0x220000000000LL;
    v6 = ZeroPte;
    v7 = 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v8 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)PteAddress) )
      goto LABEL_10;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v8 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_10;
      v9 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_10;
      v9 = (ZeroPte & 1) == 0;
    }
    if ( !v9 )
      v6 = ZeroPte | 0x8000000000000000uLL;
LABEL_10:
    *PteAddress = v6;
    if ( v8 )
      MiWritePteShadow((__int64)PteAddress, v6);
    if ( MiIsPfnFromSlabAllocation(v5) )
    {
      --*(_QWORD *)&v10[0];
      *(_QWORD *)&v11 = v11 - 1;
      MiLockAndDecrementShareCount(v5, 1);
    }
    else if ( (unsigned int)MiLockAndDecrementShareCount(v5, 1) == 3 )
    {
      ++*((_QWORD *)&v10[0] + 1);
    }
    MiLockAndDecrementShareCount(v7, 0);
    ++PteAddress;
  }
  while ( PteAddress < v4 );
  MiReleasePtes((__int64)&qword_140C534C0, v15, v14);
  MiReturnPoolCharges((unsigned __int64 *)v10, 1, 0);
}
