/*
 * XREFs of ?ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0055204
 * Callers:
 *     imp_WdfDmaEnablerConfigureSystemProfile @ 0x1C0053440 (imp_WdfDmaEnablerConfigureSystemProfile.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002DB68 (-ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002DC98 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     memset @ 0x1C0036C00 (memset.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qLLd @ 0x1C0055760 (WPP_IFR_SF_qLLd.c)
 */

__int64 __fastcall FxDmaEnabler::ConfigureSystemAdapter(
        FxDmaEnabler *this,
        _WDF_DMA_SYSTEM_PROFILE_CONFIG *Config,
        unsigned __int32 ConfigDirection)
{
  FxObject *v6; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r8
  int v8; // esi
  const void *_a2; // rax
  _FX_DRIVER_GLOBALS *v10; // r8
  unsigned int m_MaximumLength; // eax
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *DmaDescriptor; // rcx
  unsigned int Vector; // eax
  unsigned __int64 PreallocatedSGListSize; // rdi
  unsigned __int64 Pool2; // rax
  const void *ObjectHandleUnchecked; // rax
  char v17; // r8
  FxDmaEnabler *v18; // rcx
  char v19; // r8
  _DEVICE_DESCRIPTION deviceDescription; // [rsp+50h] [rbp-48h] BYREF

  if ( FxDmaEnabler::GetDmaDescription(this, (_WDF_DMA_DIRECTION)ConfigDirection)->m_SimplexAdapterInfo.AdapterObject )
  {
    m_Globals = v6->m_Globals;
    v8 = -1073741811;
    if ( m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)FxObject::GetObjectHandleUnchecked(v6);
      WPP_IFR_SF_qLLd(
        v10,
        5u,
        (unsigned int)v10,
        0x12u,
        WPP_FxDmaEnabler_cpp_Traceguids,
        _a2,
        this->m_Profile,
        ConfigDirection,
        -1073741811);
      m_Globals = this->m_Globals;
    }
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    memset(&deviceDescription, 0, sizeof(deviceDescription));
    m_MaximumLength = this->m_MaximumLength;
    DmaDescriptor = Config->DmaDescriptor;
    deviceDescription.InterfaceType = Internal;
    deviceDescription.MaximumLength = m_MaximumLength;
    deviceDescription.DemandMode = Config->DemandMode;
    deviceDescription.AutoInitialize = Config->LoopedTransfer;
    deviceDescription.DmaWidth = Config->DmaWidth;
    deviceDescription.DeviceAddress.QuadPart = Config->DeviceAddress.QuadPart;
    deviceDescription.DmaChannel = DmaDescriptor->u.Generic.Start.LowPart;
    Vector = DmaDescriptor->u.Interrupt.Vector;
    deviceDescription.Version = 3;
    deviceDescription.DmaRequestLine = Vector;
    v8 = FxDmaEnabler::ConfigureDmaAdapter(this, &deviceDescription, (_WDF_DMA_DIRECTION)ConfigDirection);
    if ( v8 >= 0 )
    {
      PreallocatedSGListSize = this->m_SimplexAdapterInfo.PreallocatedSGListSize;
      if ( (*((_BYTE *)this + 380) & 0x10) != 0
        && PreallocatedSGListSize <= this->m_DuplexAdapterInfo[1].PreallocatedSGListSize )
      {
        PreallocatedSGListSize = this->m_DuplexAdapterInfo[1].PreallocatedSGListSize;
      }
      Pool2 = ExAllocatePool2(64LL, PreallocatedSGListSize, this->m_Globals->Tag);
      this->m_SGList.ScatterGatherProfile.Lookaside.L.ListHead.Alignment = Pool2;
      if ( Pool2 )
      {
        v17 = *((_BYTE *)this + 380) | 0x20;
        this->m_SGListSize = PreallocatedSGListSize;
        *((_BYTE *)this + 380) = v17;
        if ( FxDmaEnabler::GetDmaDescription(this, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.AdapterObject
          && FxDmaEnabler::GetDmaDescription(v18, WdfDmaDirectionWriteToDevice)->m_SimplexAdapterInfo.AdapterObject )
        {
          *((_BYTE *)this + 380) = v19 | 2;
        }
      }
      else
      {
        v8 = -1073741670;
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_qL(
          this->m_Globals,
          2u,
          0xFu,
          0x13u,
          WPP_FxDmaEnabler_cpp_Traceguids,
          ObjectHandleUnchecked,
          0xC000009A);
      }
    }
  }
  return (unsigned int)v8;
}
