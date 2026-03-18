/*
 * XREFs of imp_WdfDmaTransactionSetSingleTransferRequirement @ 0x1C0030D40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002F3F0 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C002FA6C (WPP_IFR_SF_ql.c)
 */

void __fastcall imp_WdfDmaTransactionSetSingleTransferRequirement(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned __int8 RequireSingleTransfer)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxObject *v6; // rcx
  __int64 v7; // r8
  const void *_a2; // rax
  int v9; // ecx
  FxDmaTransactionBase *pDmaTrans; // [rsp+50h] [rbp+8h] BYREF

  pDmaTrans = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans);
  m_Globals = pDmaTrans->m_Globals;
  if ( (int)FxVerifierCheckIrqlLevel(m_Globals, 2u) >= 0 )
  {
    if ( FxDmaEnabler::GetDmaDescription(pDmaTrans->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version != 3 )
    {
      _a2 = (const void *)FxObject::GetObjectHandleUnchecked(v6);
      WPP_IFR_SF_qq(m_Globals, 2u, 0xFu, 0x19u, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, _a2);
LABEL_4:
      FxVerifierDbgBreakPoint(m_Globals);
      return;
    }
    v9 = *(_DWORD *)(v7 + 120);
    if ( (unsigned int)(v9 - 1) > 1 && v9 != 7 )
    {
      WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x1Au, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, v9);
      goto LABEL_4;
    }
    *(_BYTE *)(v7 + 248) = RequireSingleTransfer;
  }
}
