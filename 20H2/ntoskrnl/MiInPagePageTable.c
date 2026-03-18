/*
 * XREFs of MiInPagePageTable @ 0x1402CBBA0
 * Callers:
 *     MiUserFault @ 0x14026EA90 (MiUserFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiIsVadLarge @ 0x1402302C4 (MiIsVadLarge.c)
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MiDispatchFault @ 0x140270220 (MiDispatchFault.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x14027D170 (MiVadPureReserve.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MiGetLeafVa @ 0x1402B0270 (MiGetLeafVa.c)
 *     MiCheckUserVirtualAddress @ 0x1402B1E10 (MiCheckUserVirtualAddress.c)
 *     MiFillPteHierarchy @ 0x1402CC250 (MiFillPteHierarchy.c)
 *     MiGetClosestImplicitNode @ 0x1402CC2B0 (MiGetClosestImplicitNode.c)
 *     MmIsAddressValidEx @ 0x1402CC2D0 (MmIsAddressValidEx.c)
 *     MiGetUsedPtesHandle @ 0x1402CC840 (MiGetUsedPtesHandle.c)
 *     MiIncreaseUsedPtesCount @ 0x1402CEA34 (MiIncreaseUsedPtesCount.c)
 *     MiIssueHardFault @ 0x1402CFFA0 (MiIssueHardFault.c)
 *     MiReleaseFaultState @ 0x1402D0698 (MiReleaseFaultState.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiAdvanceFaultList @ 0x1403179F8 (MiAdvanceFaultList.c)
 *     MiIsStoreProcess @ 0x140341D60 (MiIsStoreProcess.c)
 *     MiLeapPrefetch @ 0x14037BE44 (MiLeapPrefetch.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiGetLargeVadMappingIndex @ 0x140546BA8 (MiGetLargeVadMappingIndex.c)
 *     MiInsertLargeVadMapping @ 0x140546CA0 (MiInsertLargeVadMapping.c)
 *     MiLargePageFault @ 0x140546FB4 (MiLargePageFault.c)
 */

__int64 __fastcall MiInPagePageTable(unsigned __int64 *a1, int a2)
{
  __int64 v2; // rbx
  signed __int64 v4; // r15
  unsigned __int64 v5; // rcx
  _KPROCESS *Process; // r8
  ULONG_PTR v7; // r12
  __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r11
  __int64 v12; // rdi
  __int64 v13; // rax
  _KPROCESS *v14; // r8
  unsigned int v15; // r14d
  ULONG_PTR v16; // r10
  unsigned __int64 v17; // rbx
  __int64 result; // rax
  struct _KTHREAD *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // r9
  unsigned __int64 v25; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm1
  __int128 v28; // xmm1
  __int128 v29; // xmm1
  unsigned int ClosestImplicitNode; // eax
  __int64 v31; // rax
  char v32; // cl
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v37; // r10
  unsigned __int64 v38; // rcx
  int LargeVadMappingIndex; // eax
  __int64 v40; // rdx
  __int64 v41; // r8
  _QWORD *v42; // rbx
  __int64 v43; // rcx
  __int64 UsedPtesHandle; // rax
  unsigned __int64 v45; // xmm1_8
  int v46; // ecx
  unsigned int v47; // [rsp+30h] [rbp-D0h] BYREF
  int v48; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v49; // [rsp+38h] [rbp-C8h]
  int v50; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v51; // [rsp+48h] [rbp-B8h]
  _KPROCESS *v52; // [rsp+50h] [rbp-B0h]
  __int64 v53; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v54; // [rsp+60h] [rbp-A0h]
  unsigned __int64 *v55; // [rsp+68h] [rbp-98h]
  _OWORD v56[9]; // [rsp+70h] [rbp-90h] BYREF

  v2 = a2;
  v4 = 0LL;
  v48 = a2;
  v47 = 0;
  v53 = 0LL;
  memset(v56, 0, 0x88uLL);
  v5 = a1[2];
  Process = KeGetCurrentThread()->ApcState.Process;
  v52 = Process;
  v55 = &Process[1].ActiveProcessorsPadding[6];
  if ( (v5 & 1) == 0 || (v51 = v5 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
    v51 = 0LL;
  v7 = a1[v2 + 3];
  v54 = a1 + 7;
  v8 = *(_QWORD *)v7;
  if ( v7 >= 0xFFFFF6FB7DBED000uLL
    && v7 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v34 = *((_QWORD *)&Flink->Flink + ((v7 >> 3) & 0x1FF));
      v35 = v8 | 0x20;
      if ( (v34 & 0x20) == 0 )
        v35 = *(_QWORD *)v7;
      v8 = v35;
      if ( (v34 & 0x42) != 0 )
        v8 = v35 | 0x42;
    }
  }
  v9 = 0xFFFFF68000000000uLL;
  v10 = *a1;
  v11 = v10;
  v49 = *a1;
  if ( v10 >= 0xFFFFF68000000000uLL )
  {
    do
    {
      if ( v11 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v11 = (__int64)(v11 << 25) >> 16;
    }
    while ( v11 >= 0xFFFFF68000000000uLL );
    v49 = v11;
  }
  v12 = 0LL;
  if ( v10 > 0x7FFFFFFEFFFFLL )
  {
    if ( v10 >= 0xFFFFF68000000000uLL && v10 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v15 = 4;
      goto LABEL_19;
    }
LABEL_18:
    v15 = 24;
LABEL_19:
    v47 = v15;
    goto LABEL_20;
  }
  if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 1) == 0 )
  {
    v13 = v10 & 0x7FFFFFFFF000LL;
    if ( (v10 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
    {
      v4 = qword_140C4DCB8;
      v15 = 1;
      goto LABEL_19;
    }
    if ( v13 == qword_140C4DCC8 && v13 )
    {
      v4 = qword_140C4DCC0;
      v15 = 1;
      goto LABEL_19;
    }
  }
  v14 = KeGetCurrentThread()->ApcState.Process;
  v12 = *(_QWORD *)&v14[1].Spare2[23];
  if ( !v12 )
  {
LABEL_17:
    v12 = 0LL;
    Process = v52;
    goto LABEL_18;
  }
  v9 = v10 >> 12;
  if ( v10 >> 12 < (*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32))
    || v9 > (*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) )
  {
    v12 = *(_QWORD *)&v14[1].Spare2[15];
    if ( v12 )
    {
      while ( 1 )
      {
        if ( v9 > (*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) )
        {
          v12 = *(_QWORD *)(v12 + 8);
        }
        else
        {
          if ( v9 >= (*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32)) )
          {
            *(_QWORD *)&v14[1].Spare2[23] = v12;
            goto LABEL_49;
          }
          v12 = *(_QWORD *)v12;
        }
        if ( !v12 )
          goto LABEL_17;
      }
    }
    goto LABEL_17;
  }
LABEL_49:
  v31 = MiCheckUserVirtualAddress(v10, (int *)&v47, v12);
  Process = v52;
  v4 = v31;
  v11 = v49;
  v15 = v47;
LABEL_20:
  if ( !v8 )
  {
    v16 = *a1;
    v17 = v51;
    if ( *a1 >= 0xFFFF800000000000uLL )
    {
      if ( v51 )
        return 3221226548LL;
      if ( v16 >= 0xFFFFF68000000000uLL && v16 <= 0xFFFFF6FFFFFFFFFFuLL && a1[2] != v51 )
        KeBugCheckEx(0x50u, *a1, a1[1], v7, 6uLL);
    }
    if ( v15 == 24 )
    {
      if ( v16 - 0x10000 <= 0x7FFFFFFDFFFFLL && !v12 && (a1[1] & 2) != 0 )
      {
        if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          KeBugCheckEx(0x1Au, 0x4477uLL, v16, 0LL, 0LL);
        if ( (unsigned int)MiIsStoreProcess(Process) )
          KeBugCheckEx(0x1Au, 0x4478uLL, v16, 0LL, 0LL);
      }
      if ( v16 <= 0x7FFFFFFEFFFFLL && v12 && v17 )
      {
        LeafVa = MiGetLeafVa(v7 + 8);
        if ( LeafVa >= v37 )
        {
          MiLeapPrefetch(v17, LeafVa);
        }
        else
        {
          ++*(_QWORD *)(v17 + 24);
          *(_QWORD *)(v17 + 32) = 0LL;
        }
        *(_BYTE *)(v17 + 1) = 1;
      }
      return 3221225477LL;
    }
    if ( v12 && (*(_DWORD *)(v12 + 48) & 0x100000) != 0 && v51 )
    {
      if ( ((v38 = a1[2] & 0xFFFFFFFFFFFFFFFEuLL, v15 >> 3 != 3) || (v15 & 7) == 0) && v15 >> 3 != 1
        || (*(_DWORD *)(v38 + 80) & 0x4000) == 0 )
      {
        MiAdvanceFaultList(v38, v9, Process, v10);
        return 3221226548LL;
      }
    }
    v19 = (struct _KTHREAD *)Process[1].Affinity.Bitmap[10];
    if ( v19 )
    {
      if ( v51 && *(_QWORD *)(v51 + 56) != v51 + 56 )
        return 3221226548LL;
      if ( v19 != KeGetCurrentThread() )
      {
        *((_DWORD *)a1 + 20) |= 4u;
        return 3221226548LL;
      }
      v15 = v47;
    }
    if ( v51 != 0 && v12 != 0 && (unsigned int)MiIsVadLarge(v12) )
    {
      MiLeapPrefetch(
        v17,
        (((*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) << 12) | 0xFFF)
      + 4096);
      result = 3221226548LL;
      *(_BYTE *)(v17 + 1) = 1;
      return result;
    }
    if ( v12 && (*(_BYTE *)(v12 + 48) & 0x70) == 0x50 && !(unsigned int)MiVadPureReserve(v12) )
    {
      LargeVadMappingIndex = MiGetLargeVadMappingIndex(v12, *a1);
      if ( v48 == LargeVadMappingIndex )
      {
        if ( !(unsigned int)MiInsertLargeVadMapping(*a1, v4, LargeVadMappingIndex, v7, v15) )
        {
          v42 = v54;
          LOBYTE(v40) = 17;
          MiReleaseFaultState(v54, v40, 0LL);
          MmAccessFault(0LL, v4, 0, 0LL);
          v43 = (__int64)v55;
          *((_BYTE *)v42 + 13) &= ~1u;
          *((_BYTE *)v42 + 12) = MiLockWorkingSetShared(v43);
          return 3221226548LL;
        }
        if ( (v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBEDFFFuLL) && v49 <= 0x7FFFFFFEFFFFLL )
        {
          UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v7 << 25) >> 16, v40);
          MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
        }
        result = MiLargePageFault(a1, v7, v41);
        if ( (int)result < 0 )
          return result;
        return 3221226548LL;
      }
      v11 = v49;
    }
    if ( (v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBEDFFFuLL) && v11 <= 0x7FFFFFFEFFFFLL )
    {
      v20 = MiGetUsedPtesHandle((__int64)(v7 << 25) >> 16, v9);
      v50 = 0;
      v21 = v20;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v50);
        while ( *(__int64 *)(v21 + 24) < 0 );
      }
      *(_QWORD *)(v21 + 16) ^= ((unsigned int)*(_QWORD *)(v21 + 16) ^ ((unsigned int)*(_QWORD *)(v21 + 16) + 0x10000)) & 0x3FF0000;
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MmIsAddressValidEx(*(_QWORD *)(v21 + 8) | 0x8000000000000000uLL);
    }
    v22 = MiSwizzleInvalidPte(128LL);
    if ( !MiPteInShadowRange(v7) )
      goto LABEL_40;
    if ( !(unsigned int)MiPteHasShadow(v23, v9, Process, v24) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v22 & 1) != 0 )
      {
        v22 |= 0x8000000000000000uLL;
      }
LABEL_40:
      *(_QWORD *)v7 = v22;
      goto LABEL_41;
    }
    if ( !HIBYTE(word_140C4DE88) && (v22 & 1) != 0 )
      v22 |= 0x8000000000000000uLL;
    *(_QWORD *)v7 = v22;
    MiWritePteShadow(v7, v22);
  }
LABEL_41:
  v25 = a1[2];
  v26 = *((_OWORD *)a1 + 1);
  v56[0] = *(_OWORD *)a1;
  v56[1] = v26;
  v27 = *((_OWORD *)a1 + 3);
  v56[2] = *((_OWORD *)a1 + 2);
  v56[3] = v27;
  v28 = *((_OWORD *)a1 + 5);
  v56[4] = *((_OWORD *)a1 + 4);
  v56[5] = v28;
  LODWORD(v56[5]) = 0;
  v29 = *((_OWORD *)a1 + 7);
  v56[6] = *((_OWORD *)a1 + 6);
  *(_QWORD *)&v56[8] = a1[16];
  v56[7] = v29;
  if ( (v25 & 1) != 0 )
  {
    v32 = *(_BYTE *)(v25 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (unsigned __int8)(v32 - 1) <= 2u || v32 == 5 )
      *(_QWORD *)&v56[1] = 0LL;
  }
  ClosestImplicitNode = MiGetClosestImplicitNode(a1[1] >> 57, v9, Process);
  *(_QWORD *)&v56[0] = (__int64)(v7 << 25) >> 16;
  *((_QWORD *)&v56[0] + 1) = ((unsigned __int64)ClosestImplicitNode << 57) | 2;
  *((_QWORD *)&v56[5] + 1) = v12;
  MiFillPteHierarchy(*(_QWORD *)&v56[0], (char *)&v56[1] + 8);
  result = MiDispatchFault((__int64)v56, &v53);
  if ( (_DWORD)result == -1073532109 )
  {
    if ( (v56[5] & 0x40) != 0 )
      *(_DWORD *)(v53 + 192) |= 0x40000u;
    result = MiIssueHardFault(v56);
  }
  if ( (BYTE5(v56[4]) & 1) != 0 )
  {
    v45 = *((_QWORD *)&v56[4] + 1);
    *(_OWORD *)(a1 + 7) = *(_OWORD *)((char *)&v56[3] + 8);
    a1[9] = v45;
  }
  if ( (int)result >= 0 )
  {
    if ( (*((_BYTE *)a1 + 69) & 1) == 0 )
      return 0LL;
    v46 = 3;
    while ( (*(_QWORD *)a1[v48 + 3] & 1LL) != 0 )
    {
      if ( v46 != v48 )
      {
        if ( --v46 )
          continue;
      }
      return 0LL;
    }
    return 3221226548LL;
  }
  return result;
}
