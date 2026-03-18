/*
 * XREFs of ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C00551B0
 * Callers:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0006180 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ??1FxRequestBase@@MEAA@XZ @ 0x1C00070E0 (--1FxRequestBase@@MEAA@XZ.c)
 *     ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x1C0008230 (-SelfDestruct@FxRequestFromLookaside@@MEAAXXZ.c)
 *     ??1FxCallbackSpinLock@@UEAA@XZ @ 0x1C00347AC (--1FxCallbackSpinLock@@UEAA@XZ.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C00553E4 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ??1FxCallbackMutexLock@@UEAA@XZ @ 0x1C00673F4 (--1FxCallbackMutexLock@@UEAA@XZ.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z @ 0x1C006749C (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxVerifierLock@@QEAA@XZ @ 0x1C0055104 (--1FxVerifierLock@@QEAA@XZ.c)
 */

FxVerifierLock *__fastcall FxVerifierLock::`scalar deleting destructor'(FxVerifierLock *this)
{
  FxVerifierLock::~FxVerifierLock(this);
  if ( this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
