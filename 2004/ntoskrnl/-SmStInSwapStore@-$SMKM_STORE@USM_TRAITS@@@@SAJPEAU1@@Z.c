/*
 * XREFs of ?SmStInSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14030FF60
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14030FEBC (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     SmPerformStoreSwapOperation @ 0x140310C2C (SmPerformStoreSwapOperation.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStInSwapStore(__int64 a1)
{
  _QWORD *v1; // rdi
  unsigned int v3; // ebx
  struct _KTHREAD *CurrentThread; // rcx
  signed __int64 *v6; // rsi

  v1 = *(_QWORD **)(a1 + 6568);
  if ( (unsigned __int64)v1 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( v1 == (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6568), -1LL, (signed __int64)v1) )
    {
      if ( *v1 )
        v3 = SmPerformStoreSwapOperation(2LL);
      else
        v3 = -1073741661;
      _InterlockedExchange64((volatile __int64 *)(a1 + 6568), 0LL);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v6 = (signed __int64 *)(a1 + 6024);
      ExAcquirePushLockSharedEx((ULONG_PTR)v6, 0LL);
      if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v6);
      KeAbPostRelease((ULONG_PTR)v6);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      ExFreePoolWithTag(v1, 0);
    }
    else
    {
      return (unsigned int)-1073740682;
    }
  }
  else
  {
    return (unsigned int)-1073741661;
  }
  return v3;
}
