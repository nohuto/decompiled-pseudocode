/*
 * XREFs of MmFreeIndependentPages @ 0x140764790
 * Callers:
 *     KeAllocateProcessorProfileStructures @ 0x1403B6640 (KeAllocateProcessorProfileStructures.c)
 *     HvlStartBootLogicalProcessors @ 0x1403B6AB8 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x1404F931C (HvlpInitializeHvCrashdump.c)
 *     ExDeletePoolTagTable @ 0x1405B387C (ExDeletePoolTagTable.c)
 *     HvlDeleteProcessor @ 0x14088E820 (HvlDeleteProcessor.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x1408973B4 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140898180 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpReleaseResources @ 0x14089884C (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x140898CE0 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x140899000 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     KiStartDynamicProcessor @ 0x1408BA7D8 (KiStartDynamicProcessor.c)
 *     MmFreeIsrStack @ 0x1408D13B8 (MmFreeIsrStack.c)
 *     KeStartAllProcessors @ 0x140A4E568 (KeStartAllProcessors.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReturnPoolCharges @ 0x140273E90 (MiReturnPoolCharges.c)
 *     MiLockAndDecrementShareCount @ 0x140287230 (MiLockAndDecrementShareCount.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiIsPfnFromSlabAllocation @ 0x14030DC40 (MiIsPfnFromSlabAllocation.c)
 *     MiReadPteShadow @ 0x140310780 (MiReadPteShadow.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
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
  bool v12; // zf
  _QWORD *v13; // [rsp+20h] [rbp-40h]
  unsigned __int64 v14; // [rsp+28h] [rbp-38h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h]
  __int64 v16; // [rsp+38h] [rbp-28h]
  unsigned __int64 v17; // [rsp+40h] [rbp-20h]
  __int128 v18; // [rsp+48h] [rbp-18h]
  unsigned __int64 v19; // [rsp+A8h] [rbp+48h] BYREF
  _QWORD *v20; // [rsp+B0h] [rbp+50h]
  unsigned __int64 v21; // [rsp+B8h] [rbp+58h]

  v15 = 0LL;
  v16 = 0LL;
  v18 = 0LL;
  v2 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v21 = v2;
  v14 = v2;
  v17 = v2;
  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  v13 = PteAddress;
  v20 = &PteAddress[v2];
  v4 = MiPteInShadowRange((unsigned __int64)&v19);
  v5 = (unsigned __int64)v20;
  v6 = v4;
  do
  {
    PteShadow = MI_READ_PTE_LOCK_FREE((unsigned __int64)PteAddress);
    v19 = PteShadow;
    if ( v6 )
      PteShadow = MiReadPteShadow((unsigned __int64)&v19, PteShadow);
    v8 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v9 = ZeroPte;
    v10 = 48 * (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v11 = 0;
    if ( MiPteInShadowRange((unsigned __int64)PteAddress) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v11 = 1;
        if ( HIBYTE(word_140C4E048) )
          goto LABEL_5;
        v12 = (ZeroPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_5;
        v12 = (ZeroPte & 1) == 0;
      }
      if ( !v12 )
        v9 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_5:
    *PteAddress = v9;
    if ( v11 )
      MiWritePteShadow((__int64)PteAddress, v9);
    if ( MiIsPfnFromSlabAllocation(v8) )
    {
      --v14;
      --v17;
      MiLockAndDecrementShareCount(v8, 1);
    }
    else if ( (unsigned int)MiLockAndDecrementShareCount(v8, 1) == 3 )
    {
      ++v15;
    }
    MiLockAndDecrementShareCount(v10, 0);
    ++PteAddress;
  }
  while ( (unsigned __int64)PteAddress < v5 );
  MiReleasePtes((__int64)&qword_140C4EF80, v13, v21);
  MiReturnPoolCharges(&v14, 1);
}
