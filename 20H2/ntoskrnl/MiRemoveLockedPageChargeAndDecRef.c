/*
 * XREFs of MiRemoveLockedPageChargeAndDecRef @ 0x1402AC310
 * Callers:
 *     MiHandleCollidedFault @ 0x140201AA8 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140201D9C (MiWaitForCollidedFaultComplete.c)
 *     MiFinishMdlForMappedFileFault @ 0x1402326FC (MiFinishMdlForMappedFileFault.c)
 *     MiPrivateFixup @ 0x140239840 (MiPrivateFixup.c)
 *     MiMakeDriverPagesPrivate @ 0x14025290C (MiMakeDriverPagesPrivate.c)
 *     MiProbeLockFrame @ 0x14026BFF0 (MiProbeLockFrame.c)
 *     MiResolveDemandZeroFault @ 0x140270E70 (MiResolveDemandZeroFault.c)
 *     MiResolveProtoPteFault @ 0x140276BB0 (MiResolveProtoPteFault.c)
 *     MiMigratePfn @ 0x140279DD0 (MiMigratePfn.c)
 *     MmCopyToCachedPage @ 0x1402B4910 (MmCopyToCachedPage.c)
 *     MiFinishHardFault @ 0x1402C80B0 (MiFinishHardFault.c)
 *     MiLockProtoPage @ 0x140323190 (MiLockProtoPage.c)
 *     MiSwapStackPage @ 0x14032576C (MiSwapStackPage.c)
 *     MiUnlockNestedProtoPoolPage @ 0x140326FA4 (MiUnlockNestedProtoPoolPage.c)
 *     MiReturnPfnReferenceCount @ 0x14032D51C (MiReturnPfnReferenceCount.c)
 *     MiDeletePerSessionProtos @ 0x14032D664 (MiDeletePerSessionProtos.c)
 *     MiFinalizeImageHeaderPage @ 0x140332CF0 (MiFinalizeImageHeaderPage.c)
 *     MiCopyDataPageToImagePage @ 0x14034EC44 (MiCopyDataPageToImagePage.c)
 *     MiInitializeImageProtos @ 0x140350EE8 (MiInitializeImageProtos.c)
 *     MiDoubleUnlockMdlPage @ 0x14037F308 (MiDoubleUnlockMdlPage.c)
 *     MiMirrorPerformBrownWrites @ 0x140381C74 (MiMirrorPerformBrownWrites.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140397114 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiUnlockCodePage @ 0x1403A0790 (MiUnlockCodePage.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403C8AFC (MmDbgMarkPfnModifiedWorker.c)
 *     MiJumpStackTarget @ 0x140534550 (MiJumpStackTarget.c)
 *     MiUnlockPagedAddress @ 0x140534EF0 (MiUnlockPagedAddress.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053E278 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiIdealClusterPage @ 0x140554344 (MiIdealClusterPage.c)
 *     MiFinishLastForkPageTable @ 0x140558BD0 (MiFinishLastForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x140559828 (MiLockDownWorkingSet.c)
 * Callees:
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiIsPfnFileOnly @ 0x14027A540 (MiIsPfnFileOnly.c)
 *     MiPfnReferenceCountIsZero @ 0x1402A9540 (MiPfnReferenceCountIsZero.c)
 *     MiIsPfnCommitNotCharged @ 0x1402AAA20 (MiIsPfnCommitNotCharged.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403F3094 (MiBadRefCount.c)
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
      v15 = *(_QWORD *)(qword_140C4E4C8 + 8 * v14);
      if ( v13 == 1 )
        MiReturnCommit(*(_QWORD *)(qword_140C4E4C8 + 8 * v14), 1LL);
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
