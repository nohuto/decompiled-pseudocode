/*
 * XREFs of MmFreeIndependentPages @ 0x1407515D0
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1403B0F84 (HvlStartBootLogicalProcessors.c)
 *     KeAllocateProcessorProfileStructures @ 0x1403B24E0 (KeAllocateProcessorProfileStructures.c)
 *     HvlpInitializeHvCrashdump @ 0x1404F3F8C (HvlpInitializeHvCrashdump.c)
 *     ExDeletePoolTagTable @ 0x1405AE0EC (ExDeletePoolTagTable.c)
 *     HvlDeleteProcessor @ 0x14088B5D0 (HvlDeleteProcessor.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140893FD4 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140894DA0 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpReleaseResources @ 0x14089546C (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x140895900 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x140895C20 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     KiStartDynamicProcessor @ 0x1408B757C (KiStartDynamicProcessor.c)
 *     MmFreeIsrStack @ 0x1408CDC58 (MmFreeIsrStack.c)
 *     KeStartAllProcessors @ 0x140A45D28 (KeStartAllProcessors.c)
 * Callees:
 *     MiGetPteAddress @ 0x140221EF0 (MiGetPteAddress.c)
 *     MiIsPfnFromSlabAllocation @ 0x1402272A0 (MiIsPfnFromSlabAllocation.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140254430 (MiReadPteShadow.c)
 *     MiReturnPoolCharges @ 0x14026B470 (MiReturnPoolCharges.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     MiLockAndDecrementShareCount @ 0x1402F5064 (MiLockAndDecrementShareCount.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 */

void __fastcall MmFreeIndependentPages(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  _QWORD *PteAddress; // rdi
  BOOL v4; // eax
  unsigned __int64 v5; // r13
  BOOL v6; // esi
  unsigned __int64 PteShadow; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // rbx
  __int64 v10; // r12
  int v11; // r15d
  __int64 v12; // r8
  bool v13; // zf
  _QWORD *v14; // [rsp+20h] [rbp-40h]
  unsigned __int64 v15; // [rsp+28h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-30h]
  __int64 v17; // [rsp+38h] [rbp-28h]
  unsigned __int64 v18; // [rsp+40h] [rbp-20h]
  __int128 v19; // [rsp+48h] [rbp-18h]
  unsigned __int64 v20; // [rsp+A8h] [rbp+48h] BYREF
  _QWORD *v21; // [rsp+B0h] [rbp+50h]
  unsigned __int64 v22; // [rsp+B8h] [rbp+58h]

  v16 = 0LL;
  v17 = 0LL;
  v19 = 0LL;
  v2 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v22 = v2;
  v15 = v2;
  v18 = v2;
  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  v14 = PteAddress;
  v21 = &PteAddress[v2];
  v4 = MiPteInShadowRange((unsigned __int64)&v20);
  v5 = (unsigned __int64)v21;
  v6 = v4;
  do
  {
    PteShadow = MI_READ_PTE_LOCK_FREE((unsigned __int64)PteAddress);
    v20 = PteShadow;
    if ( v6 )
      PteShadow = MiReadPteShadow((unsigned __int64)&v20, PteShadow);
    v8 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v9 = ZeroPte;
    v10 = 48 * (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v11 = 0;
    if ( MiPteInShadowRange((unsigned __int64)PteAddress) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v11 = 1;
        if ( HIBYTE(word_140C4DE08) )
          goto LABEL_5;
        v13 = (ZeroPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_5;
        v13 = (ZeroPte & 1) == 0;
      }
      if ( !v13 )
        v9 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_5:
    *PteAddress = v9;
    if ( v11 )
      MiWritePteShadow((__int64)PteAddress, v9, v12);
    if ( MiIsPfnFromSlabAllocation(v8) )
    {
      --v15;
      --v18;
      MiLockAndDecrementShareCount(v8, 1);
    }
    else if ( (unsigned int)MiLockAndDecrementShareCount(v8, 1) == 3 )
    {
      ++v16;
    }
    MiLockAndDecrementShareCount(v10, 0);
    ++PteAddress;
  }
  while ( (unsigned __int64)PteAddress < v5 );
  MiReleasePtes((__int64)&qword_140C4ED40, v14, v22);
  MiReturnPoolCharges(&v15, 1);
}
