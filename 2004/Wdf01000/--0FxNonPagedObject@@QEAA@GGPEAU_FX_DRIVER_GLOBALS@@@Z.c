/*
 * XREFs of ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0014338
 * Callers:
 *     ??0FxWorkItem@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0014184 (--0FxWorkItem@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C001486C (-_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     imp_WdfCollectionCreate @ 0x1C00149F0 (imp_WdfCollectionCreate.c)
 *     ??0FxSystemWorkItem@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0014B04 (--0FxSystemWorkItem@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxTimer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00152D4 (--0FxTimer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00314DC (--0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxDmaTransactionBase@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z @ 0x1C00361D4 (--0FxDmaTransactionBase@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z.c)
 *     ??0FxCommonBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDmaEnabler@@@Z @ 0x1C003769C (--0FxCommonBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDmaEnabler@@@Z.c)
 *     ??0FxDpc@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003A264 (--0FxDpc@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxChildList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@_KPEAVFxDevice@@E@Z @ 0x1C003A604 (--0FxChildList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@_KPEAVFxDevice@@E@Z.c)
 *     ??0FxWmiProvider@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAVFxDevice@@@Z @ 0x1C003DEC4 (--0FxWmiProvider@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAVFxDevice@@@Z.c)
 *     ??0FxWmiInstance@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxWmiProvider@@@Z @ 0x1C003E810 (--0FxWmiInstance@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxWmiProvider@@@Z.c)
 *     ??0FxDeviceBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDriver@@GG@Z @ 0x1C004D2B0 (--0FxDeviceBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDriver@@GG@Z.c)
 *     ??0FxCompanionTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C004FFC0 (--0FxCompanionTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     ??0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00538C8 (--0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxDisposeList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0054FD4 (--0FxDisposeList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxResourceCollection@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGE@Z @ 0x1C005C090 (--0FxResourceCollection@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGE@Z.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C0064698 (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z @ 0x1C006471C (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z.c)
 *     ??0FxUsbInterface@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1C0071A64 (--0FxUsbInterface@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@PEAU_USB_INTERFACE_DESCRIPTOR@@.c)
 *     ??0FxIoQueue@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxPkgIo@@@Z @ 0x1C0075500 (--0FxIoQueue@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxPkgIo@@@Z.c)
 *     ??0FxPackage@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C0078100 (--0FxPackage@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 *     ??0FxInterrupt@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0088DE8 (--0FxInterrupt@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxSystemThread@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0090D64 (--0FxSystemThread@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00051A4 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0031C50 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 */

void __fastcall FxNonPagedObject::FxNonPagedObject(
        FxNonPagedObject *this,
        unsigned __int16 Type,
        unsigned __int16 Size,
        _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxVerifierLock *verifierLock; // [rsp+30h] [rbp+8h] BYREF

  FxObject::FxObject(this, Type, Size, FxDriverGlobals);
  this->__vftable = (FxNonPagedObject_vtbl *)FxNonPagedObject::`vftable';
  this->m_NPLock.m_Lock = 0LL;
  this->m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerifierLock )
    {
      verifierLock = 0LL;
      FxVerifierLock::CreateAndInitialize(&verifierLock, m_Globals, this);
      this[-1].m_ChildEntry.Blink = (_LIST_ENTRY *)verifierLock;
    }
  }
}
