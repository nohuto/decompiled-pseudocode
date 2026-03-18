/*
 * XREFs of MiInitializeDynamicBitmap @ 0x14082B1B4
 * Callers:
 *     MiBuildDynamicRegion @ 0x1403C289C (MiBuildDynamicRegion.c)
 *     MiCreatePfnBitMaps @ 0x14082ACF0 (MiCreatePfnBitMaps.c)
 *     MiInitializePteInfo @ 0x140B04AE0 (MiInitializePteInfo.c)
 *     MiInitializeMirroring @ 0x140B05D00 (MiInitializeMirroring.c)
 *     MiInitializeSystemPtes @ 0x140B06A84 (MiInitializeSystemPtes.c)
 *     MiCreateRetpolineBitmap @ 0x140B51F9C (MiCreateRetpolineBitmap.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x1402182F8 (MiPartitionIdToPointer.c)
 *     MiTransformValidPteInPlace @ 0x1402270B8 (MiTransformValidPteInPlace.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiMakeZeroedPageTables @ 0x1402DBF90 (MiMakeZeroedPageTables.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 *     MiSetPfnLink @ 0x140313D14 (MiSetPfnLink.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiReturnSplitPageCharges @ 0x1403C2A18 (MiReturnSplitPageCharges.c)
 *     MiReturnPfnList @ 0x1403C2A5C (MiReturnPfnList.c)
 *     MiUnlockPageTable @ 0x1403C2CA0 (MiUnlockPageTable.c)
 *     MiLockPageTable @ 0x1403C2CB8 (MiLockPageTable.c)
 */

__int64 __fastcall MiInitializeDynamicBitmap(_QWORD *a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 PteAddress; // r14
  unsigned __int64 v8; // r15
  int SystemRegionType; // eax
  int v10; // ecx
  __int64 v11; // rdx
  signed __int64 v12; // rsi
  char *AnyMultiplexedVm; // rbp
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r13
  unsigned __int64 ValidPte; // rdi
  bool v17; // cl
  unsigned __int64 v18; // rbx
  int v19; // eax
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  bool v27; // [rsp+20h] [rbp-78h]
  int v28; // [rsp+28h] [rbp-70h]
  __int64 v29; // [rsp+30h] [rbp-68h]
  __int64 v30; // [rsp+38h] [rbp-60h] BYREF
  __int64 v31; // [rsp+40h] [rbp-58h]
  unsigned __int8 v35; // [rsp+B8h] [rbp+20h]

  v30 = 0LL;
  PteAddress = MiGetPteAddress(a2);
  v8 = ((unsigned __int64)(v5 + 7) >> 15) + (((v6 & 0xFFF) + 4095 + (((unsigned __int64)(v5 + 7) >> 3) & 0xFFF)) >> 12);
  SystemRegionType = MiGetSystemRegionType(v6);
  v10 = 1;
  if ( SystemRegionType != 1 )
    v10 = 9;
  v28 = v10;
  if ( (a4 & 2) == 0 && !(unsigned int)MiMakeZeroedPageTables(PteAddress, PteAddress + 8 * (v8 - 1), 1, v10) )
    return 0LL;
  v29 = 0LL;
  v31 = 0LL;
  if ( (a4 & 4) != 0 )
  {
    v11 = qword_140C53290;
    v12 = qword_140C53300;
  }
  else
  {
    v11 = qword_140C53278;
    v12 = qword_140C53310;
  }
  AnyMultiplexedVm = 0LL;
  v35 = 17;
  v14 = 0LL;
  v15 = 0LL;
  ValidPte = MiMakeValidPte(PteAddress, v11, ((unsigned __int8)(a4 & 1) << 29) + 1);
  if ( !v8 )
    goto LABEL_16;
  v17 = (a4 & 8) != 0;
  v27 = v17;
  do
  {
    if ( (PteAddress & 0xFFF) == 0 && v17 && v8 - v15 >= 0x200 )
    {
      v21 = MiGetPteAddress(PteAddress);
      if ( !(_DWORD)InitializationPhase )
      {
LABEL_21:
        v30 = MI_READ_PTE_LOCK_FREE(v21);
        MiTransformValidPteInPlace((volatile signed __int64 *)v21, v21, v12, 1u);
        v22 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v30);
        MiSetPfnLink((_QWORD *)(48 * ((v22 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL), v29);
        v29 = v23;
        v31 = MiPartitionIdToPointer((*(_QWORD *)(v23 + 40) >> 43) & 0x3FF);
        v15 += 511LL;
        PteAddress = (__int64)((v21 << 25) + 0x10000000) >> 16;
        goto LABEL_14;
      }
      if ( !AnyMultiplexedVm )
      {
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
        v35 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
      }
      if ( v14 )
      {
        if ( (v21 & 0xFFF) != 0 )
          goto LABEL_21;
        MiUnlockPageTable((__int64)AnyMultiplexedVm, v14);
      }
      v14 = MiGetPteAddress(v21);
      MiLockPageTable((__int64)AnyMultiplexedVm, v14, v25, v26);
      goto LABEL_21;
    }
    v18 = ValidPte;
    if ( MiPteInShadowRange(PteAddress) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v19 = 1;
        if ( !HIBYTE(word_140C51864) && (ValidPte & 1) != 0 )
          v18 = ValidPte | 0x8000000000000000uLL;
        goto LABEL_11;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ValidPte & 1) != 0 )
      {
        v18 = ValidPte | 0x8000000000000000uLL;
      }
    }
    v19 = 0;
LABEL_11:
    *(_QWORD *)PteAddress = v18;
    if ( v19 )
      MiWritePteShadow(PteAddress, v18);
    PteAddress += 8LL;
LABEL_14:
    v17 = v27;
    ++v15;
  }
  while ( v15 < v8 );
  if ( AnyMultiplexedVm )
  {
    if ( v14 )
      MiUnlockPageTable((__int64)AnyMultiplexedVm, v14);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v35);
  }
LABEL_16:
  *a1 = a3;
  a1[1] = a2;
  if ( v29 )
  {
    v24 = MiReturnPfnList(v29);
    MiReturnSplitPageCharges(v31, v24, v28);
  }
  return 1LL;
}
