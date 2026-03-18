/*
 * XREFs of imp_WdfInterruptReleaseLock @ 0x1C0003D40
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C0003DA4 (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0003F34 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C00588FC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfInterruptReleaseLock(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Interrupt)
{
  __int64 Offset; // r8
  FxInterrupt *v3; // rcx
  FxInterrupt *pFxInterrupt; // [rsp+48h] [rbp+10h] BYREF

  pFxInterrupt = 0LL;
  if ( !Interrupt )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1027uLL);
  LOWORD(Offset) = 0;
  v3 = (FxInterrupt *)(~Interrupt & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Interrupt & 1) != 0 )
  {
    Offset = LOWORD(v3->__vftable);
    v3 = (FxInterrupt *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4135 )
  {
    pFxInterrupt = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pFxInterrupt, (void *)Interrupt, 0x1027u, Offset);
    v3 = pFxInterrupt;
  }
  if ( !v3->m_PassiveHandling )
    goto LABEL_7;
  if ( FxVerifierCheckIrqlLevel(v3->m_Globals, 0) >= 0 )
  {
    v3 = pFxInterrupt;
LABEL_7:
    FxInterrupt::ReleaseLock(v3);
  }
}
