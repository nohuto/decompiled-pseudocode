/*
 * XREFs of ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C00662CC
 * Callers:
 *     imp_WdfIoTargetClose @ 0x1C0062970 (imp_WdfIoTargetClose.c)
 *     imp_WdfIoTargetCloseForQueryRemove @ 0x1C0062A00 (imp_WdfIoTargetCloseForQueryRemove.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C0066750 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     ?Remove@FxIoTargetRemote@@UEAAXXZ @ 0x1C0066CD0 (-Remove@FxIoTargetRemote@@UEAAXXZ.c)
 *     ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x1C0067A70 (-_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0015188 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0064000 (-CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C0065980 (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ @ 0x1C00661A4 (-Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ.c)
 *     WPP_IFR_SF_qqqqi @ 0x1C00670D8 (WPP_IFR_SF_qqqqi.c)
 *     ?UnregisterForPnpNotification@FxIoTargetRemote@@QEAAXPEAX@Z @ 0x1C0067A2C (-UnregisterForPnpNotification@FxIoTargetRemote@@QEAAXPEAX@Z.c)
 */

void __fastcall FxIoTargetRemote::Close(FxIoTargetRemote *this, unsigned int Reason, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *_a1; // rax
  const _GUID *v7; // rdx
  unsigned int v8; // edx
  unsigned __int8 v9; // r8
  unsigned __int8 m_OpenState; // cl
  const void *ObjectHandleUnchecked; // rax
  unsigned __int8 FxVerboseOn; // al
  int v13; // r14d
  const void *v14; // rax
  const void *v15; // rax
  const void *v16; // rax
  const void *v17; // rax
  void *m_TargetNotifyHandle; // r15
  const void *v19; // rax
  unsigned __int8 v20; // dl
  unsigned int v21; // r8d
  unsigned __int16 v22; // r9
  unsigned __int8 v23; // r8
  FxIoTargetRemote *v24; // rcx
  const void *v25; // rax
  unsigned int v26; // esi
  const void *v27; // rax
  const void *v28; // rdx
  const void *v29; // rax
  const void *v30; // rdx
  const void *v31; // rax
  const void *v32; // r10
  const _GUID *traceGuid; // [rsp+20h] [rbp-60h]
  _LIST_ENTRY pended; // [rsp+50h] [rbp-30h] BYREF
  FxIoTargetClearedPointers pointers; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int8 wait; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int8 irql; // [rsp+C8h] [rbp+48h] BYREF
  _SINGLE_LIST_ENTRY sent; // [rsp+D0h] [rbp+50h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  if ( m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(m_Globals, 5u, 0xEu, 0x16u, v7, _a1, Reason);
  }
  sent.Next = 0LL;
  wait = 0;
  pended.Blink = &pended;
  pended.Flink = &pended;
  memset(&pointers, 0, sizeof(pointers));
  while ( 1 )
  {
    FxNonPagedObject::Lock(this, &irql, a3);
    m_OpenState = this->m_OpenState;
    if ( m_OpenState != 2 )
      break;
    FxNonPagedObject::Unlock(this, irql, v9);
    if ( m_Globals->FxVerboseOn )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qq(
        m_Globals,
        5u,
        0xEu,
        0x17u,
        WPP_FxIoTargetRemote_cpp_Traceguids,
        ObjectHandleUnchecked,
        &this->m_OpenedEvent);
    }
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&this->m_OpenedEvent, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
  }
  FxVerboseOn = m_Globals->FxVerboseOn;
  v13 = 3;
  if ( Reason == 3 )
  {
    if ( FxVerboseOn )
    {
      v14 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x18u, WPP_FxIoTargetRemote_cpp_Traceguids, v14);
    }
    v13 = 5;
  }
  else if ( m_OpenState == 3 )
  {
    if ( Reason == 1 )
    {
      if ( FxVerboseOn )
      {
        v15 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x19u, WPP_FxIoTargetRemote_cpp_Traceguids, v15);
      }
    }
    else
    {
      if ( FxVerboseOn )
      {
        v16 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Au, WPP_FxIoTargetRemote_cpp_Traceguids, v16);
      }
      v13 = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v8, 9u) + 3;
    }
    this->m_OpenState = 1;
  }
  else
  {
    if ( FxVerboseOn )
    {
      v17 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Bu, WPP_FxIoTargetRemote_cpp_Traceguids, v17);
    }
    v13 = 4;
  }
  m_TargetNotifyHandle = 0LL;
  if ( m_Globals->FxVerboseOn )
  {
    v19 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qqqqi(
      m_Globals,
      v20,
      v21,
      v22,
      traceGuid,
      v19,
      this->m_TargetFileObject,
      this->m_TargetDevice,
      this->m_TargetHandle,
      (__int64)this->m_TargetNotifyHandle);
  }
  if ( Reason != 1 )
  {
    m_TargetNotifyHandle = this->m_TargetNotifyHandle;
    this->m_TargetNotifyHandle = 0LL;
  }
  this->m_ClearedPointers = &pointers;
  LOBYTE(traceGuid) = 0;
  this->GotoRemoveState(this, (_WDF_IO_TARGET_STATE)v13, &pended, &sent, (unsigned __int8)traceGuid, &wait);
  FxNonPagedObject::Unlock(this, irql, v23);
  FxIoTargetRemote::UnregisterForPnpNotification(v24, m_TargetNotifyHandle);
  FxIoTarget::CompletePendedRequestList(this, &pended);
  FxIoTarget::_CancelSentRequests(&sent);
  if ( wait )
  {
    if ( m_Globals->FxVerboseOn )
    {
      v25 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Du, WPP_FxIoTargetRemote_cpp_Traceguids, v25);
    }
    this->WaitForSentIoToComplete(this);
  }
  v26 = Reason - 1;
  if ( v26 )
  {
    if ( v26 == 2 )
      FxIoTargetRemoveOpenParams::Clear(&this->m_OpenParams);
    else
      KeClearEvent(&this->m_SentIoEvent.m_Event.m_Event);
  }
  if ( v13 == 5 )
    this->WaitForDisposeEvent(this);
  if ( pointers.TargetPdo )
  {
    v27 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qq(m_Globals, 4u, 0xEu, 0x1Eu, WPP_FxIoTargetRemote_cpp_Traceguids, v27, v28);
    ObfDereferenceObject(pointers.TargetPdo);
  }
  if ( pointers.TargetFileObject )
  {
    v29 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qq(m_Globals, 4u, 0xEu, 0x1Fu, WPP_FxIoTargetRemote_cpp_Traceguids, v29, v30);
    ObfDereferenceObject(pointers.TargetFileObject);
  }
  if ( pointers.TargetHandle )
  {
    v31 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qq(m_Globals, 4u, 0xEu, 0x20u, WPP_FxIoTargetRemote_cpp_Traceguids, v31, v32);
    ZwClose(pointers.TargetHandle);
  }
}
