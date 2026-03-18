/*
 * XREFs of ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1403792D8
 * Callers:
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14037556C (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStMapRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z @ 0x1403792A8 (-SmStMapRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x1405F7344 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x1405F774C (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x140262ED4 (SmAcquireReleaseCharges.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x1403794AC (-SmStLockVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z.c)
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x140390724 (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        int a5)
{
  int v7; // r13d
  volatile signed __int16 *v8; // r14
  unsigned __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // rsi
  signed __int16 v12; // di
  int v13; // edx
  signed __int16 v14; // bx
  bool v15; // zf
  signed __int16 v16; // ax
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v19; // rax

  v7 = 0;
  v8 = (volatile signed __int16 *)(*(_QWORD *)(a1 + 6216) + 8LL * a2);
  if ( (a5 & 0x40) == 0
    || (CurrentThread = KeGetCurrentThread(),
        v7 = 1,
        --CurrentThread->SpecialApcDisable,
        ExAcquirePushLockSharedEx(a1 + 6024, 0LL),
        (*(_QWORD *)v8 & 0x7FFFFFFFFFFF0000LL) != 0) )
  {
    v9 = *(unsigned int *)(a1 + 6208);
    v10 = *(_QWORD *)v8 & 0x7FFFFFFFFFFF0000LL;
    if ( (a5 & 8) == 0 )
    {
      if ( (a5 & 0x10) != 0 )
      {
        v11 = SMKM_STORE<SM_TRAITS>::SmStLockVirtualRegion(a1, a2, (_DWORD)v8, *(_DWORD *)v8 & 0xFFFF0000, a5);
        goto LABEL_12;
      }
      if ( (a5 & 4) != 0 )
      {
        _InterlockedOr16(v8, 0x8000u);
      }
      else
      {
        v11 = 2LL;
        if ( (a5 & 2) == 0 )
        {
          v12 = *v8;
          while ( (v12 & 0x1FFF) != 0x1FFF )
          {
            v13 = 0;
            v14 = v12 ^ (v12 ^ (v12 + 1)) & 0x1FFF;
            if ( (v12 & 0x1FFF) == 0 && *(__int64 *)v8 >= 0 )
            {
              v13 = SmAcquireReleaseCharges(v9, 1, 0);
              if ( !v13 )
              {
                if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 6488) )
                  goto LABEL_12;
                v14 = v14 & 0xC000 | 0x2000;
              }
            }
            v16 = _InterlockedCompareExchange16(v8, v14, v12);
            v15 = v12 == v16;
            v12 = v16;
            if ( v15 )
              goto LABEL_11;
            if ( v13 )
              SmAcquireReleaseCharges(v9, 1, 1);
          }
          v11 = 1LL;
LABEL_12:
          if ( !v7 )
            return v11;
          goto LABEL_17;
        }
      }
LABEL_11:
      v11 = v10 + a3;
      goto LABEL_12;
    }
    v11 = 0LL;
    if ( (*v8 & 0x4000) != 0 )
    {
      *v8 &= ~0x4000u;
    }
    else if ( !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, v8, 0LL, 1LL) )
    {
      v11 = 3LL;
    }
    goto LABEL_12;
  }
  v11 = 0LL;
LABEL_17:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6024), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
  KeAbPostRelease(a1 + 6024);
  v19 = KeGetCurrentThread();
  v15 = v19->SpecialApcDisable++ == -1;
  if ( v15 && ($CEA84C04E3712D858E5667A507841A2A *)v19->ApcState.ApcListHead[0].Flink != &v19->152 )
    KiCheckForKernelApcDelivery();
  return v11;
}
