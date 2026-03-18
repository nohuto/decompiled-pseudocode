/*
 * XREFs of ?ConfigureConstraints@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C0031704
 * Callers:
 *     ?Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0026654 (-Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0019824 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqLd @ 0x1C0077C28 (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgGeneral::ConfigureConstraints(FxPkgGeneral *this, _LIST_ENTRY *FileObjInfoList)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned int v5; // edx
  int v6; // r8d
  int v7; // ecx
  _WDF_SYNCHRONIZATION_SCOPE m_SynchronizationScope; // eax
  _LIST_ENTRY *Blink; // r8
  _WDF_EXECUTION_LEVEL v10; // r11d
  _WDF_EXECUTION_LEVEL v11; // eax
  _WDF_SYNCHRONIZATION_SCOPE Flink_high; // r10d
  unsigned int v13; // edi
  FxDeviceBase *m_DeviceBase; // rcx
  FxCallbackLock *v16; // rax
  _LIST_ENTRY *Flink; // rcx
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // rcx
  FxObject *v21; // rcx
  const void *_a2; // rax
  int globals; // edx
  unsigned int _a4; // r10d
  const void *_a3; // r11
  const void *ObjectHandleUnchecked; // rax
  unsigned int v27; // edx
  unsigned __int8 v28; // r11
  _WDF_EXECUTION_LEVEL parentExecLevel; // [rsp+60h] [rbp+8h] BYREF
  _WDF_SYNCHRONIZATION_SCOPE parentSynchScope; // [rsp+68h] [rbp+10h] BYREF

  m_Globals = this->m_Globals;
  parentExecLevel = WdfExecutionLevelInvalid;
  parentSynchScope = WdfSynchronizationScopeInvalid;
  this->m_DeviceBase->GetConstraints(&this->m_DeviceBase->IFxHasCallbacks, &parentExecLevel, &parentSynchScope);
  this->m_ExecutionLevel = 3 - _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v5, 0xBu);
  v7 = v6 - 7;
  this->m_SynchronizationScope = v6 - 7;
  m_SynchronizationScope = v6 - 7;
  Blink = FileObjInfoList->Blink;
  v10 = v7 - 2;
  if ( Blink == FileObjInfoList )
  {
LABEL_13:
    if ( this->m_ExecutionLevel == v10 )
      this->m_ObjectFlags |= 0x11u;
    if ( m_SynchronizationScope != v7 && m_SynchronizationScope == v10 )
    {
      m_DeviceBase = this->m_DeviceBase;
      if ( parentExecLevel != v10 )
      {
        v13 = -1073741808;
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(m_DeviceBase);
        WPP_IFR_SF_qL(m_Globals, v28, 0x12u, 0xEu, WPP_FxPkgGeneral_cpp_Traceguids, ObjectHandleUnchecked, v27);
        return v13;
      }
      v16 = m_DeviceBase->GetCallbackLockPtr(&m_DeviceBase->IFxHasCallbacks, &this->m_CallbackLockObjectPtr);
      this->m_CallbackLockPtr = v16;
      Flink = FileObjInfoList->Flink;
      if ( FileObjInfoList->Flink != FileObjInfoList && !BYTE4(Flink[9].Flink) )
      {
        Flink[1].Flink = (_LIST_ENTRY *)v16;
        Flink[3].Flink = (_LIST_ENTRY *)this->m_CallbackLockPtr;
        Flink[4].Flink = (_LIST_ENTRY *)this->m_CallbackLockPtr;
      }
    }
    return 0;
  }
  else
  {
    do
    {
      if ( LODWORD(Blink[5].Blink) )
      {
        v11 = (_WDF_EXECUTION_LEVEL)Blink[7].Flink;
        if ( v11 == WdfExecutionLevelInheritFromParent )
          v11 = parentExecLevel;
        if ( v11 == v10 )
          this->m_ExecutionLevel = v10;
        Flink_high = HIDWORD(Blink[7].Flink);
        if ( Flink_high == WdfSynchronizationScopeInheritFromParent )
          Flink_high = parentSynchScope;
        if ( BYTE4(Blink[9].Flink) )
        {
          if ( Flink_high != v7 )
          {
            v13 = -1073741808;
            FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
            v20 = *(_QWORD *)(v19 + 152);
            if ( v20 )
              v21 = *(FxObject **)(v20 + 16);
            else
              v21 = *(FxObject **)(v18 + 136);
            _a2 = (const void *)FxObject::GetObjectHandleUnchecked(v21);
            WPP_IFR_SF_qqLd(m_Globals, globals, 0x12u, 0xCu, WPP_FxPkgGeneral_cpp_Traceguids, _a2, _a3, _a4, globals);
            FxVerifierDbgBreakPoint(m_Globals);
            return v13;
          }
        }
        else
        {
          this->m_SynchronizationScope = Flink_high;
        }
      }
      Blink = Blink->Blink;
    }
    while ( Blink != FileObjInfoList );
    m_SynchronizationScope = this->m_SynchronizationScope;
    if ( m_SynchronizationScope != WdfSynchronizationScopeQueue )
      goto LABEL_13;
    v13 = -1073741808;
    WPP_IFR_SF_d(m_Globals, v7 - 2, 0x12u, 0xDu, WPP_FxPkgGeneral_cpp_Traceguids, -1073741808);
  }
  return v13;
}
