/*
 * XREFs of ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C002CAD0
 * Callers:
 *     imp_WdfIoTargetOpen @ 0x1C002C9D0 (imp_WdfIoTargetOpen.c)
 *     ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x1C0075AB0 (-_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?GetTargetIoType@FxIoTarget@@IEAAEXZ @ 0x1C0026DE0 (-GetTargetIoType@FxIoTarget@@IEAAEXZ.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00273A8 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C002C5FC (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?SubmitPendedRequests@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002CD1C (-SubmitPendedRequests@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z @ 0x1C002CD4C (-GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z.c)
 *     ?Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ @ 0x1C002CE48 (-Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ.c)
 *     ?UnregisterForPnpNotification@FxIoTargetRemote@@QEAAXPEAX@Z @ 0x1C002CE8C (-UnregisterForPnpNotification@FxIoTargetRemote@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0036C00 (memset.c)
 *     memmove @ 0x1C0036E00 (memmove.c)
 *     ?Set@FxIoTargetRemoveOpenParams@@QEAAXPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAU_UNICODE_STRING@@PEAXK@Z @ 0x1C00751E0 (-Set@FxIoTargetRemoveOpenParams@@QEAAXPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAU_UNICODE_STRING@@PEAXK.c)
 *     ?OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoveOpenParams@@@Z @ 0x1C0075838 (-OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoveOpe.c)
 *     ?RegisterForPnpNotification@FxIoTargetRemote@@QEAAJXZ @ 0x1C0075A58 (-RegisterForPnpNotification@FxIoTargetRemote@@QEAAJXZ.c)
 */

__int64 __fastcall FxIoTargetRemote::Open(FxIoTargetRemote *this, _WDF_IO_TARGET_OPEN_PARAMS *OpenParams)
{
  unsigned __int8 v4; // r8
  _WDF_IO_TARGET_OPEN_TYPE Type; // r15d
  FX_POOL_TRACKER *v6; // rsi
  char v7; // r13
  unsigned __int8 v8; // r8
  signed int TargetDeviceRelations; // edi
  FxIoTargetRemote *v10; // rcx
  unsigned __int8 v11; // r8
  __int32 v12; // r15d
  _FILE_OBJECT *TargetFileObject; // rcx
  unsigned __int8 v14; // r14
  FxIoTargetRemote_vtbl *v15; // rax
  unsigned __int8 v16; // r8
  unsigned __int8 v17; // r8
  const void *ObjectHandleUnchecked; // rax
  const void *v20; // rax
  unsigned int EaBufferLength; // eax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int64 v23; // r9
  void *v24; // rax
  FX_POOL **v25; // rax
  const void *v26; // rax
  const void *v27; // rax
  unsigned __int16 v28; // r9
  unsigned int v29; // edx
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v31; // r10
  __int32 v32; // r15d
  FxIoTargetRemoveOpenParams *v33; // rcx
  const void *v34; // rax
  _FX_DRIVER_GLOBALS *v35; // r10
  const void *v36; // rax
  _FX_DRIVER_GLOBALS *v37; // r10
  unsigned int _a2; // [rsp+30h] [rbp-79h]
  unsigned int EaLength; // [rsp+40h] [rbp-69h]
  FxIoTargetRemoveOpenParams *pParams; // [rsp+48h] [rbp-61h]
  _LIST_ENTRY pended; // [rsp+50h] [rbp-59h] BYREF
  _UNICODE_STRING name; // [rsp+60h] [rbp-49h] BYREF
  __m128i v43; // [rsp+70h] [rbp-39h] BYREF
  FxIoTargetRemoveOpenParams params; // [rsp+80h] [rbp-29h] BYREF
  void *retaddr; // [rsp+108h] [rbp+5Fh]
  unsigned __int8 close; // [rsp+118h] [rbp+6Fh] BYREF
  unsigned __int8 irql; // [rsp+120h] [rbp+77h] BYREF
  char v48; // [rsp+128h] [rbp+7Fh]

  memset(&params, 0, sizeof(params));
  Type = OpenParams->Type;
  irql = 0;
  v48 = 0;
  close = 0;
  pended = 0LL;
  name = 0LL;
  if ( Type == WdfIoTargetOpenReopen )
  {
    if ( this->m_OpenParams.OpenType != WdfIoTargetOpenByName )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      TargetDeviceRelations = -1073741808;
      WPP_IFR_SF_qL(
        this->m_Globals,
        2u,
        0xEu,
        0xEu,
        WPP_FxIoTargetRemote_cpp_Traceguids,
        ObjectHandleUnchecked,
        0xC0000010);
      return (unsigned int)TargetDeviceRelations;
    }
    EaLength = 0;
    pParams = &this->m_OpenParams;
    Type = WdfIoTargetOpenByName;
    v6 = 0LL;
    v7 = 1;
  }
  else
  {
    EaLength = 0;
    pParams = &params;
    v6 = 0LL;
    v7 = 0;
    if ( Type == WdfIoTargetOpenByName )
    {
      TargetDeviceRelations = FxDuplicateUnicodeString(this->m_Globals, &OpenParams->TargetDeviceName, &name);
      if ( TargetDeviceRelations < 0 )
      {
        v20 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_q(this->m_Globals, 2u, 0xEu, 0xFu, WPP_FxIoTargetRemote_cpp_Traceguids, v20);
        v14 = v48;
        goto LABEL_33;
      }
      EaLength = 0;
      if ( OpenParams->EaBuffer )
      {
        EaBufferLength = OpenParams->EaBufferLength;
        EaLength = 0;
        if ( EaBufferLength )
        {
          m_Globals = this->m_Globals;
          v23 = EaBufferLength;
          v24 = retaddr;
          v43.m128i_i64[0] = 0LL;
          v43.m128i_i64[1] = 256LL;
          if ( !m_Globals->FxPoolTrackingOn )
            v24 = 0LL;
          v25 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v43, v23, m_Globals->Tag, v24);
          v6 = (FX_POOL_TRACKER *)v25;
          if ( !v25 )
          {
            v26 = (const void *)FxObject::GetObjectHandleUnchecked(this);
            WPP_IFR_SF_q(this->m_Globals, 2u, 0xEu, 0x10u, WPP_FxIoTargetRemote_cpp_Traceguids, v26);
            TargetDeviceRelations = -1073741670;
            goto LABEL_23;
          }
          EaLength = OpenParams->EaBufferLength;
          memmove(v25, OpenParams->EaBuffer, EaLength);
        }
      }
    }
  }
  FxNonPagedObject::Lock(this, &irql, v4);
  if ( this->m_State == WdfIoTargetDeleted )
  {
    v27 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v28 = 17;
    _a2 = 5;
LABEL_44:
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0xEu, v28, WPP_FxIoTargetRemote_cpp_Traceguids, v27, _a2);
    TargetDeviceRelations = -1073741436;
    goto LABEL_8;
  }
  if ( this->m_OpenState != 1 )
  {
    v27 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v28 = 18;
    _a2 = v29;
    goto LABEL_44;
  }
  if ( this->m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(v31, 5u, 0xEu, 0x13u, WPP_FxIoTargetRemote_cpp_Traceguids, _a1);
  }
  KeClearEvent(&this->m_OpenedEvent.m_Event.m_Event);
  TargetDeviceRelations = 0;
  this->m_OpenState = 2;
LABEL_8:
  FxNonPagedObject::Unlock(this, irql, v8);
  if ( TargetDeviceRelations >= 0 )
  {
    FxIoTargetRemote::UnregisterForPnpNotification(v10, this->m_TargetNotifyHandle);
    this->m_TargetNotifyHandle = 0LL;
    if ( !v7 )
      FxIoTargetRemoveOpenParams::Clear(&this->m_OpenParams);
    v12 = Type - 1;
    if ( !v12 )
    {
      this->m_TargetDevice = OpenParams->TargetDeviceObject;
      TargetFileObject = OpenParams->TargetFileObject;
      this->m_TargetHandle = 0LL;
      this->m_TargetFileObject = TargetFileObject;
      if ( TargetFileObject )
        ObfReferenceObject(TargetFileObject);
      goto LABEL_14;
    }
    v32 = v12 - 1;
    if ( v32 )
    {
      if ( v32 == 2 )
LABEL_14:
        TargetDeviceRelations = 0;
    }
    else
    {
      v33 = pParams;
      if ( !v7 )
        FxIoTargetRemoveOpenParams::Set(pParams, OpenParams, &name, v6, EaLength);
      TargetDeviceRelations = FxIoTargetRemote::OpenTargetHandle(this, OpenParams, v33);
      if ( TargetDeviceRelations < 0 )
      {
        v48 = 1;
        close = 1;
      }
      else if ( !v7 )
      {
        FxIoTargetRemoveOpenParams::Set(&this->m_OpenParams, OpenParams, &name, v6, EaLength);
        v6 = 0LL;
        name = 0LL;
      }
    }
    pended.Blink = &pended;
    pended.Flink = &pended;
    if ( TargetDeviceRelations < 0 )
    {
      v14 = v48;
    }
    else
    {
      TargetDeviceRelations = FxIoTargetRemote::GetTargetDeviceRelations(this, &close);
      if ( TargetDeviceRelations >= 0 && this->m_TargetFileObject )
      {
        if ( !v7 )
        {
          this->m_EvtQueryRemove.m_Method = OpenParams->EvtIoTargetQueryRemove;
          this->m_EvtRemoveCanceled.m_Method = OpenParams->EvtIoTargetRemoveCanceled;
          this->m_EvtRemoveComplete.m_Method = OpenParams->EvtIoTargetRemoveComplete;
        }
        TargetDeviceRelations = FxIoTargetRemote::RegisterForPnpNotification(this);
        if ( TargetDeviceRelations < 0 )
        {
          if ( this->m_Globals->FxVerboseOn )
          {
            v34 = (const void *)FxObject::GetObjectHandleUnchecked(this);
            WPP_IFR_SF_qL(v35, 5u, 0xEu, 0x14u, WPP_FxIoTargetRemote_cpp_Traceguids, v34, TargetDeviceRelations);
          }
          this->m_EvtQueryRemove.m_Method = 0LL;
          this->m_EvtRemoveCanceled.m_Method = 0LL;
          this->m_EvtRemoveComplete.m_Method = 0LL;
          TargetDeviceRelations = 0;
        }
      }
      v14 = close;
    }
    FxNonPagedObject::Lock(this, &irql, v11);
    if ( TargetDeviceRelations < 0 )
    {
      this->m_OpenState = 1;
    }
    else
    {
      this->m_TargetStackSize = this->m_TargetDevice->StackSize;
      this->m_TargetIoType = FxIoTarget::GetTargetIoType(this);
      v15 = this->__vftable;
      this->m_OpenState = 3;
      TargetDeviceRelations = v15->GotoStartState(this, &pended, 0);
      if ( TargetDeviceRelations < 0 )
      {
        if ( this->m_Globals->FxVerboseOn )
        {
          v36 = (const void *)FxObject::GetObjectHandleUnchecked(this);
          WPP_IFR_SF_qL(v37, 5u, 0xEu, 0x15u, WPP_FxIoTargetRemote_cpp_Traceguids, v36, TargetDeviceRelations);
        }
        v14 = 1;
      }
    }
    KeSetEvent(&this->m_OpenedEvent.m_Event.m_Event, 0, 0);
    FxNonPagedObject::Unlock(this, irql, v16);
    if ( TargetDeviceRelations >= 0 )
    {
      FxIoTarget::SubmitPendedRequests(this, &pended);
      goto LABEL_23;
    }
LABEL_33:
    if ( v14 )
      FxIoTargetRemote::Close(this, 2u, v17);
  }
LABEL_23:
  if ( name.Buffer )
    FxPoolFree((FX_POOL_TRACKER *)name.Buffer);
  if ( v6 )
    FxPoolFree(v6);
  return (unsigned int)TargetDeviceRelations;
}
