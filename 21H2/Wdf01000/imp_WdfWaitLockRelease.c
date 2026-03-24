/*
 * XREFs of imp_WdfWaitLockRelease @ 0x1C00033A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0003F34 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0059258 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfWaitLockRelease(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Lock)
{
  __int64 Offset; // r8
  FxWaitLock *v3; // rcx
  _KEVENT *p_m_Event; // rcx
  FxWaitLock *pLock; // [rsp+48h] [rbp+10h] BYREF

  pLock = 0LL;
  if ( !Lock )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1023uLL);
  LOWORD(Offset) = 0;
  v3 = (FxWaitLock *)(~Lock & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Lock & 1) != 0 )
  {
    Offset = LOWORD(v3->__vftable);
    v3 = (FxWaitLock *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4131 )
  {
    pLock = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pLock, (void *)Lock, 0x1023u, Offset);
    v3 = pLock;
  }
  p_m_Event = &v3->m_Event.m_Event;
  p_m_Event[1].Header.WaitListHead.Flink = 0LL;
  KeSetEvent(p_m_Event, 0, 0);
  KeLeaveCriticalRegion();
}
