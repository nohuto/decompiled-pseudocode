/*
 * XREFs of MiRemoveLockedPageChargeAndDecRef @ 0x14022C820
 * Callers:
 *     MmCopyToCachedPage @ 0x140223C10 (MmCopyToCachedPage.c)
 *     MiFinishHardFault @ 0x14022AA00 (MiFinishHardFault.c)
 *     MiProbeLockFrame @ 0x14024DD50 (MiProbeLockFrame.c)
 *     MiFinishMdlForMappedFileFault @ 0x14025F04C (MiFinishMdlForMappedFileFault.c)
 *     MiCopyDataPageToImagePage @ 0x14026085C (MiCopyDataPageToImagePage.c)
 *     MiResolveDemandZeroFault @ 0x1402A1B30 (MiResolveDemandZeroFault.c)
 *     MiResolveProtoPteFault @ 0x1402A7870 (MiResolveProtoPteFault.c)
 *     MiMigratePfn @ 0x1402AAA90 (MiMigratePfn.c)
 *     MiMakeDriverPagesPrivate @ 0x1402E0360 (MiMakeDriverPagesPrivate.c)
 *     MiFinalizeImageHeaderPage @ 0x1402E0BD8 (MiFinalizeImageHeaderPage.c)
 *     MiHandleCollidedFault @ 0x140312448 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14031273C (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x140314F08 (MiPrivateFixup.c)
 *     MiInitializeImageProtos @ 0x14031C75C (MiInitializeImageProtos.c)
 *     MiLockProtoPage @ 0x140352790 (MiLockProtoPage.c)
 *     MiSwapStackPage @ 0x140354AAC (MiSwapStackPage.c)
 *     MiUnlockNestedProtoPoolPage @ 0x140356754 (MiUnlockNestedProtoPoolPage.c)
 *     MiReturnPfnReferenceCount @ 0x14035CB94 (MiReturnPfnReferenceCount.c)
 *     MiDeletePerSessionProtos @ 0x14035CCDC (MiDeletePerSessionProtos.c)
 *     MiDoubleUnlockMdlPage @ 0x14037D5D8 (MiDoubleUnlockMdlPage.c)
 *     MiMirrorPerformBrownWrites @ 0x14037FD90 (MiMirrorPerformBrownWrites.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140394C54 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiUnlockCodePage @ 0x14039E2C0 (MiUnlockCodePage.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403C606C (MmDbgMarkPfnModifiedWorker.c)
 *     MiJumpStackTarget @ 0x140530B80 (MiJumpStackTarget.c)
 *     MiUnlockPagedAddress @ 0x140531520 (MiUnlockPagedAddress.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053A8A8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiIdealClusterPage @ 0x140550974 (MiIdealClusterPage.c)
 *     MiFinishLastForkPageTable @ 0x140555200 (MiFinishLastForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x140555E58 (MiLockDownWorkingSet.c)
 * Callees:
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiIsPfnCommitNotCharged @ 0x14022CF60 (MiIsPfnCommitNotCharged.c)
 *     MiPfnReferenceCountIsZero @ 0x140234560 (MiPfnReferenceCountIsZero.c)
 *     MiIsPfnFileOnly @ 0x1402AB200 (MiIsPfnFileOnly.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403EEC2C (MiBadRefCount.c)
 */

__int64 __fastcall MiRemoveLockedPageChargeAndDecRef(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  bool v6; // zf
  __int64 v7; // r11
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // esi
  unsigned __int64 v11; // rcx
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // r11
  int v17; // r10d
  __int64 v18; // r11
  __int64 v19; // rdi
  unsigned __int64 v20; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v23; // eax

  v4 = *(unsigned __int16 *)(a1 + 32);
  if ( !(_WORD)v4 )
    MiBadRefCount();
  v6 = (_WORD)v4 == 1;
  LOWORD(v4) = v4 - 1;
  *(_WORD *)(a1 + 32) = v4;
  if ( v6 && (unsigned int)MiIsPfnFileOnly(a1, v4, a3, a4) )
    goto LABEL_41;
  v7 = *(_QWORD *)(a1 + 40);
  if ( (v7 & 0x1000000000LL) == 0 && (v7 & 0x2000000000000LL) == 0 )
  {
    v8 = *(_QWORD *)(a1 + 24);
    v9 = v8 & 0x3FFFFFFFFFFFFFFFLL;
    if ( !(_WORD)v4 )
    {
      v10 = 1;
LABEL_15:
      v11 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
      if ( v11 > 0xFFFFF6BFFFFFFF78uLL || v11 < 0xFFFFF68000000000uLL )
      {
        v12 = *(_BYTE *)(a1 + 35);
        if ( (v12 & 0x20) != 0 )
        {
          *(_BYTE *)(a1 + 35) = v12 & 0xDF;
          goto LABEL_40;
        }
      }
      if ( (unsigned int)MI_PFN_IS_PROTO(a1) && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
      {
        v17 = 1;
      }
      else if ( (unsigned int)MiIsPfnCommitNotCharged(v14, v13, v15) )
      {
        v17 = 1;
      }
      else if ( v10 == 1 && (v8 & 0x4000000000000000LL) != 0 )
      {
        v17 = 1;
      }
      v18 = (v16 >> 39) & 0x3FF;
      v19 = *(_QWORD *)(qword_140C4E448 + 8 * v18);
      if ( v17 == 1 )
        MiReturnCommit(*(_QWORD *)(qword_140C4E448 + 8 * v18), 1LL);
      v20 = 1LL;
      if ( (ULONG_PTR *)v19 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
          {
            while ( 1 )
            {
              v23 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v6 = (_DWORD)CachedResidentAvailable == v23;
              LODWORD(CachedResidentAvailable) = v23;
              if ( v6 )
                break;
              if ( v23 == -1 || (unsigned __int64)(v23 + 1LL) > 0x100 )
                goto LABEL_35;
            }
LABEL_40:
            if ( v10 )
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
            v20 = (int)CachedResidentAvailable - 192 + 1LL;
          }
          if ( !v20 )
            goto LABEL_40;
        }
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 7168), v20);
      goto LABEL_40;
    }
    if ( (_WORD)v4 == 1 )
    {
      if ( v9 )
      {
LABEL_13:
        v10 = 0;
        goto LABEL_15;
      }
    }
    else if ( (_WORD)v4 != 2 || !v9 )
    {
      return 0LL;
    }
    if ( (*(_BYTE *)(a1 + 34) & 8) == 0 )
      return 0LL;
    goto LABEL_13;
  }
  return 0LL;
}
