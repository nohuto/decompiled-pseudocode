/*
 * XREFs of imp_WdfObjectAcquireLock @ 0x1C0010CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     FxGetCallbackLock @ 0x1C0010DA8 (FxGetCallbackLock.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfObjectAcquireLock(_WDF_DRIVER_GLOBALS *DriverGlobals, void *Object)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxCallbackLock *CallbackLock; // rax
  FxCallbackLock *v5; // rbx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF
  FxObject *pObject; // [rsp+50h] [rbp+18h] BYREF

  pObject = 0LL;
  irql = 0;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Object, 0x1000u, (void **)&pObject);
  m_Globals = pObject->m_Globals;
  CallbackLock = FxGetCallbackLock(pObject);
  v5 = CallbackLock;
  if ( !CallbackLock )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xAu, WPP_FxObjectAPI_cpp_Traceguids, Object);
    FxVerifierDbgBreakPoint(m_Globals);
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_LOCK_OPERATION, (unsigned __int64)Object, 0LL);
  }
  CallbackLock->Lock(CallbackLock, &irql);
  v5->m_PreviousIrql = irql;
}
