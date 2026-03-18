/*
 * XREFs of imp_WdfDmaTransactionCreate @ 0x1C0054190
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C0057154 (-_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     ?_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C005844C (-_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@P.c)
 *     ?_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C0058B0C (-_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDmaTransactionCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFDMATRANSACTION__ **DmaTransactionHandle)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int result; // eax
  _WDF_DMA_PROFILE m_Profile; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  FxDmaEnabler *pDmaEnabler; // [rsp+30h] [rbp+8h] BYREF

  pDmaEnabler = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaEnabler,
    0x1400u,
    (void **)&pDmaEnabler);
  m_Globals = pDmaEnabler->m_Globals;
  if ( !DmaTransactionHandle )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *DmaTransactionHandle = 0LL;
  result = FxValidateObjectAttributes(m_Globals, Attributes, 1);
  if ( result >= 0 )
  {
    m_Profile = pDmaEnabler->m_Profile;
    if ( m_Profile != WdfDmaProfilePacket )
    {
      if ( m_Profile == WdfDmaProfileScatterGather )
        return FxDmaScatterGatherTransaction::_Create(m_Globals, Attributes, pDmaEnabler, DmaTransactionHandle);
      if ( m_Profile != WdfDmaProfilePacket64 )
      {
        if ( m_Profile <= WdfDmaProfilePacket64 )
          return -1073741823;
        if ( m_Profile > WdfDmaProfileScatterGather64Duplex )
        {
          if ( m_Profile <= WdfDmaProfileSystemDuplex )
            return FxDmaSystemTransaction::_Create(m_Globals, Attributes, pDmaEnabler, DmaTransactionHandle);
          return -1073741823;
        }
        return FxDmaScatterGatherTransaction::_Create(m_Globals, Attributes, pDmaEnabler, DmaTransactionHandle);
      }
    }
    return FxDmaPacketTransaction::_Create(m_Globals, Attributes, pDmaEnabler, DmaTransactionHandle);
  }
  return result;
}
