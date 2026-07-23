/*
 * XREFs of ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14028F918
 * Callers:
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140245270 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14028F618 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x140290D48 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140292714 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1402A0194 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140599834 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x140599FF4 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 * Callees:
 *     SmKmUnlockMdl @ 0x14024E76C (SmKmUnlockMdl.c)
 *     SmFpFree @ 0x14028BBA4 (SmFpFree.c)
 *     SmAcquireReleaseCharges @ 0x14028FD10 (SmAcquireReleaseCharges.c)
 *     ?SmStFindVirtualLockedRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@KPEAX@Z @ 0x140291610 (-SmStFindVirtualLockedRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@K.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6)
{
  __int64 v6; // rdi
  volatile signed __int64 *v7; // rsi
  __int64 v8; // r13
  __int64 v9; // rbx
  int v11; // r15d
  __int64 v12; // r12
  struct _KTHREAD *CurrentThread; // rax
  PMDL *VirtualLockedRegion; // rdi
  unsigned __int16 v15; // ax

  v6 = *(_QWORD *)(a1 + 6216);
  v7 = (volatile signed __int64 *)(a1 + 6024);
  v8 = *(unsigned int *)(a1 + 6208);
  v9 = a2;
  v11 = 0;
  v12 = *(_QWORD *)(v6 + 8LL * a2) & 0x7FFFFFFFFFFF0000LL;
  if ( (a6 & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v11 = 1;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
  }
  if ( (a6 & 4) != 0 )
  {
    if ( *(__int64 *)(v6 + 8 * v9) >= 0 )
    {
      VirtualLockedRegion = (PMDL *)SMKM_STORE<SM_TRAITS>::SmStFindVirtualLockedRegion(a1, (a6 >> 4) & 7, v12);
      SmKmUnlockMdl(*VirtualLockedRegion, *(_QWORD *)(a1 + 6480), a1 + 6360);
      SmFpFree(*(_QWORD *)(a1 + 6480), 2, a1 + 6360, *VirtualLockedRegion);
      *VirtualLockedRegion = 0LL;
    }
    goto LABEL_16;
  }
  if ( (a6 & 2) != 0 )
  {
    v15 = 0x7FFF;
LABEL_8:
    _InterlockedAnd16((volatile signed __int16 *)(v6 + 8 * v9), v15);
    goto LABEL_16;
  }
  if ( (a6 & 1) != 0 )
    goto LABEL_16;
  if ( (*(_WORD *)(v6 + 8 * v9) & 0x2000) != 0 && KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 6488) )
  {
    v15 = -8193;
    goto LABEL_8;
  }
  if ( (_InterlockedDecrement16((volatile signed __int16 *)(v6 + 8 * v9)) & 0x1FFF) == 0
    && *(__int64 *)(v6 + 8 * v9) >= 0 )
  {
    SmAcquireReleaseCharges(v8, 1LL, 1LL);
  }
LABEL_16:
  if ( v11 )
  {
    if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v7);
    KeAbPostRelease((ULONG_PTR)v7);
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  }
}
