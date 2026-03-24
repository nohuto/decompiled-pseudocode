/*
 * XREFs of MiRemoveLockedPageChargeAndDecRef @ 0x140328BC0
 * Callers:
 *     MiProbeLockFrame @ 0x14020ACD0 (MiProbeLockFrame.c)
 *     MiResolveDemandZeroFault @ 0x14020FB50 (MiResolveDemandZeroFault.c)
 *     MiResolveProtoPteFault @ 0x1402153D0 (MiResolveProtoPteFault.c)
 *     MiMigratePfn @ 0x1402185F0 (MiMigratePfn.c)
 *     MiFinishHardFault @ 0x140239890 (MiFinishHardFault.c)
 *     MiInitializeImageProtos @ 0x14026DF7C (MiInitializeImageProtos.c)
 *     MiHandleCollidedFault @ 0x14028BEFC (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14028C1F0 (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x14028CA28 (MiPrivateFixup.c)
 *     MiLockProtoPage @ 0x1402C4364 (MiLockProtoPage.c)
 *     MiSwapStackPage @ 0x1402C605C (MiSwapStackPage.c)
 *     MiUnlockNestedProtoPoolPage @ 0x1402C817C (MiUnlockNestedProtoPoolPage.c)
 *     MiReturnPfnReferenceCount @ 0x1402CF02C (MiReturnPfnReferenceCount.c)
 *     MiDeletePerSessionProtos @ 0x1402CF174 (MiDeletePerSessionProtos.c)
 *     MiMakeDriverPagesPrivate @ 0x1402E6EF4 (MiMakeDriverPagesPrivate.c)
 *     MiFinalizeImageHeaderPage @ 0x1402E7BEC (MiFinalizeImageHeaderPage.c)
 *     MiCopyDataPageToImagePage @ 0x1403043E8 (MiCopyDataPageToImagePage.c)
 *     MiFinishMdlForMappedFileFault @ 0x14031A46C (MiFinishMdlForMappedFileFault.c)
 *     MmCopyToCachedPage @ 0x140331500 (MmCopyToCachedPage.c)
 *     MiDoubleUnlockMdlPage @ 0x14037FB48 (MiDoubleUnlockMdlPage.c)
 *     MiMirrorPerformBrownWrites @ 0x1403822B8 (MiMirrorPerformBrownWrites.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14039758C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiUnlockCodePage @ 0x1403A1050 (MiUnlockCodePage.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403C969C (MmDbgMarkPfnModifiedWorker.c)
 *     MiJumpStackTarget @ 0x140536050 (MiJumpStackTarget.c)
 *     MiUnlockPagedAddress @ 0x1405369F0 (MiUnlockPagedAddress.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053FD78 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiIdealClusterPage @ 0x140555E14 (MiIdealClusterPage.c)
 *     MiFinishLastForkPageTable @ 0x14055A6A0 (MiFinishLastForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x14055B2F8 (MiLockDownWorkingSet.c)
 * Callees:
 *     MiIsPfnFileOnly @ 0x140218D60 (MiIsPfnFileOnly.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     MiPfnReferenceCountIsZero @ 0x140325DF0 (MiPfnReferenceCountIsZero.c)
 *     MiIsPfnCommitNotCharged @ 0x1403272D0 (MiIsPfnCommitNotCharged.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403F48DC (MiBadRefCount.c)
 */

__int64 __fastcall MiRemoveLockedPageChargeAndDecRef(__int64 a1)
{
  __int16 v1; // dx
  bool v3; // zf
  __int16 v4; // dx
  __int64 v5; // r11
  __int64 v6; // rdi
  __int64 v7; // rax
  int v8; // esi
  unsigned __int64 v9; // rcx
  char v10; // al
  __int64 v11; // rcx
  unsigned __int64 v12; // r11
  int v13; // r10d
  __int64 v14; // r11
  __int64 v15; // rdi
  unsigned __int64 v16; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v19; // eax

  v1 = *(_WORD *)(a1 + 32);
  if ( !v1 )
    MiBadRefCount(a1);
  v3 = v1 == 1;
  v4 = v1 - 1;
  *(_WORD *)(a1 + 32) = v4;
  if ( v3 && MiIsPfnFileOnly(a1) )
    goto LABEL_41;
  v5 = *(_QWORD *)(a1 + 40);
  if ( (v5 & 0x1000000000LL) == 0 && (v5 & 0x2000000000000LL) == 0 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    v7 = v6 & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v4 )
    {
      v8 = 1;
LABEL_15:
      v9 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
      if ( v9 > 0xFFFFF6BFFFFFFF78uLL || v9 < 0xFFFFF68000000000uLL )
      {
        v10 = *(_BYTE *)(a1 + 35);
        if ( (v10 & 0x20) != 0 )
        {
          *(_BYTE *)(a1 + 35) = v10 & 0xDF;
          goto LABEL_40;
        }
      }
      if ( (unsigned int)MI_PFN_IS_PROTO(a1) && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
      {
        v13 = 1;
      }
      else if ( (unsigned int)MiIsPfnCommitNotCharged(v11) )
      {
        v13 = 1;
      }
      else if ( v8 == 1 && (v6 & 0x4000000000000000LL) != 0 )
      {
        v13 = 1;
      }
      v14 = (v12 >> 39) & 0x3FF;
      v15 = *(_QWORD *)(qword_140C4E648 + 8 * v14);
      if ( v13 == 1 )
        MiReturnCommit(*(_QWORD *)(qword_140C4E648 + 8 * v14), 1LL);
      v16 = 1LL;
      if ( (ULONG_PTR *)v15 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
          {
            while ( 1 )
            {
              v19 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v3 = (_DWORD)CachedResidentAvailable == v19;
              LODWORD(CachedResidentAvailable) = v19;
              if ( v3 )
                break;
              if ( v19 == -1 || (unsigned __int64)(v19 + 1LL) > 0x100 )
                goto LABEL_35;
            }
LABEL_40:
            if ( v8 )
            {
LABEL_41:
              MiPfnReferenceCountIsZero(a1, (a1 + 0x58000000000LL) / 48);
              return 1LL;
            }
            return 0LL;
          }
LABEL_35:
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v16 = (int)CachedResidentAvailable - 192 + 1LL;
          }
          if ( !v16 )
            goto LABEL_40;
        }
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 7168), v16);
      goto LABEL_40;
    }
    if ( v4 == 1 )
    {
      if ( v7 )
      {
LABEL_13:
        v8 = 0;
        goto LABEL_15;
      }
    }
    else if ( v4 != 2 || !v7 )
    {
      return 0LL;
    }
    if ( (*(_BYTE *)(a1 + 34) & 8) == 0 )
      return 0LL;
    goto LABEL_13;
  }
  return 0LL;
}
