/*
 * XREFs of ?TransferCompleted@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C0056E20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002DC98 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqii @ 0x1C0057618 (WPP_IFR_SF_qqii.c)
 *     WPP_IFR_SF_qqiid @ 0x1C0057720 (WPP_IFR_SF_qqiid.c)
 */

__int64 __fastcall FxDmaPacketTransaction::TransferCompleted(FxDmaPacketTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _DMA_OPERATIONS *DmaOperations; // rdi
  const void *_a3; // rax
  unsigned __int8 v5; // dl
  unsigned int v6; // r8d
  $D7F949E6343C64CECF3CA7D9836D4276 *DmaDescription; // rax
  _MDL *m_CurrentFragmentMdl; // rdx
  _DMA_ADAPTER *AdapterObject; // rcx
  int id; // edi
  const void *ObjectHandleUnchecked; // rax
  unsigned __int8 v12; // dl
  unsigned int v13; // r8d
  unsigned __int16 v14; // r9
  const void *v15; // rax
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
  m_CurrentFragmentMdl = this->m_CurrentFragmentMdl;
  AdapterObject = this->m_AdapterInfo->AdapterObject;
  if ( DmaDescription->m_SimplexAdapterInfo.DeviceDescription.Version != 3 )
  {
    LODWORD(_a2) = this->m_CurrentFragmentLength;
    if ( ((unsigned __int8 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, unsigned __int64))DmaOperations->FlushAdapterBuffers)(
           AdapterObject,
           m_CurrentFragmentMdl,
           this->m_MapRegisterBase,
           (unsigned __int64)m_CurrentFragmentMdl->StartVa
         + m_CurrentFragmentMdl->ByteOffset
         + this->m_CurrentFragmentOffset) )
    {
      return 0;
    }
    id = -1073741823;
    goto LABEL_9;
  }
  LODWORD(_a2) = this->m_CurrentFragmentLength;
  id = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, unsigned __int64))DmaOperations->FlushAdapterBuffersEx)(
         AdapterObject,
         m_CurrentFragmentMdl,
         this->m_MapRegisterBase,
         this->m_CurrentFragmentOffset);
  if ( id < 0 )
  {
LABEL_9:
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qqiid(
      this->m_Globals,
      v12,
      v13,
      v14,
      _a2,
      ObjectHandleUnchecked,
      this->m_CurrentFragmentMdl,
      this->m_CurrentFragmentOffset,
      this->m_CurrentFragmentLength,
      id);
    v15 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(m_Globals, 2u, 0xFu, 0x20u, WPP_FxDmaTransactionPacket_cpp_Traceguids, v15, id);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  return (unsigned int)id;
}
