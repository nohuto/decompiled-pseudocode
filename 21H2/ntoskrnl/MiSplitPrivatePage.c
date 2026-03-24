/*
 * XREFs of MiSplitPrivatePage @ 0x14030CFB0
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1406E9880 (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x14021B990 (MiVadPureReserve.c)
 *     MiCopyOnWrite @ 0x14023F300 (MiCopyOnWrite.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiIsPrototypePteVadLookup @ 0x14028D4D0 (MiIsPrototypePteVadLookup.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiMakeProtoLeafValid @ 0x1402BCAB4 (MiMakeProtoLeafValid.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiIncreaseUsedPtesCount @ 0x1403097D4 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x14030CA60 (MiGetUsedPtesHandle.c)
 *     MiGetNextPageTable @ 0x14030D820 (MiGetNextPageTable.c)
 *     MiMakeSystemAddressValid @ 0x14030E390 (MiMakeSystemAddressValid.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x140330B40 (MiGetProtoPteAddress.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055BEF8 (MiCopyOnWriteCheckConditions.c)
 *     MiChargeFullProcessCommitment @ 0x1405F90D0 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1405F91A0 (MiCommitPageTablesForVad.c)
 *     MiReturnFullProcessCommitment @ 0x1406EE838 (MiReturnFullProcessCommitment.c)
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
  unsigned __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  unsigned __int8 v14; // di
  int v15; // r9d
  ULONG_PTR v16; // rcx
  unsigned __int64 NextPageTable; // rax
  _KPROCESS *v18; // r14
  volatile signed __int64 *v19; // rbx
  __int64 v20; // rdx
  int v21; // edi
  __int64 v22; // r8
  _DWORD *v23; // r9
  unsigned __int64 v24; // rdi
  __int64 v25; // rdx
  unsigned __int64 v26; // rbx
  __int64 UsedPtesHandle; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int16 v30; // ax
  int v31; // r13d
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // r8
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // ebx
  __int64 v38; // rdx
  __int64 v39; // r8
  _DWORD *v40; // r9
  __int64 v41; // rax
  int v43; // r13d
  int v44; // edi
  unsigned __int64 v45; // rdx
  char v46; // di
  int v47; // ebp
  __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // r8
  bool v51; // zf
  _KPROCESS *v52; // rbp
  int v53; // [rsp+30h] [rbp-98h]
  __int64 v54; // [rsp+38h] [rbp-90h] BYREF
  int v55; // [rsp+40h] [rbp-88h]
  int v56; // [rsp+44h] [rbp-84h]
  __int64 v57; // [rsp+48h] [rbp-80h]
  int v58; // [rsp+50h] [rbp-78h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-70h]
  _KPROCESS *Process; // [rsp+60h] [rbp-68h]
  __int64 ProtoPteAddress; // [rsp+68h] [rbp-60h]
  __int64 v62[11]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int8 v65; // [rsp+E0h] [rbp+18h]
  int v66; // [rsp+E8h] [rbp+20h]

  v58 = 0;
  v3 = a2;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v4 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v55 = MiVadPureReserve(a2);
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v62[0] = *(_QWORD *)(v6 + 72);
  v8 = MiChargeFullProcessCommitment(v7, 1LL);
  v9 = v8;
  v10 = 0LL;
  v66 = v8;
  v53 = 0;
  v56 = 0;
  v14 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v11, v12, v13);
  v65 = v14;
  v57 = v9;
  while ( 1 )
  {
    LOBYTE(v15) = v14;
    v16 = v5;
    if ( v55 )
      break;
LABEL_11:
    MiMakeSystemAddressValid(v16, 0);
LABEL_12:
    ProtoPteAddress = MiGetProtoPteAddress(v3, a1 >> 12, 0LL, v62);
    v24 = ProtoPteAddress;
    v54 = MI_READ_PTE_LOCK_FREE(v5);
    v26 = v54;
    if ( !v54 )
    {
      if ( v57 < 0 )
        goto LABEL_61;
      UsedPtesHandle = MiGetUsedPtesHandle(a1, v25);
      MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL, v28, v29);
      if ( v55 )
      {
        if ( !v24
          || (v30 = MI_READ_PTE_LOCK_FREE(((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), (v30 & 1) == 0)
          && (v30 & 0x3E0) == 0 )
        {
          v53 = 1;
LABEL_55:
          v43 = v66;
          goto LABEL_56;
        }
      }
      v54 = MiSwizzleInvalidPte(-4294966240LL);
      v26 = v54;
      v31 = 0;
      v32 = v54;
      if ( (unsigned int)MiPteInShadowRange(v5, v33) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v31 = 1;
          if ( !HIBYTE(word_140C4E008) && (v26 & 1) != 0 )
            v32 |= 0x8000000000000000uLL;
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v26 & 1) != 0 )
          {
            v32 |= 0x8000000000000000uLL;
          }
          v26 = v54;
        }
      }
      *(_QWORD *)v5 = v32;
      if ( v31 )
        MiWritePteShadow(v5, v32, v34);
      v3 = a2;
      v24 = ProtoPteAddress;
    }
    if ( (v26 & 1) != 0 )
    {
      v35 = MI_READ_PTE_LOCK_FREE(&v54);
      if ( !(unsigned int)MI_PFN_IS_PROTO(48 * ((v35 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL)
        || (*(_QWORD *)(v36 + 8) | 0x8000000000000000uLL) != v24 )
      {
        goto LABEL_75;
      }
      if ( v57 < 0 )
      {
LABEL_61:
        if ( v10 )
          MiUnlockPageTableInternal(v4, v10);
        v43 = v66;
LABEL_64:
        MiUnlockWorkingSetShared(v4, v65);
        return (unsigned int)v43;
      }
      v37 = MiCopyOnWrite(a1, (ULONG_PTR *)v5, -1LL, 0);
      if ( v37 >= 0 )
        goto LABEL_55;
      if ( v10 )
      {
        MiUnlockPageTableInternal(v4, v10);
        v10 = 0LL;
      }
      v14 = v65;
      MiUnlockWorkingSetShared(v4, v65);
      MiCopyOnWriteCheckConditions(v4, (unsigned int)v37);
      MiLockWorkingSetShared(v4, v38, v39, v40);
      v9 = v57;
    }
    else
    {
      if ( (v26 & 0x400) == 0 )
        goto LABEL_75;
      if ( !MiIsPrototypePteVadLookup(v26) )
      {
        v41 = v26;
        if ( qword_140C4DF40 && (v26 & 0x10) == 0 )
          v41 = v26 & ~qword_140C4DF40;
        if ( v41 >> 16 != v24 )
        {
LABEL_75:
          v44 = 0;
          v43 = v66;
          goto LABEL_76;
        }
      }
      v14 = v65;
      if ( (int)MiMakeProtoLeafValid(v5, 24LL, v65) < 0 && v26 == MI_READ_PTE_LOCK_FREE(v5) )
      {
        v43 = v66;
        if ( v66 < 0 )
        {
          if ( v10 )
            MiUnlockPageTableInternal(v4, v10);
          goto LABEL_64;
        }
        v53 = 1;
LABEL_56:
        v44 = 1;
        v45 = ((((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31) | *(_DWORD *)(a2 + 52) & 0x7FFFFFFF) + 1) >> 31;
        *(_DWORD *)(a2 + 52) ^= (*(_DWORD *)(a2 + 52) ^ (((*(unsigned __int8 *)(a2 + 34) << 31) | *(_DWORD *)(a2 + 52) & 0x7FFFFFFF)
                                                       + 1)) & 0x7FFFFFFF;
        *(_BYTE *)(a2 + 34) = v45;
        if ( v53 == 1 )
        {
          v54 = MiSwizzleInvalidPte(32LL);
          v46 = v54;
          v47 = 0;
          v48 = v54;
          if ( (unsigned int)MiPteInShadowRange(v5, v49) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v47 = 1;
              if ( !HIBYTE(word_140C4E008) )
              {
                v51 = (v46 & 1) == 0;
                goto LABEL_71;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v51 = (v46 & 1) == 0;
LABEL_71:
              if ( !v51 )
                v48 |= 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v5 = v48;
          v44 = 1;
          if ( v47 )
            MiWritePteShadow(v5, v48, v50);
        }
LABEL_76:
        if ( v10 )
          MiUnlockPageTableInternal(v4, v10);
        MiUnlockWorkingSetShared(v4, v65);
        v52 = Process;
        if ( v56 == 1 )
        {
          if ( (_InterlockedExchangeAdd64(
                  (volatile signed __int64 *)&Process[1].Affinity.Bitmap[8],
                  0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(&v52[1].Affinity.Bitmap[8]);
          KeAbPostRelease((ULONG_PTR)&v52[1].Affinity.Bitmap[8]);
          KiLeaveGuardedRegionUnsafe(CurrentThread);
        }
        if ( !v44 && v43 >= 0 )
          MiReturnFullProcessCommitment(v52);
        return 0LL;
      }
      v9 = v57;
      if ( v10 )
      {
        MiUnlockPageTableInternal(v4, v10);
        v10 = 0LL;
      }
    }
  }
  NextPageTable = MiGetNextPageTable(v5, v5, 0, v15, 0, (__int64)&v58);
  if ( NextPageTable )
    v10 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v5 == NextPageTable )
    goto LABEL_12;
  if ( v10 )
    MiUnlockPageTableInternal(v4, v10);
  MiUnlockWorkingSetShared(v4, v14);
  if ( v9 < 0 )
    return (unsigned int)v66;
  v56 = 1;
  --CurrentThread->SpecialApcDisable;
  v18 = Process;
  v19 = (volatile signed __int64 *)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
  v21 = MiCommitPageTablesForVad(v3, a1, a1);
  if ( v21 >= 0 )
  {
    v10 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v65 = MiLockWorkingSetShared(v4, v20, v22, v23);
    v16 = v5;
    goto LABEL_11;
  }
  if ( (_InterlockedExchangeAdd64(v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v19);
  KeAbPostRelease((ULONG_PTR)v19);
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  if ( v66 >= 0 )
    MiReturnFullProcessCommitment(v18);
  return (unsigned int)v21;
}
