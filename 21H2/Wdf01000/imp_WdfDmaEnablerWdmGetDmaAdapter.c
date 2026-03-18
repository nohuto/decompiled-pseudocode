/*
 * XREFs of imp_WdfDmaEnablerWdmGetDmaAdapter @ 0x1C00352A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dq @ 0x1C005319C (WPP_IFR_SF_dq.c)
 */

_DMA_ADAPTER *__fastcall imp_WdfDmaEnablerWdmGetDmaAdapter(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        int DmaDirection)
{
  __int64 v4; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  $D7F949E6343C64CECF3CA7D9836D4276 *v8; // rbx
  FxDmaEnabler *pDmaEnabler; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  pDmaEnabler = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaEnabler,
    0x1400u,
    (void **)&pDmaEnabler);
  m_Globals = pDmaEnabler->m_Globals;
  if ( !DmaDirection )
    return pDmaEnabler->m_SimplexAdapterInfo.AdapterObject;
  if ( DmaDirection == 1 )
  {
    v8 = ($D7F949E6343C64CECF3CA7D9836D4276 *)&pDmaEnabler->m_DuplexAdapterInfo[1];
    if ( (*((_BYTE *)pDmaEnabler + 380) & 0x10) == 0 )
      v8 = &pDmaEnabler->184;
    return v8->m_SimplexAdapterInfo.AdapterObject;
  }
  else
  {
    WPP_IFR_SF_dq(m_Globals, 2u, 0xFu, 0x14u, WPP_FxDmaEnablerAPI_cpp_Traceguids, DmaDirection, DmaEnabler);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  return (_DMA_ADAPTER *)v4;
}
