/*
 * XREFs of ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14025E9D0
 * Callers:
 *     ?SmSwapStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14025E94C (-SmSwapStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14037556C (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     SmPerformStoreSwapOperation @ 0x14037592C (SmPerformStoreSwapOperation.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14037717C (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStSwapStore(__int64 a1, int a2)
{
  ULONG_PTR v4; // rcx
  int v5; // ebx
  _QWORD *v6; // rsi
  unsigned int v7; // ebx
  unsigned int v9; // eax
  struct _KTHREAD *CurrentThread; // rcx
  volatile signed __int64 *v11; // rdi
  struct _KTHREAD *v12; // rax
  bool v13; // zf
  _OWORD v14[3]; // [rsp+28h] [rbp-50h] BYREF

  v4 = *(_QWORD *)(a1 + 6584);
  memset(v14, 0, sizeof(v14));
  KiStackAttachProcess(v4);
  if ( !a2 )
  {
    v9 = SMKM_STORE<SM_TRAITS>::SmStOutSwapPrepareStore(a1);
    goto LABEL_8;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    v9 = SMKM_STORE<SM_TRAITS>::SmStOutSwapStore(a1);
LABEL_8:
    v7 = v9;
    goto LABEL_6;
  }
  if ( v5 == 1 )
  {
    v6 = *(_QWORD **)(a1 + 6568);
    if ( (unsigned __int64)v6 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      if ( v6 == (_QWORD *)_InterlockedCompareExchange64(
                             (volatile signed __int64 *)(a1 + 6568),
                             -1LL,
                             (signed __int64)v6) )
      {
        if ( *v6 )
          v7 = SmPerformStoreSwapOperation(2LL);
        else
          v7 = -1073741661;
        _InterlockedExchange64((volatile __int64 *)(a1 + 6568), 0LL);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        v11 = (volatile signed __int64 *)(a1 + 6024);
        ExAcquirePushLockSharedEx((ULONG_PTR)v11, 0LL);
        if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v11);
        KeAbPostRelease((ULONG_PTR)v11);
        v12 = KeGetCurrentThread();
        v13 = v12->SpecialApcDisable++ == -1;
        if ( v13 && ($CEA84C04E3712D858E5667A507841A2A *)v12->ApcState.ApcListHead[0].Flink != &v12->152 )
          KiCheckForKernelApcDelivery();
        ExFreePoolWithTag(v6, 0);
      }
      else
      {
        v7 = -1073740682;
      }
    }
    else
    {
      v7 = -1073741661;
    }
  }
  else
  {
    v7 = -1073741811;
  }
LABEL_6:
  KiUnstackDetachProcess(v14, 0LL);
  return v7;
}
