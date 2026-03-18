/*
 * XREFs of ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1402C3A24
 * Callers:
 *     ?SmStMapRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z @ 0x1402C39F4 (-SmStMapRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1402D0C30 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140593A44 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140593E00 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     SmAcquireReleaseCharges @ 0x1402C3C54 (SmAcquireReleaseCharges.c)
 *     ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x1402C8AA4 (-SmStLockVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z.c)
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x1402FE438 (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
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
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rsi
  __int64 v11; // r12
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  signed __int16 v17; // di
  int v18; // edx
  signed __int16 v19; // bx
  bool v20; // zf
  signed __int16 v21; // ax

  v7 = 0;
  v8 = (volatile signed __int16 *)(*(_QWORD *)(a1 + 6216) + 8LL * a2);
  if ( (a5 & 0x40) == 0
    || (CurrentThread = KeGetCurrentThread(),
        v7 = 1,
        --CurrentThread->SpecialApcDisable,
        ExAcquirePushLockSharedEx(a1 + 6024, 0LL),
        (*(_QWORD *)v8 & 0x7FFFFFFFFFFF0000LL) != 0) )
  {
    v11 = *(unsigned int *)(a1 + 6208);
    v12 = *(_QWORD *)v8 & 0x7FFFFFFFFFFF0000LL;
    if ( (a5 & 8) != 0 )
    {
      v10 = 0LL;
      if ( (*v8 & 0x4000) != 0 )
      {
        *v8 &= ~0x4000u;
      }
      else if ( !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, v8, 0LL, 1LL) )
      {
        v10 = 3LL;
      }
LABEL_14:
      if ( !v7 )
        return v10;
      goto LABEL_15;
    }
    if ( (a5 & 0x10) != 0 )
    {
      v10 = SMKM_STORE<SM_TRAITS>::SmStLockVirtualRegion(a1, a2, (_DWORD)v8, *(_DWORD *)v8 & 0xFFFF0000, a5);
      goto LABEL_14;
    }
    if ( (a5 & 4) != 0 )
    {
      _InterlockedOr16(v8, 0x8000u);
    }
    else
    {
      v10 = 2LL;
      if ( (a5 & 2) == 0 )
      {
        v17 = *v8;
        if ( (*v8 & 0x1FFF) == 0x1FFF )
        {
LABEL_30:
          v10 = 1LL;
          goto LABEL_14;
        }
        while ( 1 )
        {
          v18 = 0;
          v19 = v17 ^ (v17 ^ (v17 + 1)) & 0x1FFF;
          if ( (v17 & 0x1FFF) == 0 && *(__int64 *)v8 >= 0 )
          {
            v18 = SmAcquireReleaseCharges(v11, 1LL, 0LL);
            if ( !v18 )
            {
              if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 6488) )
                goto LABEL_14;
              v19 = v19 & 0xC000 | 0x2000;
            }
          }
          v21 = _InterlockedCompareExchange16(v8, v19, v17);
          v20 = v17 == v21;
          v17 = v21;
          if ( v20 )
            break;
          if ( v18 )
            SmAcquireReleaseCharges(v11, 1LL, 1LL);
          if ( (v17 & 0x1FFF) == 0x1FFF )
            goto LABEL_30;
        }
      }
    }
    v10 = v12 + a3;
    goto LABEL_14;
  }
  v10 = 0LL;
LABEL_15:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6024), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a1 + 6024);
  KeAbPostRelease(a1 + 6024);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
  return v10;
}
