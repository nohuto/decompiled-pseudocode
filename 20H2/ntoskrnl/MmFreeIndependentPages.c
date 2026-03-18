/*
 * XREFs of MmFreeIndependentPages @ 0x1407601B0
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1403B38F0 (HvlStartBootLogicalProcessors.c)
 *     KeAllocateProcessorProfileStructures @ 0x1403B4E50 (KeAllocateProcessorProfileStructures.c)
 *     HvlpInitializeHvCrashdump @ 0x1404F77FC (HvlpInitializeHvCrashdump.c)
 *     ExDeletePoolTagTable @ 0x1405B1C4C (ExDeletePoolTagTable.c)
 *     HvlDeleteProcessor @ 0x140891120 (HvlDeleteProcessor.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140899C84 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14089AA50 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpReleaseResources @ 0x14089B11C (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x14089B5B0 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14089B8D0 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     KiStartDynamicProcessor @ 0x1408BD198 (KiStartDynamicProcessor.c)
 *     MmFreeIsrStack @ 0x1408D3A98 (MmFreeIsrStack.c)
 *     KeStartAllProcessors @ 0x140A4BFC8 (KeStartAllProcessors.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetPteAddress @ 0x140230160 (MiGetPteAddress.c)
 *     MiReadPteShadow @ 0x1402366E0 (MiReadPteShadow.c)
 *     MiLockAndDecrementShareCount @ 0x140250E00 (MiLockAndDecrementShareCount.c)
 *     MiReturnPoolCharges @ 0x140262F90 (MiReturnPoolCharges.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiIsPfnFromSlabAllocation @ 0x14034D190 (MiIsPfnFromSlabAllocation.c)
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
        if ( HIBYTE(word_140C4DE88) )
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
  MiReleasePtes((__int64)&qword_140C4EDC0, v14, v22);
  MiReturnPoolCharges(&v15, 1);
}
