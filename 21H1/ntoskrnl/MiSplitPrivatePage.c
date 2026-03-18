/*
 * XREFs of MiSplitPrivatePage @ 0x1402AE8B8
 * Callers:
 *     MiCopyToCfgBitMap @ 0x14063C8B0 (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140207D20 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x14021AF70 (MiVadPureReserve.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiGetUsedPtesHandle @ 0x14029EEF0 (MiGetUsedPtesHandle.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     MiGetNextPageTable @ 0x1402AF130 (MiGetNextPageTable.c)
 *     MiIncreaseUsedPtesCount @ 0x1402AF310 (MiIncreaseUsedPtesCount.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiMakeProtoLeafValid @ 0x14030BB74 (MiMakeProtoLeafValid.c)
 *     MiIsPrototypePteVadLookup @ 0x140345200 (MiIsPrototypePteVadLookup.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     MiCopyOnWriteCheckConditions @ 0x140556408 (MiCopyOnWriteCheckConditions.c)
 *     MiChargeFullProcessCommitment @ 0x1405EDAE0 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1405EDBB0 (MiCommitPageTablesForVad.c)
 *     MiReturnFullProcessCommitment @ 0x14062FA68 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiSplitPrivatePage(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // r15
  unsigned __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // r14
  unsigned int v11; // ebp
  unsigned __int8 v12; // di
  int v13; // r9d
  ULONG_PTR v14; // rcx
  unsigned __int64 NextPageTable; // rax
  _KPROCESS *v16; // r14
  volatile signed __int64 *v17; // rbx
  int v18; // edi
  unsigned __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 UsedPtesHandle; // rax
  __int16 v22; // ax
  int v23; // r13d
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rcx
  int v31; // ebx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  int v37; // r13d
  int v38; // edi
  unsigned __int64 v39; // rdx
  char v40; // di
  int v41; // ebp
  __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  bool v45; // zf
  _KPROCESS *v46; // rbp
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // [rsp+30h] [rbp-98h]
  __int64 v51; // [rsp+38h] [rbp-90h] BYREF
  int v52; // [rsp+40h] [rbp-88h]
  int v53; // [rsp+44h] [rbp-84h]
  __int64 v54; // [rsp+48h] [rbp-80h]
  int v55; // [rsp+50h] [rbp-78h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-70h]
  _KPROCESS *Process; // [rsp+60h] [rbp-68h]
  __int64 ProtoPteAddress; // [rsp+68h] [rbp-60h]
  __int64 v59[11]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int8 v62; // [rsp+E0h] [rbp+18h]
  int v63; // [rsp+E8h] [rbp+20h]

  v55 = 0;
  v3 = a2;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v4 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v52 = MiVadPureReserve(a2);
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v59[0] = *(_QWORD *)(v6 + 72);
  v8 = MiChargeFullProcessCommitment(v7, 1LL);
  v9 = v8;
  v10 = 0LL;
  v11 = (*(_DWORD *)(v3 + 48) >> 12) & 0x3F;
  v63 = v8;
  v50 = 0;
  v53 = 0;
  v12 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6]);
  v62 = v12;
  v54 = v9;
  while ( 1 )
  {
    LOBYTE(v13) = v12;
    v14 = v5;
    if ( v52 )
      break;
LABEL_11:
    MiMakeSystemAddressValid(v14, 0LL, v11, v13, 0);
LABEL_12:
    ProtoPteAddress = MiGetProtoPteAddress(v3, a1 >> 12, 0, v59);
    v19 = ProtoPteAddress;
    v51 = MI_READ_PTE_LOCK_FREE(v5);
    v20 = v51;
    if ( !v51 )
    {
      if ( v54 < 0 )
        goto LABEL_61;
      UsedPtesHandle = MiGetUsedPtesHandle(a1);
      MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
      if ( v52 )
      {
        if ( !v19
          || (v22 = MI_READ_PTE_LOCK_FREE(((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), (v22 & 1) == 0)
          && (v22 & 0x3E0) == 0 )
        {
          v50 = 1;
LABEL_55:
          v37 = v63;
          goto LABEL_56;
        }
      }
      v51 = MiSwizzleInvalidPte(-4294966240LL);
      v20 = v51;
      v23 = 0;
      v24 = v51;
      if ( MiPteInShadowRange(v5) )
      {
        if ( (unsigned int)MiPteHasShadow(v26, v25) )
        {
          v23 = 1;
          if ( !HIBYTE(word_140C4DF48) && (v20 & 1) != 0 )
            v24 |= 0x8000000000000000uLL;
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v20 & 1) != 0 )
          {
            v24 |= 0x8000000000000000uLL;
          }
          v20 = v51;
        }
      }
      *(_QWORD *)v5 = v24;
      if ( v23 )
        MiWritePteShadow(v5, v24);
      v3 = a2;
      v19 = ProtoPteAddress;
    }
    if ( (v20 & 1) != 0 )
    {
      v27 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v51);
      if ( !(unsigned int)MI_PFN_IS_PROTO(48 * ((v27 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, v28, v29)
        || (*(_QWORD *)(v30 + 8) | 0x8000000000000000uLL) != v19 )
      {
        goto LABEL_75;
      }
      if ( v54 < 0 )
      {
LABEL_61:
        if ( v10 )
          MiUnlockPageTableInternal(v4, v10);
        v37 = v63;
LABEL_64:
        MiUnlockWorkingSetShared(v4, v62);
        return (unsigned int)v37;
      }
      v31 = MiCopyOnWrite(a1, (ULONG_PTR *)v5, 0xFFFFFFFFFFFFFFFFuLL, 0);
      if ( v31 >= 0 )
        goto LABEL_55;
      if ( v10 )
      {
        MiUnlockPageTableInternal(v4, v10);
        v10 = 0LL;
      }
      v12 = v62;
      MiUnlockWorkingSetShared(v4, v62);
      MiCopyOnWriteCheckConditions(v4, (unsigned int)v31);
      MiLockWorkingSetShared(v4);
      v9 = v54;
    }
    else
    {
      if ( (v20 & 0x400) == 0 )
        goto LABEL_75;
      if ( !(unsigned int)MiIsPrototypePteVadLookup(v20) )
      {
        v32 = v20;
        if ( qword_140C4DE80 && (v20 & 0x10) == 0 )
          v32 = v20 & ~qword_140C4DE80;
        if ( v32 >> 16 != v19 )
        {
LABEL_75:
          v38 = 0;
          v37 = v63;
          goto LABEL_76;
        }
      }
      v12 = v62;
      if ( (int)MiMakeProtoLeafValid(v5) < 0 && v20 == MI_READ_PTE_LOCK_FREE(v5) )
      {
        v37 = v63;
        if ( v63 < 0 )
        {
          if ( v10 )
            MiUnlockPageTableInternal(v4, v10);
          goto LABEL_64;
        }
        v50 = 1;
LABEL_56:
        v38 = 1;
        v39 = ((((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31) | *(_DWORD *)(a2 + 52) & 0x7FFFFFFF) + 1) >> 31;
        *(_DWORD *)(a2 + 52) ^= (*(_DWORD *)(a2 + 52) ^ (((*(unsigned __int8 *)(a2 + 34) << 31) | *(_DWORD *)(a2 + 52) & 0x7FFFFFFF)
                                                       + 1)) & 0x7FFFFFFF;
        *(_BYTE *)(a2 + 34) = v39;
        if ( v50 == 1 )
        {
          v51 = MiSwizzleInvalidPte(32LL);
          v40 = v51;
          v41 = 0;
          v42 = v51;
          if ( MiPteInShadowRange(v5) )
          {
            if ( (unsigned int)MiPteHasShadow(v44, v43) )
            {
              v41 = 1;
              if ( !HIBYTE(word_140C4DF48) )
              {
                v45 = (v40 & 1) == 0;
                goto LABEL_71;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v45 = (v40 & 1) == 0;
LABEL_71:
              if ( !v45 )
                v42 |= 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v5 = v42;
          v38 = 1;
          if ( v41 )
            MiWritePteShadow(v5, v42);
        }
LABEL_76:
        if ( v10 )
          MiUnlockPageTableInternal(v4, v10);
        MiUnlockWorkingSetShared(v4, v62);
        v46 = Process;
        if ( v53 == 1 )
        {
          if ( (_InterlockedExchangeAdd64(
                  (volatile signed __int64 *)&Process[1].Affinity.Bitmap[8],
                  0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(&v46[1].Affinity.Bitmap[8]);
          KeAbPostRelease((ULONG_PTR)&v46[1].Affinity.Bitmap[8]);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v47, v48, v49);
        }
        if ( !v38 && v37 >= 0 )
          MiReturnFullProcessCommitment(v46, 1LL);
        return 0LL;
      }
      v9 = v54;
      if ( v10 )
      {
        MiUnlockPageTableInternal(v4, v10);
        v10 = 0LL;
      }
    }
  }
  NextPageTable = MiGetNextPageTable(v5, v5, 0, v13, 0, (__int64)&v55);
  if ( NextPageTable )
    v10 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v5 == NextPageTable )
    goto LABEL_12;
  if ( v10 )
    MiUnlockPageTableInternal(v4, v10);
  MiUnlockWorkingSetShared(v4, v12);
  if ( v9 < 0 )
    return (unsigned int)v63;
  v53 = 1;
  --CurrentThread->SpecialApcDisable;
  v16 = Process;
  v17 = (volatile signed __int64 *)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
  v18 = MiCommitPageTablesForVad(v3, a1, a1);
  if ( v18 >= 0 )
  {
    v10 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v62 = MiLockWorkingSetShared(v4);
    LOBYTE(v13) = v62;
    v14 = v5;
    goto LABEL_11;
  }
  if ( (_InterlockedExchangeAdd64(v17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v17);
  KeAbPostRelease((ULONG_PTR)v17);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v33, v34, v35);
  if ( v63 >= 0 )
    MiReturnFullProcessCommitment(v16, 1LL);
  return (unsigned int)v18;
}
