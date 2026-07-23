/*
 * XREFs of MiSplitPrivatePage @ 0x140317D00
 * Callers:
 *     MiCopyToCfgBitMap @ 0x140700C60 (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiIsPrototypePteVadLookup @ 0x14020A670 (MiIsPrototypePteVadLookup.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiMakeProtoLeafValid @ 0x14023B164 (MiMakeProtoLeafValid.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x1402C0290 (MiVadPureReserve.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiIncreaseUsedPtesCount @ 0x140314524 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x1403177B0 (MiGetUsedPtesHandle.c)
 *     MiGetNextPageTable @ 0x140318570 (MiGetNextPageTable.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x14033B890 (MiGetProtoPteAddress.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055C138 (MiCopyOnWriteCheckConditions.c)
 *     MiChargeFullProcessCommitment @ 0x1406E8830 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1406E8900 (MiCommitPageTablesForVad.c)
 *     MiReturnFullProcessCommitment @ 0x140705C18 (MiReturnFullProcessCommitment.c)
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
  unsigned __int64 v25; // rbx
  __int64 UsedPtesHandle; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int16 v29; // ax
  int v30; // r13d
  __int64 v31; // rdi
  unsigned __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // ebx
  __int64 v35; // rdx
  __int64 v36; // r8
  _DWORD *v37; // r9
  __int64 v38; // rax
  int v40; // r13d
  int v41; // edi
  unsigned __int64 v42; // rdx
  char v43; // di
  int v44; // ebp
  __int64 v45; // rbx
  bool v46; // zf
  _KPROCESS *v47; // rbp
  int v48; // [rsp+30h] [rbp-98h]
  __int64 v49; // [rsp+38h] [rbp-90h] BYREF
  int v50; // [rsp+40h] [rbp-88h]
  int v51; // [rsp+44h] [rbp-84h]
  __int64 v52; // [rsp+48h] [rbp-80h]
  int v53; // [rsp+50h] [rbp-78h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-70h]
  _KPROCESS *Process; // [rsp+60h] [rbp-68h]
  __int64 ProtoPteAddress; // [rsp+68h] [rbp-60h]
  __int64 v57[11]; // [rsp+70h] [rbp-58h] BYREF
  char v60; // [rsp+E0h] [rbp+18h]
  int v61; // [rsp+E8h] [rbp+20h]

  v53 = 0;
  v3 = a2;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v4 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v50 = MiVadPureReserve(a2);
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v57[0] = *(_QWORD *)(v6 + 72);
  v8 = MiChargeFullProcessCommitment(v7, 1LL);
  v9 = v8;
  v10 = 0LL;
  v61 = v8;
  v48 = 0;
  v51 = 0;
  v14 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v11, v12, v13);
  v60 = v14;
  v52 = v9;
  while ( 1 )
  {
    LOBYTE(v15) = v14;
    v16 = v5;
    if ( v50 )
      break;
LABEL_11:
    MiMakeSystemAddressValid(v16, 0);
LABEL_12:
    ProtoPteAddress = MiGetProtoPteAddress(v3, a1 >> 12, 0LL, v57);
    v24 = ProtoPteAddress;
    v49 = MI_READ_PTE_LOCK_FREE(v5);
    v25 = v49;
    if ( !v49 )
    {
      if ( v52 < 0 )
        goto LABEL_61;
      UsedPtesHandle = MiGetUsedPtesHandle(a1);
      MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL, v27, v28);
      if ( v50 )
      {
        if ( !v24
          || (v29 = MI_READ_PTE_LOCK_FREE(((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), (v29 & 1) == 0)
          && (v29 & 0x3E0) == 0 )
        {
          v48 = 1;
LABEL_55:
          v40 = v61;
          goto LABEL_56;
        }
      }
      v49 = MiSwizzleInvalidPte(-4294966240LL);
      v25 = v49;
      v30 = 0;
      v31 = v49;
      if ( (unsigned int)MiPteInShadowRange(v5) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v30 = 1;
          if ( !HIBYTE(word_140C4E048) && (v25 & 1) != 0 )
            v31 |= 0x8000000000000000uLL;
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v25 & 1) != 0 )
          {
            v31 |= 0x8000000000000000uLL;
          }
          v25 = v49;
        }
      }
      *(_QWORD *)v5 = v31;
      if ( v30 )
        MiWritePteShadow(v5, v31);
      v3 = a2;
      v24 = ProtoPteAddress;
    }
    if ( (v25 & 1) != 0 )
    {
      v32 = MI_READ_PTE_LOCK_FREE(&v49);
      if ( !(unsigned int)MI_PFN_IS_PROTO(48 * ((v32 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL)
        || (*(_QWORD *)(v33 + 8) | 0x8000000000000000uLL) != v24 )
      {
        goto LABEL_75;
      }
      if ( v52 < 0 )
      {
LABEL_61:
        if ( v10 )
          MiUnlockPageTableInternal(v4, v10);
        v40 = v61;
LABEL_64:
        MiUnlockWorkingSetShared(v4, v60);
        return (unsigned int)v40;
      }
      v34 = MiCopyOnWrite(a1, (ULONG_PTR *)v5, -1LL, 0);
      if ( v34 >= 0 )
        goto LABEL_55;
      if ( v10 )
      {
        MiUnlockPageTableInternal(v4, v10);
        v10 = 0LL;
      }
      v14 = v60;
      MiUnlockWorkingSetShared(v4, v60);
      MiCopyOnWriteCheckConditions(v4, (unsigned int)v34);
      MiLockWorkingSetShared(v4, v35, v36, v37);
      v9 = v52;
    }
    else
    {
      if ( (v25 & 0x400) == 0 )
        goto LABEL_75;
      if ( !MiIsPrototypePteVadLookup(v25) )
      {
        v38 = v25;
        if ( qword_140C4DF80 && (v25 & 0x10) == 0 )
          v38 = v25 & ~qword_140C4DF80;
        if ( v38 >> 16 != v24 )
        {
LABEL_75:
          v41 = 0;
          v40 = v61;
          goto LABEL_76;
        }
      }
      v14 = v60;
      if ( (int)MiMakeProtoLeafValid(v5, 24LL, v60) < 0 && v25 == MI_READ_PTE_LOCK_FREE(v5) )
      {
        v40 = v61;
        if ( v61 < 0 )
        {
          if ( v10 )
            MiUnlockPageTableInternal(v4, v10);
          goto LABEL_64;
        }
        v48 = 1;
LABEL_56:
        v41 = 1;
        v42 = ((((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31) | *(_DWORD *)(a2 + 52) & 0x7FFFFFFF) + 1) >> 31;
        *(_DWORD *)(a2 + 52) ^= (*(_DWORD *)(a2 + 52) ^ (((*(unsigned __int8 *)(a2 + 34) << 31) | *(_DWORD *)(a2 + 52) & 0x7FFFFFFF)
                                                       + 1)) & 0x7FFFFFFF;
        *(_BYTE *)(a2 + 34) = v42;
        if ( v48 == 1 )
        {
          v49 = MiSwizzleInvalidPte(32LL);
          v43 = v49;
          v44 = 0;
          v45 = v49;
          if ( (unsigned int)MiPteInShadowRange(v5) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v44 = 1;
              if ( !HIBYTE(word_140C4E048) )
              {
                v46 = (v43 & 1) == 0;
                goto LABEL_71;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v46 = (v43 & 1) == 0;
LABEL_71:
              if ( !v46 )
                v45 |= 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v5 = v45;
          v41 = 1;
          if ( v44 )
            MiWritePteShadow(v5, v45);
        }
LABEL_76:
        if ( v10 )
          MiUnlockPageTableInternal(v4, v10);
        MiUnlockWorkingSetShared(v4, v60);
        v47 = Process;
        if ( v51 == 1 )
        {
          if ( (_InterlockedExchangeAdd64(
                  (volatile signed __int64 *)&Process[1].Affinity.Bitmap[8],
                  0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(&v47[1].Affinity.Bitmap[8]);
          KeAbPostRelease((ULONG_PTR)&v47[1].Affinity.Bitmap[8]);
          KiLeaveGuardedRegionUnsafe(CurrentThread);
        }
        if ( !v41 && v40 >= 0 )
          MiReturnFullProcessCommitment(v47);
        return 0LL;
      }
      v9 = v52;
      if ( v10 )
      {
        MiUnlockPageTableInternal(v4, v10);
        v10 = 0LL;
      }
    }
  }
  NextPageTable = MiGetNextPageTable(v5, v5, 0, v15, 0, (__int64)&v53);
  if ( NextPageTable )
    v10 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v5 == NextPageTable )
    goto LABEL_12;
  if ( v10 )
    MiUnlockPageTableInternal(v4, v10);
  MiUnlockWorkingSetShared(v4, v14);
  if ( v9 < 0 )
    return (unsigned int)v61;
  v51 = 1;
  --CurrentThread->SpecialApcDisable;
  v18 = Process;
  v19 = (volatile signed __int64 *)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
  v21 = MiCommitPageTablesForVad(v3, a1, a1);
  if ( v21 >= 0 )
  {
    v10 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v60 = MiLockWorkingSetShared(v4, v20, v22, v23);
    v16 = v5;
    goto LABEL_11;
  }
  if ( (_InterlockedExchangeAdd64(v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v19);
  KeAbPostRelease((ULONG_PTR)v19);
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  if ( v61 >= 0 )
    MiReturnFullProcessCommitment(v18);
  return (unsigned int)v21;
}
