/*
 * XREFs of imp_WdfTimerGetParentObject @ 0x1C0002D40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0003F34 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C00591D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

unsigned __int64 __fastcall imp_WdfTimerGetParentObject(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Timer)
{
  __int64 v2; // rbx
  __int64 Offset; // r8
  FxTimer *v4; // rcx
  FxObject *m_Object; // rdx
  FxTimer *pFxTimer; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  pFxTimer = 0LL;
  if ( !Timer )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1028uLL);
  LOWORD(Offset) = 0;
  v4 = (FxTimer *)(~Timer & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Timer & 1) != 0 )
  {
    Offset = LOWORD(v4->__vftable);
    v4 = (FxTimer *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4136 )
  {
    pFxTimer = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pFxTimer, (void *)Timer, 0x1028u, Offset);
    v4 = pFxTimer;
  }
  m_Object = v4->m_Object;
  if ( m_Object && m_Object->m_ObjectSize )
    return (unsigned __int64)m_Object ^ 0xFFFFFFFFFFFFFFF8uLL;
  return v2;
}
