/*
 * XREFs of imp_WdfInterruptAcquireLock @ 0x1C0002760
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C00027C4 (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005DAC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfInterruptAcquireLock(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Interrupt)
{
  __int64 Offset; // r8
  FxInterrupt *v3; // rcx
  FxInterrupt *pFxInterrupt; // [rsp+48h] [rbp+10h] BYREF

  pFxInterrupt = 0LL;
  if ( !Interrupt )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1027uLL);
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
    FxInterrupt::AcquireLock(v3);
  }
}
