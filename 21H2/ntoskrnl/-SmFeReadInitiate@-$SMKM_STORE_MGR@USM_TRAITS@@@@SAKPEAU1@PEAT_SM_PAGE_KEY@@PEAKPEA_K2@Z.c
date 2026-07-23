/*
 * XREFs of ?SmFeReadInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z @ 0x140291CEC
 * Callers:
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x140291C30 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 * Callees:
 *     ?SmFeCheckPresent@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x140291DD4 (-SmFeCheckPresent@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeReadInitiate(__int64 a1, __int64 a2, int *a3, _QWORD *a4, _DWORD *a5)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // r15d
  volatile signed __int64 *v11; // rdi
  _DWORD *v12; // rbp
  unsigned int v13; // ebx
  int v14; // ecx
  int v15; // eax
  int v17; // [rsp+50h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = *a3;
  v17 = *a3;
  --CurrentThread->SpecialApcDisable;
  v11 = (volatile signed __int64 *)(a1 + 440);
  ExAcquirePushLockSharedEx(a1 + 440, 0LL);
  v12 = a5;
  v13 = SMKM_STORE_MGR<SM_TRAITS>::SmFeCheckPresent(a1, a2, &v17, a5);
  if ( v13 != 1024 )
  {
    v14 = *(_DWORD *)(a1 + 1840);
    if ( ((v14 & 4) != 0 || !*v12) && ((v15 = v17, v17 == v7) || (v14 & 8) != 0) )
    {
      *a4 = 0LL;
      *a3 = v15;
    }
    else
    {
      v13 = 1024;
    }
  }
  if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v11);
  KeAbPostRelease((ULONG_PTR)v11);
  KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  return v13;
}
