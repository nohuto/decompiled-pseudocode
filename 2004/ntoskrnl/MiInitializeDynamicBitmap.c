/*
 * XREFs of MiInitializeDynamicBitmap @ 0x1407744FC
 * Callers:
 *     MiBuildDynamicRegion @ 0x1403B1F94 (MiBuildDynamicRegion.c)
 *     MiSessionCreate @ 0x140773E2C (MiSessionCreate.c)
 *     MiCreatePfnBitMaps @ 0x1407A5734 (MiCreatePfnBitMaps.c)
 *     MiInitializeSystemPtes @ 0x140A46988 (MiInitializeSystemPtes.c)
 *     MiInitializePteInfo @ 0x140A470DC (MiInitializePteInfo.c)
 *     MiInitializeMirroring @ 0x140A52AA0 (MiInitializeMirroring.c)
 *     MiCreateRetpolineBitmap @ 0x140A8F8EC (MiCreateRetpolineBitmap.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MiGetPteAddress @ 0x140221EF0 (MiGetPteAddress.c)
 *     MiSetPfnLink @ 0x140221F7C (MiSetPfnLink.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiReadPteShadow @ 0x140254430 (MiReadPteShadow.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiPartitionIdToPointer @ 0x14035A294 (MiPartitionIdToPointer.c)
 *     MiTransformValidPteInPlace @ 0x140376EBC (MiTransformValidPteInPlace.c)
 *     MiLockPageTable @ 0x14037FCAC (MiLockPageTable.c)
 *     MiMakeZeroedPageTables @ 0x14039B0B0 (MiMakeZeroedPageTables.c)
 *     MiUnlockPageTable @ 0x1403B2B80 (MiUnlockPageTable.c)
 *     MiReturnPfnList @ 0x1403B7500 (MiReturnPfnList.c)
 *     MiReturnSplitPageCharges @ 0x1403CB788 (MiReturnSplitPageCharges.c)
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
  __int64 v25; // r14
  unsigned __int64 PteShadow; // rbx
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  bool v30; // [rsp+20h] [rbp-78h]
  int v31; // [rsp+28h] [rbp-70h]
  __int64 v32; // [rsp+30h] [rbp-68h] BYREF
  __int64 v33; // [rsp+38h] [rbp-60h]
  __int64 v34; // [rsp+40h] [rbp-58h]
  unsigned __int8 v38; // [rsp+B8h] [rbp+20h]

  v32 = 0LL;
  PteAddress = MiGetPteAddress(a2);
  v8 = ((unsigned __int64)(v5 + 7) >> 15) + (((v6 & 0xFFF) + 4095 + (((unsigned __int64)(v5 + 7) >> 3) & 0xFFF)) >> 12);
  SystemRegionType = MiGetSystemRegionType(v6);
  v11 = 1;
  if ( SystemRegionType != 1 )
    v11 = 9;
  v31 = v11;
  if ( (a4 & 2) == 0 && !(unsigned int)MiMakeZeroedPageTables(PteAddress, PteAddress + 8 * (v8 - 1), 1u, v11) )
    return 0LL;
  v33 = 0LL;
  v34 = 0LL;
  if ( (a4 & 4) != 0 )
  {
    v12 = qword_140C4EB80;
    v13 = qword_140C4EBF0;
  }
  else
  {
    v12 = qword_140C4EB68;
    v13 = qword_140C4EC00;
  }
  AnyMultiplexedVm = 0LL;
  v38 = 17;
  v15 = 0LL;
  v16 = 0LL;
  ValidPte = MiMakeValidPte(PteAddress, v12, ((unsigned __int8)(a4 & 1) << 29) + 1, v10);
  if ( !v8 )
    goto LABEL_17;
  v21 = (a4 & 8) != 0;
  v30 = v21;
  do
  {
    if ( (PteAddress & 0xFFF) == 0 && v21 && v8 - v16 >= 0x200 )
    {
      v25 = MiGetPteAddress(PteAddress);
      if ( (_DWORD)InitializationPhase )
      {
        if ( !AnyMultiplexedVm )
        {
          AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
          v38 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
        }
        if ( v15 )
        {
          if ( (v25 & 0xFFF) != 0 )
            goto LABEL_26;
          MiUnlockPageTable((__int64)AnyMultiplexedVm, v15);
        }
        v15 = MiGetPteAddress(v25);
        MiLockPageTable((__int64)AnyMultiplexedVm, v15);
      }
LABEL_26:
      v32 = MI_READ_PTE_LOCK_FREE(v25);
      PteShadow = v32;
      MiTransformValidPteInPlace((volatile signed __int64 *)v25, v25, v13, 1u);
      if ( MiPteInShadowRange((unsigned __int64)&v32) )
        PteShadow = MiReadPteShadow((unsigned __int64)&v32, PteShadow);
      MiSetPfnLink((_QWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL), v33);
      v28 = *(_QWORD *)(v27 + 40);
      v33 = v27;
      v34 = MiPartitionIdToPointer((v28 >> 39) & 0x3FF);
      v16 += 511LL;
      PteAddress = ((v25 << 25) + 0x10000000) >> 16;
      goto LABEL_15;
    }
    v22 = ValidPte;
    if ( MiPteInShadowRange(PteAddress) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v23 = 1;
        if ( !HIBYTE(word_140C4DE08) && (ValidPte & 1) != 0 )
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
      MiWritePteShadow(PteAddress, v22, v19);
    PteAddress += 8LL;
LABEL_15:
    v21 = v30;
    ++v16;
  }
  while ( v16 < v8 );
  if ( AnyMultiplexedVm )
  {
    if ( v15 )
      MiUnlockPageTable((__int64)AnyMultiplexedVm, v15);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v38);
  }
LABEL_17:
  *a1 = a3;
  a1[1] = a2;
  if ( v33 )
  {
    v29 = MiReturnPfnList(v33, v17, v19, v20);
    MiReturnSplitPageCharges(v34, v29, v31);
  }
  return 1LL;
}
