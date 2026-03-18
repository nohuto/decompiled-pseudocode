/*
 * XREFs of ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C0030EA0
 * Callers:
 *     ??1FxRequestBase@@MEAA@XZ @ 0x1C00058E4 (--1FxRequestBase@@MEAA@XZ.c)
 *     ??_EFxFileObject@@UEAAPEAXI@Z @ 0x1C0005BF0 (--_EFxFileObject@@UEAAPEAXI@Z.c)
 *     ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x1C0007860 (-SelfDestruct@FxRequestFromLookaside@@MEAAXXZ.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C00142D0 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0031380 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ??1FxCallbackMutexLock@@UEAA@XZ @ 0x1C004CB40 (--1FxCallbackMutexLock@@UEAA@XZ.c)
 *     ??1FxCallbackSpinLock@@UEAA@XZ @ 0x1C004CB7C (--1FxCallbackSpinLock@@UEAA@XZ.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z @ 0x1C004D02C (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C0032328 (WPP_IFR_SF_qqq.c)
 */

FxVerifierLock *__fastcall FxVerifierLock::`scalar deleting destructor'(FxVerifierLock *this)
{
  struct _KTHREAD *m_OwningThread; // rcx

  m_OwningThread = this->m_OwningThread;
  if ( m_OwningThread )
  {
    WPP_IFR_SF_qqq(
      this->m_Globals,
      2u,
      0x12u,
      0xDu,
      WPP_FxVerifierLock_hpp_Traceguids,
      this,
      m_OwningThread,
      this->m_ParentObject);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  this->m_Mutex.m_DbgFlagIsInitialized = 0;
  this->m_Lock.m_DbgFlagIsInitialized = 0;
  FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
