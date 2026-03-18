/*
 * XREFs of ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C002C5FC
 * Callers:
 *     ?Remove@FxIoTargetRemote@@UEAAXXZ @ 0x1C002C5E0 (-Remove@FxIoTargetRemote@@UEAAXXZ.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C002CAD0 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     imp_WdfIoTargetClose @ 0x1C0072F30 (imp_WdfIoTargetClose.c)
 *     imp_WdfIoTargetCloseForQueryRemove @ 0x1C0072FC0 (imp_WdfIoTargetCloseForQueryRemove.c)
 *     ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x1C0075AB0 (-_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0019824 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ @ 0x1C002CE48 (-Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ.c)
 *     ?UnregisterForPnpNotification@FxIoTargetRemote@@QEAAXPEAX@Z @ 0x1C002CE8C (-UnregisterForPnpNotification@FxIoTargetRemote@@QEAAXPEAX@Z.c)
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C002CF10 (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002CF3C (-CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qqqqi @ 0x1C007523C (WPP_IFR_SF_qqqqi.c)
 */

void __fastcall FxIoTargetRemote::Close(FxIoTargetRemote *this, unsigned int Reason, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned int v6; // edx
  unsigned __int8 v7; // r8
  unsigned __int8 m_OpenState; // cl
  unsigned __int8 FxVerboseOn; // al
  int v10; // r14d
  void *m_TargetNotifyHandle; // r15
  unsigned __int8 v12; // r8
  FxIoTargetRemote *v13; // rcx
  unsigned int v14; // esi
  const void *v15; // rax
  const void *v16; // rdx
  const void *_a1; // rax
  const _GUID *v18; // rdx
  const void *ObjectHandleUnchecked; // rax
  const void *v20; // rax
  const void *v21; // rax
  const void *v22; // rax
  const void *v23; // rax
  const void *v24; // rax
  unsigned __int8 v25; // dl
  unsigned int v26; // r8d
  unsigned __int16 v27; // r9
  const void *v28; // rax
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
    WPP_IFR_SF_qL(m_Globals, 5u, 0xEu, 0x16u, v18, _a1, Reason);
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
    FxNonPagedObject::Unlock(this, irql, v7);
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
  v10 = 3;
  if ( Reason == 3 )
  {
    if ( FxVerboseOn )
    {
      v20 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x18u, WPP_FxIoTargetRemote_cpp_Traceguids, v20);
    }
    v10 = 5;
  }
  else if ( m_OpenState == 3 )
  {
    if ( Reason == 1 )
    {
      if ( FxVerboseOn )
      {
        v21 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x19u, WPP_FxIoTargetRemote_cpp_Traceguids, v21);
      }
    }
    else
    {
      if ( FxVerboseOn )
      {
        v22 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Au, WPP_FxIoTargetRemote_cpp_Traceguids, v22);
      }
      v10 = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v6, 9u) + 3;
    }
    this->m_OpenState = 1;
  }
  else
  {
    if ( FxVerboseOn )
    {
      v23 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Bu, WPP_FxIoTargetRemote_cpp_Traceguids, v23);
    }
    v10 = 4;
  }
  m_TargetNotifyHandle = 0LL;
  if ( m_Globals->FxVerboseOn )
  {
    v24 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qqqqi(
      m_Globals,
      v25,
      v26,
      v27,
      traceGuid,
      v24,
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
  this->GotoRemoveState(this, (_WDF_IO_TARGET_STATE)v10, &pended, &sent, (unsigned __int8)traceGuid, &wait);
  FxNonPagedObject::Unlock(this, irql, v12);
  FxIoTargetRemote::UnregisterForPnpNotification(v13, m_TargetNotifyHandle);
  FxIoTarget::CompletePendedRequestList(this, &pended);
  FxIoTarget::_CancelSentRequests(&sent);
  if ( wait )
  {
    if ( m_Globals->FxVerboseOn )
    {
      v28 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Du, WPP_FxIoTargetRemote_cpp_Traceguids, v28);
    }
    this->WaitForSentIoToComplete(this);
  }
  v14 = Reason - 1;
  if ( v14 )
  {
    if ( v14 == 2 )
      FxIoTargetRemoveOpenParams::Clear(&this->m_OpenParams);
    else
      KeClearEvent(&this->m_SentIoEvent.m_Event.m_Event);
  }
  if ( v10 == 5 )
    this->WaitForDisposeEvent(this);
  if ( pointers.TargetPdo )
  {
    v15 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qq(m_Globals, 4u, 0xEu, 0x1Eu, WPP_FxIoTargetRemote_cpp_Traceguids, v15, v16);
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
