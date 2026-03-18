/*
 * XREFs of ?BuildScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z55K@Z @ 0x1C0057C98
 * Callers:
 *     ?StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x1C0058240 (-StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0019824 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002DC98 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxDmaScatterGatherTransaction::BuildScatterGatherList(
        FxDmaScatterGatherTransaction *this,
        _MDL *Mdl,
        unsigned __int64 CurrentOffset,
        unsigned int Length,
        void (__fastcall *Context)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *),
        void *ScatterGatherBuffer,
        void *ScatterGatherBufferLength,
        unsigned int Mdl_0)
{
  KIRQL v12; // al
  FxDmaEnabler *m_DmaEnabler; // rsi
  KIRQL v14; // r14
  _FxDmaDescription *m_AdapterInfo; // rdx
  unsigned int m_Flags; // edi
  _DMA_ADAPTER *AdapterObject; // rbp
  __int64 v18; // r9
  __int64 v19; // r11
  int v20; // eax
  unsigned int v21; // ebx

  v12 = KfRaiseIrql(2u);
  m_DmaEnabler = this->m_DmaEnabler;
  v14 = v12;
  if ( FxDmaEnabler::GetDmaDescription(m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
  {
    m_AdapterInfo = this->m_AdapterInfo;
    m_Flags = 0;
    AdapterObject = m_AdapterInfo->AdapterObject;
    if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, (unsigned int)m_AdapterInfo, 0xFu) )
      m_Flags = this->m_Flags;
    v20 = (*(__int64 (__fastcall **)(_DMA_ADAPTER *, _DEVICE_OBJECT *, void *, _MDL *, unsigned __int64, unsigned int, unsigned int, void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *), void *, _BYTE, void *, unsigned int, __int64, __int64, __int64))(v19 + 200))(
            AdapterObject,
            m_DmaEnabler->m_FDO,
            this->m_TransferContext,
            Mdl,
            CurrentOffset,
            Length,
            m_Flags,
            FxDmaScatterGatherTransaction::_AdapterListControl,
            ScatterGatherBuffer,
            this->m_DmaDirection,
            ScatterGatherBufferLength,
            Mdl_0,
            v18,
            v18,
            v18);
  }
  else
  {
    v20 = this->m_AdapterInfo->AdapterObject->DmaOperations->BuildScatterGatherList(
            this->m_AdapterInfo->AdapterObject,
            m_DmaEnabler->m_FDO,
            Mdl,
            (char *)Mdl->StartVa + Mdl->ByteOffset + CurrentOffset,
            Length,
            FxDmaScatterGatherTransaction::_AdapterListControl,
            ScatterGatherBuffer,
            this->m_DmaDirection,
            ScatterGatherBufferLength,
            Mdl_0);
  }
  v21 = v20;
  KeLowerIrql(v14);
  return v21;
}
