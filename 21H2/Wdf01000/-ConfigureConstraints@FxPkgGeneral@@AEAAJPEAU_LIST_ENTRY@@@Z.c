/*
 * XREFs of ?ConfigureConstraints@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C008D6A4
 * Callers:
 *     ?Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C008DC70 (-Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C00150E8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E65C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqLd @ 0x1C006A7CC (WPP_IFR_SF_qqLd.c)
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
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rcx
  FxObject *v17; // rcx
  const void *ObjectHandleUnchecked; // rax
  int v19; // edx
  unsigned int _a4; // r10d
  const void *_a3; // r11
  FxDeviceBase *m_DeviceBase; // rcx
  const void *_a1; // rax
  unsigned int v24; // edx
  unsigned __int8 v25; // r11
  FxCallbackLock *v26; // rax
  _LIST_ENTRY *Flink; // rcx
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
LABEL_19:
    if ( this->m_ExecutionLevel == v10 )
      this->m_ObjectFlags |= 0x11u;
    if ( m_SynchronizationScope != v7 && m_SynchronizationScope == v10 )
    {
      m_DeviceBase = this->m_DeviceBase;
      if ( parentExecLevel != v10 )
      {
        v13 = -1073741808;
        _a1 = (const void *)FxObject::GetObjectHandleUnchecked(m_DeviceBase);
        WPP_IFR_SF_qL(m_Globals, v25, 0x12u, 0xEu, WPP_FxPkgGeneral_cpp_Traceguids, _a1, v24);
        return v13;
      }
      v26 = m_DeviceBase->GetCallbackLockPtr(&m_DeviceBase->IFxHasCallbacks, &this->m_CallbackLockObjectPtr);
      this->m_CallbackLockPtr = v26;
      Flink = FileObjInfoList->Flink;
      if ( FileObjInfoList->Flink != FileObjInfoList && !BYTE4(Flink[9].Flink) )
      {
        Flink[1].Flink = (_LIST_ENTRY *)v26;
        Flink[3].Flink = (_LIST_ENTRY *)this->m_CallbackLockPtr;
        Flink[4].Flink = (_LIST_ENTRY *)this->m_CallbackLockPtr;
      }
    }
    return 0;
  }
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
          v16 = *(_QWORD *)(v15 + 152);
          if ( v16 )
            v17 = *(FxObject **)(v16 + 16);
          else
            v17 = *(FxObject **)(v14 + 136);
          ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(v17);
          WPP_IFR_SF_qqLd(
            m_Globals,
            v19,
            0x12u,
            0xCu,
            WPP_FxPkgGeneral_cpp_Traceguids,
            ObjectHandleUnchecked,
            _a3,
            _a4,
            v19);
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
    goto LABEL_19;
  v13 = -1073741808;
  WPP_IFR_SF_d(m_Globals, v7 - 2, 0x12u, 0xDu, WPP_FxPkgGeneral_cpp_Traceguids, -1073741808);
  return v13;
}
