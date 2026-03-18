/*
 * XREFs of ?SmFeReadInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z @ 0x14030988C
 * Callers:
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x1403097D0 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ?SmFeCheckPresent@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x140309974 (-SmFeCheckPresent@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
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
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v20; // [rsp+50h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = *a3;
  v20 = *a3;
  --CurrentThread->SpecialApcDisable;
  v11 = (volatile signed __int64 *)(a1 + 440);
  ExAcquirePushLockSharedEx(a1 + 440, 0LL);
  v12 = a5;
  v13 = SMKM_STORE_MGR<SM_TRAITS>::SmFeCheckPresent(a1, a2, &v20, a5);
  if ( v13 != 1024 )
  {
    v14 = *(_DWORD *)(a1 + 1840);
    if ( ((v14 & 4) != 0 || !*v12) && ((v15 = v20, v20 == v7) || (v14 & 8) != 0) )
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
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v16, v17, v18);
  return v13;
}
