/*
 * XREFs of imp_WdfDmaTransactionSetChannelConfigurationCallback @ 0x1C0054A60
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfDmaTransactionSetChannelConfigurationCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned __int8 (__fastcall *ConfigureRoutine)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _MDL *, unsigned __int64, unsigned __int64),
        FxObject *ConfigureContext)
{
  FxDmaTransactionBase *v7; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _WDF_DMA_PROFILE _a2; // ecx
  FxDmaTransactionBase *pDmaTrans; // [rsp+50h] [rbp+8h] BYREF

  pDmaTrans = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans);
  v7 = pDmaTrans;
  m_Globals = pDmaTrans->m_Globals;
  _a2 = pDmaTrans->m_DmaEnabler->m_Profile;
  if ( (unsigned int)(_a2 - 7) <= 1 )
  {
    pDmaTrans[1].m_SpinLock.m_Lock = (unsigned __int64)ConfigureRoutine;
    v7[1].m_ParentObject = ConfigureContext;
  }
  else
  {
    WPP_IFR_SF_qL(m_Globals, 2u, 0xFu, 0x1Bu, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, _a2);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
