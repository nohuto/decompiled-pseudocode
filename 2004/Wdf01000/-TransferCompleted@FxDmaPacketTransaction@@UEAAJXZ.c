/*
 * XREFs of ?TransferCompleted@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C0033F10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002F3F0 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_qqii @ 0x1C00346F0 (WPP_IFR_SF_qqii.c)
 *     WPP_IFR_SF_qqiid @ 0x1C00347F8 (WPP_IFR_SF_qqiid.c)
 */

__int64 __fastcall FxDmaPacketTransaction::TransferCompleted(FxDmaPacketTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _DMA_OPERATIONS *DmaOperations; // rdi
  const void *_a3; // rax
  unsigned __int8 v5; // dl
  unsigned int v6; // r8d
  $9793661923A12A2D666E36DBEF9899AC *DmaDescription; // rax
  _DMA_ADAPTER *AdapterObject; // rcx
  int id; // edi
  const void *ObjectHandleUnchecked; // rax
  unsigned __int8 v11; // dl
  unsigned int v12; // r8d
  unsigned __int16 v13; // r9
  const void *v14; // rax
  const _GUID *_a2; // [rsp+20h] [rbp-38h]

  m_Globals = this->m_Globals;
  DmaOperations = this->m_AdapterInfo->AdapterObject->DmaOperations;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
  {
    _a3 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qqii(
      m_Globals,
      v5,
      v6,
      0xFu,
      WPP_FxDmaTransactionPacket_hpp_Traceguids,
      _a3,
      this->m_CurrentFragmentMdl,
      this->m_CurrentFragmentOffset,
      this->m_CurrentFragmentLength);
  }
  DmaDescription = FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice);
  AdapterObject = this->m_AdapterInfo->AdapterObject;
  if ( DmaDescription->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
  {
    LODWORD(_a2) = this->m_CurrentFragmentLength;
    id = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, unsigned __int64))DmaOperations->FlushAdapterBuffersEx)(
           AdapterObject,
           this->m_CurrentFragmentMdl,
           this->m_MapRegisterBase,
           this->m_CurrentFragmentOffset);
    goto LABEL_9;
  }
  LODWORD(_a2) = this->m_CurrentFragmentLength;
  if ( ((unsigned __int8 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, char *))DmaOperations->FlushAdapterBuffers)(
         AdapterObject,
         this->m_CurrentFragmentMdl,
         this->m_MapRegisterBase,
         (char *)this->m_CurrentFragmentMdl->StartVa
       + this->m_CurrentFragmentMdl->ByteOffset
       + this->m_CurrentFragmentOffset) )
  {
    id = 0;
LABEL_9:
    if ( id >= 0 )
      return (unsigned int)id;
    goto LABEL_10;
  }
  id = -1073741823;
LABEL_10:
  ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
  WPP_IFR_SF_qqiid(
    this->m_Globals,
    v11,
    v12,
    v13,
    _a2,
    ObjectHandleUnchecked,
    this->m_CurrentFragmentMdl,
    this->m_CurrentFragmentOffset,
    this->m_CurrentFragmentLength,
    id);
  v14 = (const void *)FxObject::GetObjectHandleUnchecked(this);
  WPP_IFR_SF_qL(m_Globals, 2u, 0xFu, 0x20u, WPP_FxDmaTransactionPacket_cpp_Traceguids, v14, id);
  FxVerifierDbgBreakPoint(m_Globals);
  return (unsigned int)id;
}
