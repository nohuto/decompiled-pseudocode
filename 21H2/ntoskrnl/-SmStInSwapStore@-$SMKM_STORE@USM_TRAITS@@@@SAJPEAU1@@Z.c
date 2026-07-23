/*
 * XREFs of ?SmStInSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1402A11BC
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x1402A1118 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 * Callees:
 *     SmPerformStoreSwapOperation @ 0x1402A0608 (SmPerformStoreSwapOperation.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStInSwapStore(__int64 a1)
{
  void **v1; // rdi
  unsigned int v3; // ebx
  struct _KTHREAD *CurrentThread; // rcx
  volatile signed __int64 *v6; // rsi

  v1 = *(void ***)(a1 + 6568);
  if ( (unsigned __int64)v1 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( v1 == (void **)_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6568), -1LL, (signed __int64)v1) )
    {
      if ( *v1 )
        v3 = SmPerformStoreSwapOperation(2, *v1);
      else
        v3 = -1073741661;
      _InterlockedExchange64((volatile __int64 *)(a1 + 6568), 0LL);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v6 = (volatile signed __int64 *)(a1 + 6024);
      ExAcquirePushLockSharedEx((ULONG_PTR)v6, 0LL);
      if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v6);
      KeAbPostRelease((ULONG_PTR)v6);
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
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
