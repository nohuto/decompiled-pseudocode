/*
 * XREFs of MiInitializeDynamicBitmap @ 0x140786A9C
 * Callers:
 *     MiBuildDynamicRegion @ 0x1403B60F4 (MiBuildDynamicRegion.c)
 *     MiSessionCreate @ 0x1407863CC (MiSessionCreate.c)
 *     MiCreatePfnBitMaps @ 0x1407B9A04 (MiCreatePfnBitMaps.c)
 *     MiInitializeSystemPtes @ 0x140A4F1C4 (MiInitializeSystemPtes.c)
 *     MiInitializePteInfo @ 0x140A4F918 (MiInitializePteInfo.c)
 *     MiInitializeMirroring @ 0x140A55728 (MiInitializeMirroring.c)
 *     MiCreateRetpolineBitmap @ 0x140A9344C (MiCreateRetpolineBitmap.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiPartitionIdToPointer @ 0x14024A6C4 (MiPartitionIdToPointer.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiReadPteShadow @ 0x140310780 (MiReadPteShadow.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     MiSetPfnLink @ 0x140322EDC (MiSetPfnLink.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     MiTransformValidPteInPlace @ 0x140378BA8 (MiTransformValidPteInPlace.c)
 *     MiLockPageTable @ 0x140381CBC (MiLockPageTable.c)
 *     MiMakeZeroedPageTables @ 0x14039DF90 (MiMakeZeroedPageTables.c)
 *     MiUnlockPageTable @ 0x1403B6DD0 (MiUnlockPageTable.c)
 *     MiReturnPfnList @ 0x1403BAB10 (MiReturnPfnList.c)
 *     MiReturnSplitPageCharges @ 0x1403CEF04 (MiReturnSplitPageCharges.c)
 */

__int64 __fastcall MiInitializeDynamicBitmap(_QWORD *a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 PteAddress; // r14
  unsigned __int64 v8; // r12
  int SystemRegionType; // eax
  int v10; // ecx
  __int64 v11; // rdx
  signed __int64 v12; // rsi
  char *AnyMultiplexedVm; // rbp
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r13
  __int64 v16; // rdx
  unsigned __int64 ValidPte; // rdi
  __int64 v18; // r8
  _DWORD *v19; // r9
  bool v20; // cl
  unsigned __int64 v21; // rbx
  int v22; // eax
  __int64 v24; // r14
  unsigned __int64 PteShadow; // rbx
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  _DWORD *v31; // r9
  bool v32; // [rsp+20h] [rbp-78h]
  int v33; // [rsp+28h] [rbp-70h]
  __int64 v34; // [rsp+30h] [rbp-68h] BYREF
  __int64 v35; // [rsp+38h] [rbp-60h]
  __int64 v36; // [rsp+40h] [rbp-58h]
  unsigned __int8 v40; // [rsp+B8h] [rbp+20h]

  v34 = 0LL;
  PteAddress = MiGetPteAddress(a2);
  v8 = ((unsigned __int64)(v5 + 7) >> 15) + (((v6 & 0xFFF) + 4095 + (((unsigned __int64)(v5 + 7) >> 3) & 0xFFF)) >> 12);
  SystemRegionType = MiGetSystemRegionType(v6);
  v10 = 1;
  if ( SystemRegionType != 1 )
    v10 = 9;
  v33 = v10;
  if ( (a4 & 2) == 0 && !(unsigned int)MiMakeZeroedPageTables(PteAddress, PteAddress + 8 * (v8 - 1), 1u, v10) )
    return 0LL;
  v35 = 0LL;
  v36 = 0LL;
  if ( (a4 & 4) != 0 )
  {
    v11 = qword_140C4EDC0;
    v12 = qword_140C4EE30;
  }
  else
  {
    v11 = qword_140C4EDA8;
    v12 = qword_140C4EE40;
  }
  AnyMultiplexedVm = 0LL;
  v40 = 17;
  v14 = 0LL;
  v15 = 0LL;
  ValidPte = MiMakeValidPte(PteAddress, v11, ((unsigned __int8)(a4 & 1) << 29) + 1);
  if ( !v8 )
    goto LABEL_17;
  v20 = (a4 & 8) != 0;
  v32 = v20;
  do
  {
    if ( (PteAddress & 0xFFF) == 0 && v20 && v8 - v15 >= 0x200 )
    {
      v24 = MiGetPteAddress(PteAddress);
      if ( (_DWORD)InitializationPhase )
      {
        if ( !AnyMultiplexedVm )
        {
          AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
          v40 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v29, v30, v31);
        }
        if ( v14 )
        {
          if ( (v24 & 0xFFF) != 0 )
            goto LABEL_26;
          MiUnlockPageTable((__int64)AnyMultiplexedVm, v14);
        }
        v14 = MiGetPteAddress(v24);
        MiLockPageTable((__int64)AnyMultiplexedVm, v14);
      }
LABEL_26:
      v34 = MI_READ_PTE_LOCK_FREE(v24);
      PteShadow = v34;
      MiTransformValidPteInPlace((volatile signed __int64 *)v24, v24, v12, 1u);
      if ( MiPteInShadowRange((unsigned __int64)&v34) )
        PteShadow = MiReadPteShadow((unsigned __int64)&v34, PteShadow);
      MiSetPfnLink((_QWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL), v35);
      v27 = *(_QWORD *)(v26 + 40);
      v35 = v26;
      v36 = MiPartitionIdToPointer((v27 >> 39) & 0x3FF);
      v15 += 511LL;
      PteAddress = ((v24 << 25) + 0x10000000) >> 16;
      goto LABEL_15;
    }
    v21 = ValidPte;
    if ( MiPteInShadowRange(PteAddress) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v22 = 1;
        if ( !HIBYTE(word_140C4E048) && (ValidPte & 1) != 0 )
          v21 = ValidPte | 0x8000000000000000uLL;
        goto LABEL_12;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ValidPte & 1) != 0 )
      {
        v21 = ValidPte | 0x8000000000000000uLL;
      }
    }
    v22 = 0;
LABEL_12:
    *(_QWORD *)PteAddress = v21;
    if ( v22 )
      MiWritePteShadow(PteAddress, v21);
    PteAddress += 8LL;
LABEL_15:
    v20 = v32;
    ++v15;
  }
  while ( v15 < v8 );
  if ( AnyMultiplexedVm )
  {
    if ( v14 )
      MiUnlockPageTable((__int64)AnyMultiplexedVm, v14);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v40);
  }
LABEL_17:
  *a1 = a3;
  a1[1] = a2;
  if ( v35 )
  {
    v28 = MiReturnPfnList(v35, v16, v18, v19);
    MiReturnSplitPageCharges(v36, v28, v33);
  }
  return 1LL;
}
