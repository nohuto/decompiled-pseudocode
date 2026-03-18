/*
 * XREFs of imp_WdfWaitLockAcquire @ 0x1C0001850
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005DAC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C0053078 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall imp_WdfWaitLockAcquire(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Lock, __int64 *Timeout)
{
  _LARGE_INTEGER *v3; // rbx
  __int64 v5; // r8
  FxWaitLock *v6; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxWaitLockInternal *v8; // rdi
  unsigned int v9; // ebx
  KIRQL CurrentIrql; // al
  FxWaitLock *pLock; // [rsp+58h] [rbp+10h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0LL;
  pLock = 0LL;
  if ( !Lock )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1023uLL);
  LOWORD(v5) = 0;
  v6 = (FxWaitLock *)(~Lock & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Lock & 1) != 0 )
  {
    v5 = LOWORD(v6->__vftable);
    v6 = (FxWaitLock *)((char *)v6 - v5);
  }
  if ( v6->m_Type == 4131 )
  {
    pLock = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, (void **)&pLock, (void *)Lock, 0x1023u, v5);
    v6 = pLock;
  }
  m_Globals = v6->m_Globals;
  if ( (!Timeout || *Timeout) && m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(m_Globals);
      return 3221225488LL;
    }
    v6 = pLock;
  }
  v13 = 0LL;
  v8 = &v6->FxWaitLockInternal;
  if ( Timeout )
  {
    v13 = *Timeout;
    KeEnterCriticalRegion();
    v3 = (_LARGE_INTEGER *)&v13;
  }
  else
  {
    KeEnterCriticalRegion();
  }
  v9 = KeWaitForSingleObject(v8, Executive, 0, 0, v3);
  if ( v9 == 258 )
    KeLeaveCriticalRegion();
  else
    v8->m_OwningThread = KeGetCurrentThread();
  return v9;
}
