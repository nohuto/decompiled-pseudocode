/*
 * XREFs of MiInPagePageTable @ 0x140258DB0
 * Callers:
 *     MiUserFault @ 0x14029F750 (MiUserFault.c)
 * Callees:
 *     MiIsVadLarge @ 0x140224350 (MiIsVadLarge.c)
 *     MiGetLeafVa @ 0x1402374D0 (MiGetLeafVa.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiGetUsedPtesHandle @ 0x140245EC0 (MiGetUsedPtesHandle.c)
 *     MiIncreaseUsedPtesCount @ 0x1402562E0 (MiIncreaseUsedPtesCount.c)
 *     MiFillPteHierarchy @ 0x140259460 (MiFillPteHierarchy.c)
 *     MiGetClosestImplicitNode @ 0x1402594C0 (MiGetClosestImplicitNode.c)
 *     MmIsAddressValidEx @ 0x1402594E0 (MmIsAddressValidEx.c)
 *     MiCheckUserVirtualAddress @ 0x140259610 (MiCheckUserVirtualAddress.c)
 *     MiIssueHardFault @ 0x14025B740 (MiIssueHardFault.c)
 *     MiReleaseFaultState @ 0x14025BE38 (MiReleaseFaultState.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiDispatchFault @ 0x1402A0EE0 (MiDispatchFault.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x1402ADBF0 (MiVadPureReserve.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiIsStoreProcess @ 0x1402D55C0 (MiIsStoreProcess.c)
 *     MiAdvanceFaultList @ 0x140312138 (MiAdvanceFaultList.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiLeapPrefetch @ 0x14037A114 (MiLeapPrefetch.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiGetLargeVadMappingIndex @ 0x1405431D8 (MiGetLargeVadMappingIndex.c)
 *     MiInsertLargeVadMapping @ 0x1405432D0 (MiInsertLargeVadMapping.c)
 *     MiLargePageFault @ 0x1405435E4 (MiLargePageFault.c)
 */

__int64 __fastcall MiInPagePageTable(ULONG_PTR *a1, int a2)
{
  __int64 v2; // rbx
  ULONG_PTR v4; // r15
  ULONG_PTR v5; // rcx
  _KPROCESS *Process; // r8
  ULONG_PTR v7; // r12
  __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  ULONG_PTR v10; // r9
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
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // r9
  ULONG_PTR v26; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm1
  __int128 v29; // xmm1
  __int128 v30; // xmm1
  unsigned int ClosestImplicitNode; // eax
  __int64 v32; // rax
  char v33; // cl
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v38; // r10
  unsigned __int64 v39; // rcx
  int LargeVadMappingIndex; // eax
  __int64 v41; // rdx
  __int64 v42; // r9
  _QWORD *v43; // rbx
  unsigned __int64 *v44; // rcx
  __int64 UsedPtesHandle; // rax
  __int64 v46; // rdx
  ULONG_PTR v47; // xmm1_8
  int v48; // ecx
  unsigned int v49; // [rsp+30h] [rbp-D0h] BYREF
  int v50; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v51; // [rsp+38h] [rbp-C8h]
  int v52; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v53; // [rsp+48h] [rbp-B8h]
  _KPROCESS *v54; // [rsp+50h] [rbp-B0h]
  __int64 v55; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v56; // [rsp+60h] [rbp-A0h]
  unsigned __int64 *v57; // [rsp+68h] [rbp-98h]
  _OWORD v58[9]; // [rsp+70h] [rbp-90h] BYREF

  v2 = a2;
  v4 = 0LL;
  v50 = a2;
  v49 = 0;
  v55 = 0LL;
  memset(v58, 0, 0x88uLL);
  v5 = a1[2];
  Process = KeGetCurrentThread()->ApcState.Process;
  v54 = Process;
  v57 = &Process[1].ActiveProcessorsPadding[6];
  if ( (v5 & 1) == 0 || (v53 = v5 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
    v53 = 0LL;
  v7 = a1[v2 + 3];
  v56 = a1 + 7;
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
      v35 = *((_QWORD *)&Flink->Flink + ((v7 >> 3) & 0x1FF));
      v36 = v8 | 0x20;
      if ( (v35 & 0x20) == 0 )
        v36 = *(_QWORD *)v7;
      v8 = v36;
      if ( (v35 & 0x42) != 0 )
        v8 = v36 | 0x42;
    }
  }
  v9 = 0xFFFFF68000000000uLL;
  v10 = *a1;
  v11 = v10;
  v51 = *a1;
  if ( v10 >= 0xFFFFF68000000000uLL )
  {
    do
    {
      if ( v11 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v11 = (__int64)(v11 << 25) >> 16;
    }
    while ( v11 >= 0xFFFFF68000000000uLL );
    v51 = v11;
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
    v49 = v15;
    goto LABEL_20;
  }
  if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 1) == 0 )
  {
    v13 = v10 & 0x7FFFFFFFF000LL;
    if ( (v10 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
    {
      v4 = qword_140C4DC38;
      v15 = 1;
      goto LABEL_19;
    }
    if ( v13 == qword_140C4DC48 && v13 )
    {
      v4 = qword_140C4DC40;
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
    Process = v54;
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
  v32 = MiCheckUserVirtualAddress(v10, &v49, v12);
  Process = v54;
  v4 = v32;
  v11 = v51;
  v15 = v49;
LABEL_20:
  if ( !v8 )
  {
    v16 = *a1;
    v17 = v53;
    if ( *a1 >= 0xFFFF800000000000uLL )
    {
      if ( v53 )
        return 3221226548LL;
      if ( v16 >= 0xFFFFF68000000000uLL && v16 <= 0xFFFFF6FFFFFFFFFFuLL && a1[2] != v53 )
        KeBugCheckEx(0x50u, *a1, a1[1], v7, 6uLL);
    }
    if ( v15 == 24 )
    {
      if ( v16 - 0x10000 <= 0x7FFFFFFDFFFFLL && !v12 && (a1[1] & 2) != 0 )
      {
        if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          KeBugCheckEx(0x1Au, 0x4477uLL, v16, 0LL, 0LL);
        if ( (unsigned int)MiIsStoreProcess(Process, v9, Process, v10) )
          KeBugCheckEx(0x1Au, 0x4478uLL, v16, 0LL, 0LL);
      }
      if ( v16 <= 0x7FFFFFFEFFFFLL && v12 && v17 )
      {
        LeafVa = MiGetLeafVa(v7 + 8);
        if ( LeafVa >= v38 )
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
    if ( v12 && (*(_DWORD *)(v12 + 48) & 0x100000) != 0 && v53 )
    {
      if ( ((v39 = a1[2] & 0xFFFFFFFFFFFFFFFEuLL, v15 >> 3 != 3) || (v15 & 7) == 0) && v15 >> 3 != 1
        || (*(_DWORD *)(v39 + 80) & 0x4000) == 0 )
      {
        MiAdvanceFaultList(v39, v9, Process, v10);
        return 3221226548LL;
      }
    }
    v19 = (struct _KTHREAD *)Process[1].Affinity.Bitmap[10];
    if ( v19 )
    {
      if ( v53 && *(_QWORD *)(v53 + 56) != v53 + 56 )
        return 3221226548LL;
      if ( v19 != KeGetCurrentThread() )
      {
        *((_DWORD *)a1 + 20) |= 4u;
        return 3221226548LL;
      }
      v15 = v49;
    }
    if ( v53 != 0 && v12 != 0 && (unsigned int)MiIsVadLarge(v12) )
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
      if ( v50 == LargeVadMappingIndex )
      {
        if ( !(unsigned int)MiInsertLargeVadMapping(*a1, v4, LargeVadMappingIndex, v7, v15) )
        {
          v43 = v56;
          LOBYTE(v41) = 17;
          MiReleaseFaultState(v56, v41, 0LL, v42);
          MmAccessFault(0LL, v4);
          v44 = v57;
          *((_BYTE *)v43 + 13) &= ~1u;
          *((_BYTE *)v43 + 12) = MiLockWorkingSetShared(v44);
          return 3221226548LL;
        }
        if ( (v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBEDFFFuLL) && v51 <= 0x7FFFFFFEFFFFLL )
        {
          UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v7 << 25) >> 16);
          MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
        }
        result = MiLargePageFault(a1, v7);
        if ( (int)result < 0 )
          return result;
        return 3221226548LL;
      }
      v11 = v51;
    }
    if ( (v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBEDFFFuLL) && v11 <= 0x7FFFFFFEFFFFLL )
    {
      v20 = MiGetUsedPtesHandle((__int64)(v7 << 25) >> 16);
      v52 = 0;
      v22 = v20;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v52, v21);
        while ( *(__int64 *)(v22 + 24) < 0 );
      }
      *(_QWORD *)(v22 + 16) ^= ((unsigned int)*(_QWORD *)(v22 + 16) ^ ((unsigned int)*(_QWORD *)(v22 + 16) + 0x10000)) & 0x3FF0000;
      _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MmIsAddressValidEx(*(_QWORD *)(v22 + 8) | 0x8000000000000000uLL);
    }
    v23 = MiSwizzleInvalidPte(128LL, v9, Process, v10);
    if ( !MiPteInShadowRange(v7) )
      goto LABEL_40;
    if ( !(unsigned int)MiPteHasShadow(v24, v9, Process, v25) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v23 & 1) != 0 )
      {
        v23 |= 0x8000000000000000uLL;
      }
LABEL_40:
      *(_QWORD *)v7 = v23;
      goto LABEL_41;
    }
    if ( !HIBYTE(word_140C4DE08) && (v23 & 1) != 0 )
      v23 |= 0x8000000000000000uLL;
    *(_QWORD *)v7 = v23;
    MiWritePteShadow(v7, v23);
  }
LABEL_41:
  v26 = a1[2];
  v27 = *((_OWORD *)a1 + 1);
  v58[0] = *(_OWORD *)a1;
  v58[1] = v27;
  v28 = *((_OWORD *)a1 + 3);
  v58[2] = *((_OWORD *)a1 + 2);
  v58[3] = v28;
  v29 = *((_OWORD *)a1 + 5);
  v58[4] = *((_OWORD *)a1 + 4);
  v58[5] = v29;
  LODWORD(v58[5]) = 0;
  v30 = *((_OWORD *)a1 + 7);
  v58[6] = *((_OWORD *)a1 + 6);
  *(_QWORD *)&v58[8] = a1[16];
  v58[7] = v30;
  if ( (v26 & 1) != 0 )
  {
    v33 = *(_BYTE *)(v26 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (unsigned __int8)(v33 - 1) <= 2u || v33 == 5 )
      *(_QWORD *)&v58[1] = 0LL;
  }
  ClosestImplicitNode = MiGetClosestImplicitNode(a1[1] >> 57, v9, Process);
  *(_QWORD *)&v58[0] = (__int64)(v7 << 25) >> 16;
  *((_QWORD *)&v58[0] + 1) = ((unsigned __int64)ClosestImplicitNode << 57) | 2;
  *((_QWORD *)&v58[5] + 1) = v12;
  MiFillPteHierarchy(*(_QWORD *)&v58[0], (char *)&v58[1] + 8);
  result = MiDispatchFault(v58, &v55);
  if ( (_DWORD)result == -1073532109 )
  {
    v46 = v55;
    if ( (v58[5] & 0x40) != 0 )
      *(_DWORD *)(v55 + 192) |= 0x40000u;
    result = MiIssueHardFault(v58, v46);
  }
  if ( (BYTE5(v58[4]) & 1) != 0 )
  {
    v47 = *((_QWORD *)&v58[4] + 1);
    *(_OWORD *)(a1 + 7) = *(_OWORD *)((char *)&v58[3] + 8);
    a1[9] = v47;
  }
  if ( (int)result >= 0 )
  {
    if ( (*((_BYTE *)a1 + 69) & 1) == 0 )
      return 0LL;
    v48 = 3;
    while ( (*(_QWORD *)a1[v50 + 3] & 1LL) != 0 )
    {
      if ( v48 != v50 )
      {
        if ( --v48 )
          continue;
      }
      return 0LL;
    }
    return 3221226548LL;
  }
  return result;
}
