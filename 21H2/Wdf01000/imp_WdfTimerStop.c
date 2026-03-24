/*
 * XREFs of imp_WdfTimerStop @ 0x1C000D540
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0003F34 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C000D5C8 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0059258 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

unsigned __int8 __fastcall imp_WdfTimerStop(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Timer,
        unsigned __int8 Wait)
{
  __int64 Offset; // r8
  FxTimer *v5; // rcx
  FxTimer *pFxTimer; // [rsp+48h] [rbp+10h] BYREF

  pFxTimer = 0LL;
  if ( !Timer )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1028uLL);
  LOWORD(Offset) = 0;
  v5 = (FxTimer *)(~Timer & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Timer & 1) != 0 )
  {
    Offset = LOWORD(v5->__vftable);
    v5 = (FxTimer *)((char *)v5 - Offset);
  }
  if ( v5->m_Type == 4136 )
  {
    pFxTimer = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pFxTimer, (void *)Timer, 0x1028u, Offset);
    v5 = pFxTimer;
  }
  if ( !Wait )
    return FxTimer::Stop(v5, Wait);
  if ( (int)FxVerifierCheckIrqlLevel(v5->m_Globals, 0) >= 0 )
  {
    v5 = pFxTimer;
    return FxTimer::Stop(v5, Wait);
  }
  return 0;
}
