/*
 * XREFs of MiSplitPrivatePage @ 0x1402354F8
 * Callers:
 *     MiCopyToCfgBitMap @ 0x140629C60 (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MiMakeSystemAddressValid @ 0x140235350 (MiMakeSystemAddressValid.c)
 *     MiGetNextPageTable @ 0x140235D70 (MiGetNextPageTable.c)
 *     MiIsPrototypePteVadLookup @ 0x140236D50 (MiIsPrototypePteVadLookup.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x14027D170 (MiVadPureReserve.c)
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1402B3F50 (MiGetProtoPteAddress.c)
 *     MiGetUsedPtesHandle @ 0x1402CC840 (MiGetUsedPtesHandle.c)
 *     MiIncreaseUsedPtesCount @ 0x1402CEA34 (MiIncreaseUsedPtesCount.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiMakeProtoLeafValid @ 0x14031A4F4 (MiMakeProtoLeafValid.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055A428 (MiCopyOnWriteCheckConditions.c)
 *     MiReturnFullProcessCommitment @ 0x14062645C (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x14067BD20 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x14067BDF0 (MiCommitPageTablesForVad.c)
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
  __int64 v22; // rbx
  __int64 UsedPtesHandle; // rax
  __int16 v24; // ax
  int v25; // r13d
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // ebx
  __int64 v34; // rax
  int v36; // r13d
  int v37; // edi
  char v38; // di
  int v39; // ebp
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  bool v44; // zf
  _KPROCESS *v45; // rbp
  int v46; // [rsp+30h] [rbp-98h]
  __int64 v47; // [rsp+38h] [rbp-90h] BYREF
  int v48; // [rsp+40h] [rbp-88h]
  int v49; // [rsp+44h] [rbp-84h]
  __int64 v50; // [rsp+48h] [rbp-80h]
  int v51; // [rsp+50h] [rbp-78h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-70h]
  _KPROCESS *Process; // [rsp+60h] [rbp-68h]
  __int64 ProtoPteAddress; // [rsp+68h] [rbp-60h]
  __int64 v55[11]; // [rsp+70h] [rbp-58h] BYREF
  char v58; // [rsp+E0h] [rbp+18h]
  int v59; // [rsp+E8h] [rbp+20h]

  v51 = 0;
  v3 = a2;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v4 = &Process[1].ActiveProcessorsPadding[6];
  v48 = MiVadPureReserve(a2);
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v55[0] = *(_QWORD *)(v6 + 72);
  v8 = MiChargeFullProcessCommitment(v7, 1LL);
  v9 = v8;
  v10 = 0LL;
  v11 = (*(_DWORD *)(v3 + 48) >> 12) & 0x3F;
  v59 = v8;
  v46 = 0;
  v49 = 0;
  v12 = MiLockWorkingSetShared(&Process[1].ActiveProcessorsPadding[6]);
  v58 = v12;
  v50 = v9;
  while ( 1 )
  {
    LOBYTE(v13) = v12;
    v14 = v5;
    if ( v48 )
      break;
LABEL_11:
    MiMakeSystemAddressValid(v14, 0LL, v11, v13, 0);
LABEL_12:
    ProtoPteAddress = MiGetProtoPteAddress(v3, a1 >> 12, 0LL, v55);
    v20 = ProtoPteAddress;
    v47 = MI_READ_PTE_LOCK_FREE(v5);
    v22 = v47;
    if ( !v47 )
    {
      if ( v50 < 0 )
        goto LABEL_61;
      UsedPtesHandle = MiGetUsedPtesHandle(a1, v21);
      MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
      if ( v48 )
      {
        if ( !v20
          || (v24 = MI_READ_PTE_LOCK_FREE(((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), (v24 & 1) == 0)
          && (v24 & 0x3E0) == 0 )
        {
          v46 = 1;
LABEL_55:
          v36 = v59;
          goto LABEL_56;
        }
      }
      v47 = MiSwizzleInvalidPte(-4294966240LL);
      v22 = v47;
      v25 = 0;
      v26 = v47;
      if ( MiPteInShadowRange(v5) )
      {
        if ( (unsigned int)MiPteHasShadow(v27, v21, v28, v29) )
        {
          v25 = 1;
          if ( !HIBYTE(word_140C4DE88) && (v22 & 1) != 0 )
            v26 |= 0x8000000000000000uLL;
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v22 & 1) != 0 )
          {
            v26 |= 0x8000000000000000uLL;
          }
          v22 = v47;
        }
      }
      *(_QWORD *)v5 = v26;
      if ( v25 )
        MiWritePteShadow(v5, v26);
      v3 = a2;
      v20 = ProtoPteAddress;
    }
    if ( (v22 & 1) != 0 )
    {
      v30 = MI_READ_PTE_LOCK_FREE(&v47);
      if ( !(unsigned int)MI_PFN_IS_PROTO(48 * ((v30 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL)
        || (*(_QWORD *)(v31 + 8) | 0x8000000000000000uLL) != v20 )
      {
        goto LABEL_75;
      }
      if ( v50 < 0 )
      {
LABEL_61:
        if ( v10 )
          MiUnlockPageTableInternal(v4);
        v36 = v59;
LABEL_64:
        LOBYTE(v21) = v58;
        MiUnlockWorkingSetShared(v4, v21);
        return (unsigned int)v36;
      }
      v33 = MiCopyOnWrite(a1, v5, -1LL, 0LL);
      if ( v33 >= 0 )
        goto LABEL_55;
      if ( v10 )
      {
        MiUnlockPageTableInternal(v4);
        v10 = 0LL;
      }
      v12 = v58;
      LOBYTE(v32) = v58;
      MiUnlockWorkingSetShared(v4, v32);
      MiCopyOnWriteCheckConditions(v4, (unsigned int)v33);
      MiLockWorkingSetShared(v4);
      v9 = v50;
    }
    else
    {
      if ( (v22 & 0x400) == 0 )
        goto LABEL_75;
      if ( !(unsigned int)MiIsPrototypePteVadLookup(v22) )
      {
        v21 = qword_140C4DDC0;
        v34 = v22;
        if ( qword_140C4DDC0 && (v22 & 0x10) == 0 )
          v34 = v22 & ~qword_140C4DDC0;
        if ( v34 >> 16 != v20 )
        {
LABEL_75:
          v37 = 0;
          v36 = v59;
          goto LABEL_76;
        }
      }
      v12 = v58;
      if ( (int)MiMakeProtoLeafValid(v5) < 0 && v22 == MI_READ_PTE_LOCK_FREE(v5) )
      {
        v36 = v59;
        if ( v59 < 0 )
        {
          if ( v10 )
            MiUnlockPageTableInternal(v4);
          goto LABEL_64;
        }
        v46 = 1;
LABEL_56:
        v37 = 1;
        v21 = ((((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31) | *(_DWORD *)(a2 + 52) & 0x7FFFFFFF) + 1) >> 31;
        *(_DWORD *)(a2 + 52) ^= (*(_DWORD *)(a2 + 52) ^ (((*(unsigned __int8 *)(a2 + 34) << 31) | *(_DWORD *)(a2 + 52) & 0x7FFFFFFF)
                                                       + 1)) & 0x7FFFFFFF;
        *(_BYTE *)(a2 + 34) = v21;
        if ( v46 == 1 )
        {
          v47 = MiSwizzleInvalidPte(32LL);
          v38 = v47;
          v39 = 0;
          v40 = v47;
          if ( MiPteInShadowRange(v5) )
          {
            if ( (unsigned int)MiPteHasShadow(v41, v21, v42, v43) )
            {
              v39 = 1;
              if ( !HIBYTE(word_140C4DE88) )
              {
                v44 = (v38 & 1) == 0;
                goto LABEL_71;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v44 = (v38 & 1) == 0;
LABEL_71:
              if ( !v44 )
                v40 |= 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v5 = v40;
          v37 = 1;
          if ( v39 )
            MiWritePteShadow(v5, v40);
        }
LABEL_76:
        if ( v10 )
          MiUnlockPageTableInternal(v4);
        LOBYTE(v21) = v58;
        MiUnlockWorkingSetShared(v4, v21);
        v45 = Process;
        if ( v49 == 1 )
        {
          if ( (_InterlockedExchangeAdd64(
                  (volatile signed __int64 *)&Process[1].Affinity.Bitmap[8],
                  0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(&v45[1].Affinity.Bitmap[8]);
          KeAbPostRelease((ULONG_PTR)&v45[1].Affinity.Bitmap[8]);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
        if ( !v37 && v36 >= 0 )
          MiReturnFullProcessCommitment(v45, 1LL);
        return 0LL;
      }
      v9 = v50;
      if ( v10 )
      {
        MiUnlockPageTableInternal(v4);
        v10 = 0LL;
      }
    }
  }
  NextPageTable = MiGetNextPageTable(v5, v5, 0, v13, 0, (__int64)&v51);
  if ( NextPageTable )
    v10 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v5 == NextPageTable )
    goto LABEL_12;
  if ( v10 )
    MiUnlockPageTableInternal(v4);
  LOBYTE(v16) = v12;
  MiUnlockWorkingSetShared(v4, v16);
  if ( v9 < 0 )
    return (unsigned int)v59;
  v49 = 1;
  --CurrentThread->SpecialApcDisable;
  v17 = Process;
  v18 = (volatile signed __int64 *)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
  v19 = MiCommitPageTablesForVad(v3, a1);
  if ( v19 >= 0 )
  {
    v10 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v58 = MiLockWorkingSetShared(v4);
    LOBYTE(v13) = v58;
    v14 = v5;
    goto LABEL_11;
  }
  if ( (_InterlockedExchangeAdd64(v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v18);
  KeAbPostRelease((ULONG_PTR)v18);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v59 >= 0 )
    MiReturnFullProcessCommitment(v17, 1LL);
  return (unsigned int)v19;
}
