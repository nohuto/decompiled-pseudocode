/*
 * XREFs of MiSplitPrivatePage @ 0x140255888
 * Callers:
 *     MiCopyToCfgBitMap @ 0x140607760 (MiCopyToCfgBitMap.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiGetUsedPtesHandle @ 0x140245EC0 (MiGetUsedPtesHandle.c)
 *     MiMakeSystemAddressValid @ 0x1402556E0 (MiMakeSystemAddressValid.c)
 *     MiGetNextPageTable @ 0x140256100 (MiGetNextPageTable.c)
 *     MiIncreaseUsedPtesCount @ 0x1402562E0 (MiIncreaseUsedPtesCount.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiGetProtoPteAddress @ 0x14029A830 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x1402ADBF0 (MiVadPureReserve.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiIsPrototypePteVadLookup @ 0x140315EC0 (MiIsPrototypePteVadLookup.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiMakeProtoLeafValid @ 0x140349AB4 (MiMakeProtoLeafValid.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     MiCopyOnWriteCheckConditions @ 0x140556A58 (MiCopyOnWriteCheckConditions.c)
 *     MiReturnFullProcessCommitment @ 0x1405FAA28 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x140696FE0 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1406970B0 (MiCommitPageTablesForVad.c)
 */

__int64 __fastcall MiSplitPrivatePage(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // r13
  unsigned __int64 *v4; // r15
  unsigned __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // r14
  unsigned int v11; // ebp
  char v12; // di
  int v13; // r9d
  ULONG_PTR v14; // rcx
  unsigned __int64 NextPageTable; // rax
  __int64 v16; // rdx
  _KPROCESS *v17; // r14
  volatile signed __int64 *v18; // rbx
  int v19; // edi
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rbx
  __int64 UsedPtesHandle; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int16 v29; // ax
  int v30; // r13d
  __int64 v31; // rdi
  __int64 v32; // rcx
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  int v36; // ebx
  __int64 v37; // rax
  int v39; // r13d
  int v40; // edi
  char v41; // di
  int v42; // ebp
  __int64 v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  bool v47; // zf
  _KPROCESS *v48; // rbp
  int v49; // [rsp+30h] [rbp-98h]
  __int64 v50; // [rsp+38h] [rbp-90h] BYREF
  int v51; // [rsp+40h] [rbp-88h]
  int v52; // [rsp+44h] [rbp-84h]
  __int64 v53; // [rsp+48h] [rbp-80h]
  int v54; // [rsp+50h] [rbp-78h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-70h]
  _KPROCESS *Process; // [rsp+60h] [rbp-68h]
  __int64 ProtoPteAddress; // [rsp+68h] [rbp-60h]
  __int64 v58[11]; // [rsp+70h] [rbp-58h] BYREF
  char v61; // [rsp+E0h] [rbp+18h]
  int v62; // [rsp+E8h] [rbp+20h]

  v54 = 0;
  v3 = a2;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v4 = &Process[1].ActiveProcessorsPadding[6];
  v51 = MiVadPureReserve(a2);
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v58[0] = *(_QWORD *)(v6 + 72);
  v8 = MiChargeFullProcessCommitment(v7, 1LL);
  v9 = v8;
  v10 = 0LL;
  v11 = (*(_DWORD *)(v3 + 48) >> 12) & 0x3F;
  v62 = v8;
  v49 = 0;
  v52 = 0;
  v12 = MiLockWorkingSetShared(&Process[1].ActiveProcessorsPadding[6]);
  v61 = v12;
  v53 = v9;
  while ( 1 )
  {
    LOBYTE(v13) = v12;
    v14 = v5;
    if ( v51 )
      break;
LABEL_11:
    MiMakeSystemAddressValid(v14, 0LL, v11, v13, 0);
LABEL_12:
    ProtoPteAddress = MiGetProtoPteAddress(v3, a1 >> 12, 0LL, v58);
    v20 = ProtoPteAddress;
    v50 = MI_READ_PTE_LOCK_FREE(v5);
    v24 = v50;
    if ( !v50 )
    {
      if ( v53 < 0 )
        goto LABEL_61;
      UsedPtesHandle = MiGetUsedPtesHandle(a1);
      MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
      if ( v51 )
      {
        if ( !v20
          || (v29 = MI_READ_PTE_LOCK_FREE(((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), (v29 & 1) == 0)
          && (v29 & 0x3E0) == 0 )
        {
          v49 = 1;
LABEL_55:
          v39 = v62;
          goto LABEL_56;
        }
      }
      v50 = MiSwizzleInvalidPte(-4294966240LL, v26, v27, v28);
      v24 = v50;
      v30 = 0;
      v31 = v50;
      if ( MiPteInShadowRange(v5) )
      {
        if ( (unsigned int)MiPteHasShadow(v32, v21, v22, v23) )
        {
          v30 = 1;
          if ( !HIBYTE(word_140C4DE08) && (v24 & 1) != 0 )
            v31 |= 0x8000000000000000uLL;
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v24 & 1) != 0 )
          {
            v31 |= 0x8000000000000000uLL;
          }
          v24 = v50;
        }
      }
      *(_QWORD *)v5 = v31;
      if ( v30 )
        MiWritePteShadow(v5, v31);
      v3 = a2;
      v20 = ProtoPteAddress;
    }
    if ( (v24 & 1) != 0 )
    {
      v33 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v50);
      if ( !(unsigned int)MI_PFN_IS_PROTO(48 * ((v33 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL)
        || (*(_QWORD *)(v34 + 8) | 0x8000000000000000uLL) != v20 )
      {
        goto LABEL_75;
      }
      if ( v53 < 0 )
      {
LABEL_61:
        if ( v10 )
          MiUnlockPageTableInternal(v4, v10);
        v39 = v62;
LABEL_64:
        LOBYTE(v21) = v61;
        MiUnlockWorkingSetShared(v4, v21);
        return (unsigned int)v39;
      }
      v36 = MiCopyOnWrite(a1, (ULONG_PTR *)v5, -1LL, 0);
      if ( v36 >= 0 )
        goto LABEL_55;
      if ( v10 )
      {
        MiUnlockPageTableInternal(v4, v10);
        v10 = 0LL;
      }
      v12 = v61;
      LOBYTE(v35) = v61;
      MiUnlockWorkingSetShared(v4, v35);
      MiCopyOnWriteCheckConditions(v4, (unsigned int)v36);
      MiLockWorkingSetShared(v4);
      v9 = v53;
    }
    else
    {
      if ( (v24 & 0x400) == 0 )
        goto LABEL_75;
      if ( !(unsigned int)MiIsPrototypePteVadLookup(v24, v21, v22, v23) )
      {
        v21 = qword_140C4DD40;
        v37 = v24;
        if ( qword_140C4DD40 && (v24 & 0x10) == 0 )
          v37 = v24 & ~qword_140C4DD40;
        if ( v37 >> 16 != v20 )
        {
LABEL_75:
          v40 = 0;
          v39 = v62;
          goto LABEL_76;
        }
      }
      v12 = v61;
      if ( (int)MiMakeProtoLeafValid(v5) < 0 && v24 == MI_READ_PTE_LOCK_FREE(v5) )
      {
        v39 = v62;
        if ( v62 < 0 )
        {
          if ( v10 )
            MiUnlockPageTableInternal(v4, v10);
          goto LABEL_64;
        }
        v49 = 1;
LABEL_56:
        v40 = 1;
        v21 = ((((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31) | *(_DWORD *)(a2 + 52) & 0x7FFFFFFF) + 1) >> 31;
        *(_DWORD *)(a2 + 52) ^= (*(_DWORD *)(a2 + 52) ^ (((*(unsigned __int8 *)(a2 + 34) << 31) | *(_DWORD *)(a2 + 52) & 0x7FFFFFFF)
                                                       + 1)) & 0x7FFFFFFF;
        *(_BYTE *)(a2 + 34) = v21;
        if ( v49 == 1 )
        {
          v50 = MiSwizzleInvalidPte(32LL, v21, a2, 0x7FFFFFFFLL);
          v41 = v50;
          v42 = 0;
          v43 = v50;
          if ( MiPteInShadowRange(v5) )
          {
            if ( (unsigned int)MiPteHasShadow(v44, v21, v45, v46) )
            {
              v42 = 1;
              if ( !HIBYTE(word_140C4DE08) )
              {
                v47 = (v41 & 1) == 0;
                goto LABEL_71;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v47 = (v41 & 1) == 0;
LABEL_71:
              if ( !v47 )
                v43 |= 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v5 = v43;
          v40 = 1;
          if ( v42 )
            MiWritePteShadow(v5, v43);
        }
LABEL_76:
        if ( v10 )
          MiUnlockPageTableInternal(v4, v10);
        LOBYTE(v21) = v61;
        MiUnlockWorkingSetShared(v4, v21);
        v48 = Process;
        if ( v52 == 1 )
        {
          if ( (_InterlockedExchangeAdd64(
                  (volatile signed __int64 *)&Process[1].Affinity.Bitmap[8],
                  0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(&v48[1].Affinity.Bitmap[8]);
          KeAbPostRelease((ULONG_PTR)&v48[1].Affinity.Bitmap[8]);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
        if ( !v40 && v39 >= 0 )
          MiReturnFullProcessCommitment(v48);
        return 0LL;
      }
      v9 = v53;
      if ( v10 )
      {
        MiUnlockPageTableInternal(v4, v10);
        v10 = 0LL;
      }
    }
  }
  NextPageTable = MiGetNextPageTable(v5, v5, 0, v13, 0, (__int64)&v54);
  if ( NextPageTable )
    v10 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v5 == NextPageTable )
    goto LABEL_12;
  if ( v10 )
    MiUnlockPageTableInternal(v4, v10);
  LOBYTE(v16) = v12;
  MiUnlockWorkingSetShared(v4, v16);
  if ( v9 < 0 )
    return (unsigned int)v62;
  v52 = 1;
  --CurrentThread->SpecialApcDisable;
  v17 = Process;
  v18 = (volatile signed __int64 *)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
  v19 = MiCommitPageTablesForVad(v3, a1);
  if ( v19 >= 0 )
  {
    v10 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v61 = MiLockWorkingSetShared(v4);
    LOBYTE(v13) = v61;
    v14 = v5;
    goto LABEL_11;
  }
  if ( (_InterlockedExchangeAdd64(v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v18);
  KeAbPostRelease((ULONG_PTR)v18);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v62 >= 0 )
    MiReturnFullProcessCommitment(v17);
  return (unsigned int)v19;
}
