/*
 * XREFs of ?AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z @ 0x1C00324DC
 * Callers:
 *     ?StartTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C00333E0 (-StartTransfer@FxDmaPacketTransaction@@UEAAJXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_dq @ 0x1C002E0DC (WPP_IFR_SF_dq.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002EB20 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?_AdapterControl@FxDmaPacketTransaction@@KA?AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX2@Z @ 0x1C0033800 (-_AdapterControl@FxDmaPacketTransaction@@KA-AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_I.c)
 *     WPP_IFR_SF_dqd @ 0x1C0033AB4 (WPP_IFR_SF_dqd.c)
 */

__int64 __fastcall FxDmaPacketTransaction::AllocateAdapterChannel(
        FxDmaPacketTransaction *this,
        unsigned __int8 MapRegistersReserved)
{
  KIRQL v4; // al
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  KIRQL v6; // si
  _FX_DRIVER_GLOBALS *v7; // r10
  unsigned __int16 v8; // r9
  $AA61F120FE94696E7B3472FF8202EE19 *DmaDescription; // rax
  __int64 v10; // r10
  _DMA_ADAPTER *AdapterObject; // rcx
  _DMA_OPERATIONS *DmaOperations; // rdx
  int v13; // eax
  int _a3; // edi
  const void *ObjectHandleUnchecked; // rax
  void *_a2; // [rsp+30h] [rbp-28h]

  v4 = KfRaiseIrql(2u);
  m_Globals = this->m_Globals;
  v6 = v4;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
  {
    _a2 = (void *)FxObject::GetObjectHandleUnchecked(this);
    v8 = 10;
    if ( MapRegistersReserved )
      v8 = 11;
    WPP_IFR_SF_dq(v7, 5u, 0xFu, v8, WPP_FxDmaTransactionPacket_hpp_Traceguids, this->m_MapRegistersNeeded, _a2);
  }
  DmaDescription = FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice);
  AdapterObject = this->m_AdapterInfo->AdapterObject;
  DmaOperations = AdapterObject->DmaOperations;
  if ( DmaDescription->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
  {
    if ( MapRegistersReserved )
    {
      FxDmaPacketTransaction::_AdapterControl(*(_DEVICE_OBJECT **)(v10 + 168), 0LL, this->m_MapRegisterBase, this);
      _a3 = 0;
      goto LABEL_12;
    }
    v13 = DmaOperations->AllocateAdapterChannelEx(
            AdapterObject,
            *(_DEVICE_OBJECT **)(v10 + 168),
            this->m_TransferContext,
            this->m_MapRegistersNeeded,
            this->m_Flags,
            FxDmaPacketTransaction::_AdapterControl,
            this,
            0LL);
  }
  else
  {
    v13 = DmaOperations->AllocateAdapterChannel(
            AdapterObject,
            *(_DEVICE_OBJECT **)(v10 + 168),
            this->m_MapRegistersNeeded,
            FxDmaPacketTransaction::_AdapterControl,
            this);
  }
  _a3 = v13;
LABEL_12:
  KeLowerIrql(v6);
  if ( _a3 < 0 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_dqd(
      this->m_Globals,
      2u,
      0xFu,
      0xCu,
      WPP_FxDmaTransactionPacket_hpp_Traceguids,
      this->m_MapRegistersNeeded,
      ObjectHandleUnchecked,
      _a3);
  }
  return (unsigned int)_a3;
}
