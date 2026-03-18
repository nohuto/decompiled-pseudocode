/*
 * XREFs of MiInPagePageTable @ 0x1402B1DE0
 * Callers:
 *     MiUserFault @ 0x14020CC40 (MiUserFault.c)
 * Callees:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiDispatchFault @ 0x14020E3D0 (MiDispatchFault.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x14021AF70 (MiVadPureReserve.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiIsVadLarge @ 0x14027D3A0 (MiIsVadLarge.c)
 *     MiGetLeafVa @ 0x140290520 (MiGetLeafVa.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiGetUsedPtesHandle @ 0x14029EEF0 (MiGetUsedPtesHandle.c)
 *     MiIncreaseUsedPtesCount @ 0x1402AF310 (MiIncreaseUsedPtesCount.c)
 *     MiFillPteHierarchy @ 0x1402B2490 (MiFillPteHierarchy.c)
 *     MiGetClosestImplicitNode @ 0x1402B24F0 (MiGetClosestImplicitNode.c)
 *     MmIsAddressValidEx @ 0x1402B2510 (MmIsAddressValidEx.c)
 *     MiCheckUserVirtualAddress @ 0x1402B2640 (MiCheckUserVirtualAddress.c)
 *     MiIssueHardFault @ 0x1402B4770 (MiIssueHardFault.c)
 *     MiReleaseFaultState @ 0x1402B4E68 (MiReleaseFaultState.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiAdvanceFaultList @ 0x140340BDC (MiAdvanceFaultList.c)
 *     MiIsStoreProcess @ 0x14034D700 (MiIsStoreProcess.c)
 *     MiLeapPrefetch @ 0x14037926C (MiLeapPrefetch.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiGetLargeVadMappingIndex @ 0x140542B88 (MiGetLargeVadMappingIndex.c)
 *     MiInsertLargeVadMapping @ 0x140542C80 (MiInsertLargeVadMapping.c)
 *     MiLargePageFault @ 0x140542F94 (MiLargePageFault.c)
 */

__int64 __fastcall MiInPagePageTable(ULONG_PTR *a1, int a2)
{
  __int64 v2; // rbx
  signed __int64 v4; // r15
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
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rbx
  __int64 v25; // rbx
  __int64 v26; // rcx
  ULONG_PTR v27; // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm1
  __int128 v30; // xmm1
  __int128 v31; // xmm1
  unsigned int ClosestImplicitNode; // eax
  __int64 v33; // rax
  char v34; // cl
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v39; // r10
  unsigned __int64 v40; // rcx
  int LargeVadMappingIndex; // eax
  __int64 v42; // rdx
  __int64 v43; // r8
  _QWORD *v44; // rbx
  __int64 v45; // rcx
  __int64 UsedPtesHandle; // rax
  __int64 v47; // r8
  __int64 v48; // r9
  ULONG_PTR v49; // xmm1_8
  int v50; // ecx
  unsigned int v51; // [rsp+30h] [rbp-D0h] BYREF
  int v52; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v53; // [rsp+38h] [rbp-C8h]
  int v54; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v55; // [rsp+48h] [rbp-B8h]
  _KPROCESS *v56; // [rsp+50h] [rbp-B0h]
  __int64 v57; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v58; // [rsp+60h] [rbp-A0h]
  unsigned __int64 *v59; // [rsp+68h] [rbp-98h]
  _OWORD v60[9]; // [rsp+70h] [rbp-90h] BYREF

  v2 = a2;
  v4 = 0LL;
  v52 = a2;
  v51 = 0;
  v57 = 0LL;
  memset(v60, 0, 0x88uLL);
  v5 = a1[2];
  Process = KeGetCurrentThread()->ApcState.Process;
  v56 = Process;
  v59 = &Process[1].ActiveProcessorsPadding[6];
  if ( (v5 & 1) == 0 || (v55 = v5 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
    v55 = 0LL;
  v7 = a1[v2 + 3];
  v58 = a1 + 7;
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
      v36 = *((_QWORD *)&Flink->Flink + ((v7 >> 3) & 0x1FF));
      v37 = v8 | 0x20;
      if ( (v36 & 0x20) == 0 )
        v37 = *(_QWORD *)v7;
      v8 = v37;
      if ( (v36 & 0x42) != 0 )
        v8 = v37 | 0x42;
    }
  }
  v9 = 0xFFFFF68000000000uLL;
  v10 = *a1;
  v11 = v10;
  v53 = *a1;
  if ( v10 >= 0xFFFFF68000000000uLL )
  {
    do
    {
      if ( v11 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v11 = (__int64)(v11 << 25) >> 16;
    }
    while ( v11 >= 0xFFFFF68000000000uLL );
    v53 = v11;
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
    v51 = v15;
    goto LABEL_20;
  }
  if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 1) == 0 )
  {
    v13 = v10 & 0x7FFFFFFFF000LL;
    if ( (v10 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
    {
      v4 = qword_140C4DD78;
      v15 = 1;
      goto LABEL_19;
    }
    if ( v13 == qword_140C4DD88 && v13 )
    {
      v4 = qword_140C4DD80;
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
    Process = v56;
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
  v33 = MiCheckUserVirtualAddress(v10, &v51);
  Process = v56;
  v4 = v33;
  v11 = v53;
  v15 = v51;
LABEL_20:
  if ( !v8 )
  {
    v16 = *a1;
    v17 = v55;
    if ( *a1 >= 0xFFFF800000000000uLL )
    {
      if ( v55 )
        return 3221226548LL;
      if ( v16 >= 0xFFFFF68000000000uLL && v16 <= 0xFFFFF6FFFFFFFFFFuLL && a1[2] != v55 )
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
        if ( LeafVa >= v39 )
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
    if ( v12 && (*(_DWORD *)(v12 + 48) & 0x100000) != 0 && v55 )
    {
      if ( ((v40 = a1[2] & 0xFFFFFFFFFFFFFFFEuLL, v15 >> 3 != 3) || (v15 & 7) == 0) && v15 >> 3 != 1
        || (*(_DWORD *)(v40 + 80) & 0x4000) == 0 )
      {
        MiAdvanceFaultList(v40);
        return 3221226548LL;
      }
    }
    v19 = (struct _KTHREAD *)Process[1].Affinity.Bitmap[10];
    if ( v19 )
    {
      if ( v55 && *(_QWORD *)(v55 + 56) != v55 + 56 )
        return 3221226548LL;
      if ( v19 != KeGetCurrentThread() )
      {
        *((_DWORD *)a1 + 20) |= 4u;
        return 3221226548LL;
      }
      v15 = v51;
    }
    if ( v55 != 0 && v12 != 0 && (unsigned int)MiIsVadLarge(v12) )
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
      if ( v52 == LargeVadMappingIndex )
      {
        if ( !(unsigned int)MiInsertLargeVadMapping(*a1, v4, LargeVadMappingIndex, v7, v15) )
        {
          v44 = v58;
          LOBYTE(v42) = 17;
          MiReleaseFaultState(v58, v42, 0LL);
          MmAccessFault(0LL, v4, 0, 0LL);
          v45 = (__int64)v59;
          *((_BYTE *)v44 + 13) &= ~1u;
          *((_BYTE *)v44 + 12) = MiLockWorkingSetShared(v45);
          return 3221226548LL;
        }
        if ( (v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBEDFFFuLL) && v53 <= 0x7FFFFFFEFFFFLL )
        {
          UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v7 << 25) >> 16);
          MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL, v47, v48);
        }
        result = MiLargePageFault(a1, v7, v43);
        if ( (int)result < 0 )
          return result;
        return 3221226548LL;
      }
      v11 = v53;
    }
    if ( (v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBEDFFFuLL) && v11 <= 0x7FFFFFFEFFFFLL )
    {
      v20 = MiGetUsedPtesHandle((__int64)(v7 << 25) >> 16);
      v54 = 0;
      v24 = v20;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v54, v21, v22, v23);
        while ( *(__int64 *)(v24 + 24) < 0 );
      }
      *(_QWORD *)(v24 + 16) ^= ((unsigned int)*(_QWORD *)(v24 + 16) ^ ((unsigned int)*(_QWORD *)(v24 + 16) + 0x10000)) & 0x3FF0000;
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MmIsAddressValidEx(*(_QWORD *)(v24 + 8) | 0x8000000000000000uLL);
    }
    v25 = MiSwizzleInvalidPte(128LL);
    if ( !MiPteInShadowRange(v7) )
      goto LABEL_40;
    if ( !(unsigned int)MiPteHasShadow(v26, v9) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v25 & 1) != 0 )
      {
        v25 |= 0x8000000000000000uLL;
      }
LABEL_40:
      *(_QWORD *)v7 = v25;
      goto LABEL_41;
    }
    if ( !HIBYTE(word_140C4DF48) && (v25 & 1) != 0 )
      v25 |= 0x8000000000000000uLL;
    *(_QWORD *)v7 = v25;
    MiWritePteShadow(v7, v25);
  }
LABEL_41:
  v27 = a1[2];
  v28 = *((_OWORD *)a1 + 1);
  v60[0] = *(_OWORD *)a1;
  v60[1] = v28;
  v29 = *((_OWORD *)a1 + 3);
  v60[2] = *((_OWORD *)a1 + 2);
  v60[3] = v29;
  v30 = *((_OWORD *)a1 + 5);
  v60[4] = *((_OWORD *)a1 + 4);
  v60[5] = v30;
  LODWORD(v60[5]) = 0;
  v31 = *((_OWORD *)a1 + 7);
  v60[6] = *((_OWORD *)a1 + 6);
  *(_QWORD *)&v60[8] = a1[16];
  v60[7] = v31;
  if ( (v27 & 1) != 0 )
  {
    v34 = *(_BYTE *)(v27 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (unsigned __int8)(v34 - 1) <= 2u || v34 == 5 )
      *(_QWORD *)&v60[1] = 0LL;
  }
  ClosestImplicitNode = MiGetClosestImplicitNode(a1[1] >> 57, v9, Process);
  *(_QWORD *)&v60[0] = (__int64)(v7 << 25) >> 16;
  *((_QWORD *)&v60[0] + 1) = ((unsigned __int64)ClosestImplicitNode << 57) | 2;
  *((_QWORD *)&v60[5] + 1) = v12;
  MiFillPteHierarchy(*(_QWORD *)&v60[0], (char *)&v60[1] + 8);
  result = MiDispatchFault((__int64)v60, &v57);
  if ( (_DWORD)result == -1073532109 )
  {
    if ( (v60[5] & 0x40) != 0 )
      *(_DWORD *)(v57 + 192) |= 0x40000u;
    result = MiIssueHardFault(v60);
  }
  if ( (BYTE5(v60[4]) & 1) != 0 )
  {
    v49 = *((_QWORD *)&v60[4] + 1);
    *(_OWORD *)(a1 + 7) = *(_OWORD *)((char *)&v60[3] + 8);
    a1[9] = v49;
  }
  if ( (int)result >= 0 )
  {
    if ( (*((_BYTE *)a1 + 69) & 1) == 0 )
      return 0LL;
    v50 = 3;
    while ( (*(_QWORD *)a1[v52 + 3] & 1LL) != 0 )
    {
      if ( v50 != v52 )
      {
        if ( --v50 )
          continue;
      }
      return 0LL;
    }
    return 3221226548LL;
  }
  return result;
}
