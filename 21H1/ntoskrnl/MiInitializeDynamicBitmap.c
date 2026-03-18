/*
 * XREFs of MiInitializeDynamicBitmap @ 0x1407720EC
 * Callers:
 *     MiBuildDynamicRegion @ 0x1403AC314 (MiBuildDynamicRegion.c)
 *     MiSessionCreate @ 0x140771A1C (MiSessionCreate.c)
 *     MiCreatePfnBitMaps @ 0x1407A2EE4 (MiCreatePfnBitMaps.c)
 *     MiInitializeSystemPtes @ 0x140A4112C (MiInitializeSystemPtes.c)
 *     MiInitializePteInfo @ 0x140A41880 (MiInitializePteInfo.c)
 *     MiInitializeMirroring @ 0x140A4CDA0 (MiInitializeMirroring.c)
 *     MiCreateRetpolineBitmap @ 0x140A902FC (MiCreateRetpolineBitmap.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     MiGetPteAddress @ 0x14027AF40 (MiGetPteAddress.c)
 *     MiSetPfnLink @ 0x14027AFCC (MiSetPfnLink.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiReadPteShadow @ 0x1402AD460 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiPartitionIdToPointer @ 0x140323828 (MiPartitionIdToPointer.c)
 *     MiTransformValidPteInPlace @ 0x1403760AC (MiTransformValidPteInPlace.c)
 *     MiLockPageTable @ 0x14037F34C (MiLockPageTable.c)
 *     MiMakeZeroedPageTables @ 0x14039A920 (MiMakeZeroedPageTables.c)
 *     MiUnlockPageTable @ 0x1403ACF00 (MiUnlockPageTable.c)
 *     MiReturnPfnList @ 0x1403B66D0 (MiReturnPfnList.c)
 *     MiReturnSplitPageCharges @ 0x1403CA9A8 (MiReturnSplitPageCharges.c)
 */

__int64 __fastcall MiInitializeDynamicBitmap(_QWORD *a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 PteAddress; // r14
  unsigned __int64 v8; // r12
  int SystemRegionType; // eax
  __int64 v10; // r9
  int v11; // ecx
  __int64 v12; // rdx
  signed __int64 v13; // rsi
  char *AnyMultiplexedVm; // rbp
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r13
  __int64 v17; // rdx
  unsigned __int64 ValidPte; // rdi
  __int64 v19; // r8
  _DWORD *v20; // r9
  bool v21; // cl
  unsigned __int64 v22; // rbx
  int v23; // eax
  __int64 v25; // r8
  __int64 v26; // r14
  unsigned __int64 PteShadow; // rbx
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  bool v31; // [rsp+20h] [rbp-78h]
  int v32; // [rsp+28h] [rbp-70h]
  __int64 v33; // [rsp+30h] [rbp-68h] BYREF
  __int64 v34; // [rsp+38h] [rbp-60h]
  __int64 v35; // [rsp+40h] [rbp-58h]
  unsigned __int8 v39; // [rsp+B8h] [rbp+20h]

  v33 = 0LL;
  PteAddress = MiGetPteAddress(a2);
  v8 = ((unsigned __int64)(v5 + 7) >> 15) + (((v6 & 0xFFF) + 4095 + (((unsigned __int64)(v5 + 7) >> 3) & 0xFFF)) >> 12);
  SystemRegionType = MiGetSystemRegionType(v6);
  v11 = 1;
  if ( SystemRegionType != 1 )
    v11 = 9;
  v32 = v11;
  if ( (a4 & 2) == 0 && !(unsigned int)MiMakeZeroedPageTables(PteAddress, PteAddress + 8 * (v8 - 1), 1u, v11) )
    return 0LL;
  v34 = 0LL;
  v35 = 0LL;
  if ( (a4 & 4) != 0 )
  {
    v12 = qword_140C4ECC0;
    v13 = qword_140C4ED30;
  }
  else
  {
    v12 = qword_140C4ECA8;
    v13 = qword_140C4ED40;
  }
  AnyMultiplexedVm = 0LL;
  v39 = 17;
  v15 = 0LL;
  v16 = 0LL;
  ValidPte = MiMakeValidPte(PteAddress, v12, ((unsigned __int8)(a4 & 1) << 29) + 1, v10);
  if ( !v8 )
    goto LABEL_17;
  v21 = (a4 & 8) != 0;
  v31 = v21;
  do
  {
    if ( (PteAddress & 0xFFF) == 0 && v21 && v8 - v16 >= 0x200 )
    {
      v26 = MiGetPteAddress(PteAddress);
      if ( (_DWORD)InitializationPhase )
      {
        if ( !AnyMultiplexedVm )
        {
          AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
          v39 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
        }
        if ( v15 )
        {
          if ( (v26 & 0xFFF) != 0 )
            goto LABEL_26;
          MiUnlockPageTable((__int64)AnyMultiplexedVm, v15, v25);
        }
        v15 = MiGetPteAddress(v26);
        MiLockPageTable((__int64)AnyMultiplexedVm, v15);
      }
LABEL_26:
      v33 = MI_READ_PTE_LOCK_FREE(v26);
      PteShadow = v33;
      MiTransformValidPteInPlace((volatile signed __int64 *)v26, v26, v13, 1u);
      if ( MiPteInShadowRange((unsigned __int64)&v33) )
        PteShadow = MiReadPteShadow((unsigned __int64)&v33, PteShadow);
      MiSetPfnLink((_QWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL), v34);
      v29 = *(_QWORD *)(v28 + 40);
      v34 = v28;
      v35 = MiPartitionIdToPointer((v29 >> 39) & 0x3FF);
      v16 += 511LL;
      PteAddress = ((v26 << 25) + 0x10000000) >> 16;
      goto LABEL_15;
    }
    v22 = ValidPte;
    if ( MiPteInShadowRange(PteAddress) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v23 = 1;
        if ( !HIBYTE(word_140C4DF48) && (ValidPte & 1) != 0 )
          v22 = ValidPte | 0x8000000000000000uLL;
        goto LABEL_12;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ValidPte & 1) != 0 )
      {
        v22 = ValidPte | 0x8000000000000000uLL;
      }
    }
    v23 = 0;
LABEL_12:
    *(_QWORD *)PteAddress = v22;
    if ( v23 )
      MiWritePteShadow(PteAddress, v22);
    PteAddress += 8LL;
LABEL_15:
    v21 = v31;
    ++v16;
  }
  while ( v16 < v8 );
  if ( AnyMultiplexedVm )
  {
    if ( v15 )
      MiUnlockPageTable((__int64)AnyMultiplexedVm, v15, v19);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v39);
  }
LABEL_17:
  *a1 = a3;
  a1[1] = a2;
  if ( v34 )
  {
    v30 = MiReturnPfnList(v34, v17, v19, v20);
    MiReturnSplitPageCharges(v35, v30, v32);
  }
  return 1LL;
}
