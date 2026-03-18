/*
 * XREFs of MiRemoveLockedPageChargeAndDecRef @ 0x140285870
 * Callers:
 *     MiResolveDemandZeroFault @ 0x14020F020 (MiResolveDemandZeroFault.c)
 *     MiResolveProtoPteFault @ 0x140214D60 (MiResolveProtoPteFault.c)
 *     MiMigratePfn @ 0x140217F80 (MiMigratePfn.c)
 *     MmCopyToCachedPage @ 0x14027CC60 (MmCopyToCachedPage.c)
 *     MiFinishHardFault @ 0x140283A50 (MiFinishHardFault.c)
 *     MiProbeLockFrame @ 0x1402A6D80 (MiProbeLockFrame.c)
 *     MiFinishMdlForMappedFileFault @ 0x1402B807C (MiFinishMdlForMappedFileFault.c)
 *     MiCopyDataPageToImagePage @ 0x1402B988C (MiCopyDataPageToImagePage.c)
 *     MiLockProtoPage @ 0x140314A40 (MiLockProtoPage.c)
 *     MiSwapStackPage @ 0x140316FFC (MiSwapStackPage.c)
 *     MiUnlockNestedProtoPoolPage @ 0x140318B64 (MiUnlockNestedProtoPoolPage.c)
 *     MiReturnPfnReferenceCount @ 0x14031F084 (MiReturnPfnReferenceCount.c)
 *     MiDeletePerSessionProtos @ 0x14031F1CC (MiDeletePerSessionProtos.c)
 *     MiMakeDriverPagesPrivate @ 0x140325460 (MiMakeDriverPagesPrivate.c)
 *     MiFinalizeImageHeaderPage @ 0x140325CD8 (MiFinalizeImageHeaderPage.c)
 *     MiHandleCollidedFault @ 0x140341780 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140341A74 (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x140344248 (MiPrivateFixup.c)
 *     MiInitializeImageProtos @ 0x14034BA9C (MiInitializeImageProtos.c)
 *     MiDoubleUnlockMdlPage @ 0x14037CB18 (MiDoubleUnlockMdlPage.c)
 *     MiMirrorPerformBrownWrites @ 0x14038A368 (MiMirrorPerformBrownWrites.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140394084 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiUnlockCodePage @ 0x14039DB30 (MiUnlockCodePage.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403C50FC (MmDbgMarkPfnModifiedWorker.c)
 *     MiJumpStackTarget @ 0x140530530 (MiJumpStackTarget.c)
 *     MiUnlockPagedAddress @ 0x140530ED0 (MiUnlockPagedAddress.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053A258 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiIdealClusterPage @ 0x140550324 (MiIdealClusterPage.c)
 *     MiFinishLastForkPageTable @ 0x140554BB0 (MiFinishLastForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x140555808 (MiLockDownWorkingSet.c)
 * Callees:
 *     MiIsPfnFileOnly @ 0x1402186F0 (MiIsPfnFileOnly.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiIsPfnCommitNotCharged @ 0x140285FB0 (MiIsPfnCommitNotCharged.c)
 *     MiPfnReferenceCountIsZero @ 0x14028D5B0 (MiPfnReferenceCountIsZero.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403ED8CC (MiBadRefCount.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // r11
  int v15; // r10d
  __int64 v16; // r11
  __int64 v17; // rdi
  unsigned __int64 v18; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v21; // eax

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
      if ( (unsigned int)MI_PFN_IS_PROTO(a1, 0x8000000000000000uLL, 0xFFFFF68000000000uLL)
        && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
      {
        v15 = 1;
      }
      else if ( (unsigned int)MiIsPfnCommitNotCharged(v12, v11, v13) )
      {
        v15 = 1;
      }
      else if ( v8 == 1 && (v6 & 0x4000000000000000LL) != 0 )
      {
        v15 = 1;
      }
      v16 = (v14 >> 39) & 0x3FF;
      v17 = *(_QWORD *)(qword_140C4E588 + 8 * v16);
      if ( v15 == 1 )
        MiReturnCommit(*(_QWORD *)(qword_140C4E588 + 8 * v16), 1LL);
      v18 = 1LL;
      if ( (ULONG_PTR *)v17 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
          {
            while ( 1 )
            {
              v21 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v3 = (_DWORD)CachedResidentAvailable == v21;
              LODWORD(CachedResidentAvailable) = v21;
              if ( v3 )
                break;
              if ( v21 == -1 || (unsigned __int64)(v21 + 1LL) > 0x100 )
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
            v18 = (int)CachedResidentAvailable - 192 + 1LL;
          }
          if ( !v18 )
            goto LABEL_40;
        }
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 7168), v18);
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
