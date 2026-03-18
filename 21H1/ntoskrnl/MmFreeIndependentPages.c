/*
 * XREFs of MmFreeIndependentPages @ 0x14074CF40
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1403AB304 (HvlStartBootLogicalProcessors.c)
 *     KeAllocateProcessorProfileStructures @ 0x1403AC860 (KeAllocateProcessorProfileStructures.c)
 *     HvlpInitializeHvCrashdump @ 0x1404F393C (HvlpInitializeHvCrashdump.c)
 *     ExDeletePoolTagTable @ 0x1405AD9CC (ExDeletePoolTagTable.c)
 *     HvlDeleteProcessor @ 0x14088A2B0 (HvlDeleteProcessor.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140892CB4 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140893A80 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpReleaseResources @ 0x14089414C (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x1408945E0 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x140894900 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     KiStartDynamicProcessor @ 0x1408B625C (KiStartDynamicProcessor.c)
 *     MmFreeIsrStack @ 0x1408CC908 (MmFreeIsrStack.c)
 *     KeStartAllProcessors @ 0x140A404CC (KeStartAllProcessors.c)
 * Callees:
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x14027AF40 (MiGetPteAddress.c)
 *     MiIsPfnFromSlabAllocation @ 0x1402802F0 (MiIsPfnFromSlabAllocation.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x1402AD460 (MiReadPteShadow.c)
 *     MiReturnPoolCharges @ 0x1402D4E10 (MiReturnPoolCharges.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiLockAndDecrementShareCount @ 0x140351040 (MiLockAndDecrementShareCount.c)
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
  _DWORD *v13; // r9
  __int64 v14; // r8
  _DWORD *v15; // r9
  bool v16; // zf
  _QWORD *v17; // [rsp+20h] [rbp-40h]
  unsigned __int64 v18; // [rsp+28h] [rbp-38h] BYREF
  __int64 v19; // [rsp+30h] [rbp-30h]
  __int64 v20; // [rsp+38h] [rbp-28h]
  unsigned __int64 v21; // [rsp+40h] [rbp-20h]
  __int128 v22; // [rsp+48h] [rbp-18h]
  unsigned __int64 v23; // [rsp+A8h] [rbp+48h] BYREF
  _QWORD *v24; // [rsp+B0h] [rbp+50h]
  unsigned __int64 v25; // [rsp+B8h] [rbp+58h]

  v19 = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  v2 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v25 = v2;
  v18 = v2;
  v21 = v2;
  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  v17 = PteAddress;
  v24 = &PteAddress[v2];
  v4 = MiPteInShadowRange((unsigned __int64)&v23);
  v5 = (unsigned __int64)v24;
  v6 = v4;
  do
  {
    PteShadow = MI_READ_PTE_LOCK_FREE((unsigned __int64)PteAddress);
    v23 = PteShadow;
    if ( v6 )
      PteShadow = MiReadPteShadow((unsigned __int64)&v23, PteShadow);
    v8 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v9 = ZeroPte;
    v10 = 48 * (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v11 = 0;
    if ( MiPteInShadowRange((unsigned __int64)PteAddress) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v11 = 1;
        if ( HIBYTE(word_140C4DF48) )
          goto LABEL_5;
        v16 = (ZeroPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_5;
        v16 = (ZeroPte & 1) == 0;
      }
      if ( !v16 )
        v9 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_5:
    *PteAddress = v9;
    if ( v11 )
      MiWritePteShadow((__int64)PteAddress, v9);
    if ( MiIsPfnFromSlabAllocation(v8) )
    {
      --v18;
      --v21;
      MiLockAndDecrementShareCount(v8, 1LL, v12, v13);
    }
    else if ( (unsigned int)MiLockAndDecrementShareCount(v8, 1LL, v12, v13) == 3 )
    {
      ++v19;
    }
    MiLockAndDecrementShareCount(v10, 0LL, v14, v15);
    ++PteAddress;
  }
  while ( (unsigned __int64)PteAddress < v5 );
  MiReleasePtes((__int64)&qword_140C4EE80, v17, v25);
  MiReturnPoolCharges(&v18, 1);
}
