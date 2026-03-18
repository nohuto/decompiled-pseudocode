/*
 * XREFs of ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C0066750
 * Callers:
 *     imp_WdfIoTargetOpen @ 0x1C0062D60 (imp_WdfIoTargetOpen.c)
 *     ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x1C0067A70 (-_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001CA80 (memset.c)
 *     memmove @ 0x1C001CB80 (memmove.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00612BC (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?GetTargetIoType@FxIoTarget@@IEAAEXZ @ 0x1C0064570 (-GetTargetIoType@FxIoTarget@@IEAAEXZ.c)
 *     ?SubmitPendedRequests@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C006558C (-SubmitPendedRequests@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ @ 0x1C00661A4 (-Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C00662CC (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?Set@FxIoTargetRemoveOpenParams@@QEAAXPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAU_UNICODE_STRING@@PEAXK@Z @ 0x1C0066CEC (-Set@FxIoTargetRemoveOpenParams@@QEAAXPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAU_UNICODE_STRING@@PEAXK.c)
 *     ?GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z @ 0x1C0067684 (-GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z.c)
 *     ?OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoveOpenParams@@@Z @ 0x1C00677B8 (-OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoveOpe.c)
 *     ?RegisterForPnpNotification@FxIoTargetRemote@@QEAAJXZ @ 0x1C00679D8 (-RegisterForPnpNotification@FxIoTargetRemote@@QEAAJXZ.c)
 *     ?UnregisterForPnpNotification@FxIoTargetRemote@@QEAAXPEAX@Z @ 0x1C0067A2C (-UnregisterForPnpNotification@FxIoTargetRemote@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall FxIoTargetRemote::Open(FxIoTargetRemote *this, _WDF_IO_TARGET_OPEN_PARAMS *OpenParams)
{
  unsigned __int8 v4; // r8
  _WDF_IO_TARGET_OPEN_TYPE Type; // r13d
  unsigned __int8 v6; // r12
  const void *_a1; // rax
  signed int TargetDeviceRelations; // edi
  int v9; // r15d
  const void *ObjectHandleUnchecked; // rax
  unsigned __int8 v11; // r8
  unsigned int EaBufferLength; // edx
  FX_POOL **v13; // rax
  const void *v14; // rax
  void *EaBuffer; // rdx
  const void *v16; // rax
  unsigned __int16 v17; // r9
  unsigned int v18; // edx
  unsigned __int8 v19; // r8
  const void *v20; // rax
  _FX_DRIVER_GLOBALS *v21; // r10
  FxIoTargetRemote *v22; // rcx
  unsigned __int8 v23; // r8
  int v24; // r15d
  int v25; // r15d
  FxIoTargetRemoveOpenParams *v26; // rcx
  _FILE_OBJECT *TargetFileObject; // rcx
  const void *v28; // rax
  _FX_DRIVER_GLOBALS *v29; // r10
  FxIoTargetRemote_vtbl *v30; // rax
  const void *v31; // rax
  _FX_DRIVER_GLOBALS *v32; // r10
  unsigned __int8 v33; // r8
  unsigned int _a2; // [rsp+30h] [rbp-69h]
  FX_POOL_TRACKER *Ea; // [rsp+40h] [rbp-59h]
  FxIoTargetRemoveOpenParams *pParams; // [rsp+48h] [rbp-51h]
  _LIST_ENTRY pended; // [rsp+50h] [rbp-49h] BYREF
  _UNICODE_STRING name; // [rsp+60h] [rbp-39h] BYREF
  FxIoTargetRemoveOpenParams params; // [rsp+70h] [rbp-29h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+5Fh]
  unsigned __int8 close; // [rsp+108h] [rbp+6Fh] BYREF
  unsigned __int8 irql; // [rsp+110h] [rbp+77h] BYREF
  unsigned int EaLength; // [rsp+118h] [rbp+7Fh]

  memset(&params, 0, sizeof(params));
  Type = OpenParams->Type;
  irql = 0;
  close = 0;
  v6 = 0;
  Ea = 0LL;
  EaLength = 0;
  pended = 0LL;
  name = 0LL;
  if ( Type == WdfIoTargetOpenReopen )
  {
    if ( this->m_OpenParams.OpenType != WdfIoTargetOpenByName )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      TargetDeviceRelations = -1073741808;
      WPP_IFR_SF_qL(this->m_Globals, 2u, 0xEu, 0xEu, WPP_FxIoTargetRemote_cpp_Traceguids, _a1, 0xC0000010);
      return (unsigned int)TargetDeviceRelations;
    }
    v9 = 2;
    pParams = &this->m_OpenParams;
  }
  else
  {
    v9 = Type;
    pParams = &params;
    if ( Type == WdfIoTargetOpenByName )
    {
      TargetDeviceRelations = FxDuplicateUnicodeString(this->m_Globals, &OpenParams->TargetDeviceName, &name);
      if ( TargetDeviceRelations < 0 )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_q(this->m_Globals, 2u, 0xEu, 0xFu, WPP_FxIoTargetRemote_cpp_Traceguids, ObjectHandleUnchecked);
$Done_45:
        if ( TargetDeviceRelations < 0 )
        {
          if ( v6 )
            FxIoTargetRemote::Close(this, 2u, v11);
        }
        else
        {
          FxIoTarget::SubmitPendedRequests(this, &pended);
        }
        goto LABEL_58;
      }
      if ( OpenParams->EaBuffer )
      {
        EaBufferLength = OpenParams->EaBufferLength;
        if ( EaBufferLength )
        {
          v13 = FxPoolAllocator(
                  this->m_Globals,
                  &this->m_Globals->FxPoolFrameworks,
                  1u,
                  EaBufferLength,
                  this->m_Globals->Tag,
                  retaddr);
          Ea = (FX_POOL_TRACKER *)v13;
          if ( !v13 )
          {
            v14 = (const void *)FxObject::GetObjectHandleUnchecked(this);
            WPP_IFR_SF_q(this->m_Globals, 2u, 0xEu, 0x10u, WPP_FxIoTargetRemote_cpp_Traceguids, v14);
            TargetDeviceRelations = -1073741670;
            goto LABEL_58;
          }
          EaBuffer = OpenParams->EaBuffer;
          EaLength = OpenParams->EaBufferLength;
          memmove(v13, EaBuffer, EaLength);
        }
      }
    }
  }
  FxNonPagedObject::Lock(this, &irql, v4);
  if ( this->m_State == WdfIoTargetDeleted )
  {
    v16 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v17 = 17;
    _a2 = 5;
LABEL_17:
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0xEu, v17, WPP_FxIoTargetRemote_cpp_Traceguids, v16, _a2);
    TargetDeviceRelations = -1073741436;
    goto LABEL_21;
  }
  if ( this->m_OpenState != 1 )
  {
    v16 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v17 = 18;
    _a2 = v18;
    goto LABEL_17;
  }
  if ( this->m_Globals->FxVerboseOn )
  {
    v20 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(v21, 5u, 0xEu, 0x13u, WPP_FxIoTargetRemote_cpp_Traceguids, v20);
  }
  KeClearEvent(&this->m_OpenedEvent.m_Event.m_Event);
  TargetDeviceRelations = 0;
  this->m_OpenState = 2;
LABEL_21:
  FxNonPagedObject::Unlock(this, irql, v19);
  if ( TargetDeviceRelations >= 0 )
  {
    FxIoTargetRemote::UnregisterForPnpNotification(v22, this->m_TargetNotifyHandle);
    this->m_TargetNotifyHandle = 0LL;
    if ( Type != WdfIoTargetOpenReopen )
      FxIoTargetRemoveOpenParams::Clear(&this->m_OpenParams);
    v24 = v9 - 1;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( !v25 )
      {
        v26 = pParams;
        if ( Type != WdfIoTargetOpenReopen )
          FxIoTargetRemoveOpenParams::Set(pParams, OpenParams, &name, Ea, EaLength);
        TargetDeviceRelations = FxIoTargetRemote::OpenTargetHandle(this, OpenParams, v26);
        if ( TargetDeviceRelations < 0 )
        {
          v6 = 1;
          close = 1;
        }
        else if ( Type != WdfIoTargetOpenReopen )
        {
          FxIoTargetRemoveOpenParams::Set(&this->m_OpenParams, OpenParams, &name, Ea, EaLength);
          Ea = 0LL;
          name = 0LL;
        }
        goto LABEL_37;
      }
      if ( v25 != 2 )
      {
LABEL_37:
        pended.Blink = &pended;
        pended.Flink = &pended;
        if ( TargetDeviceRelations >= 0 )
        {
          TargetDeviceRelations = FxIoTargetRemote::GetTargetDeviceRelations(this, &close);
          if ( TargetDeviceRelations >= 0 && this->m_TargetFileObject )
          {
            if ( Type != WdfIoTargetOpenReopen )
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
                v28 = (const void *)FxObject::GetObjectHandleUnchecked(this);
                WPP_IFR_SF_qL(v29, 5u, 0xEu, 0x14u, WPP_FxIoTargetRemote_cpp_Traceguids, v28, TargetDeviceRelations);
              }
              this->m_EvtQueryRemove.m_Method = 0LL;
              this->m_EvtRemoveCanceled.m_Method = 0LL;
              this->m_EvtRemoveComplete.m_Method = 0LL;
              TargetDeviceRelations = 0;
            }
          }
          v6 = close;
        }
        FxNonPagedObject::Lock(this, &irql, v23);
        if ( TargetDeviceRelations < 0 )
        {
          this->m_OpenState = 1;
        }
        else
        {
          this->m_TargetStackSize = this->m_TargetDevice->StackSize;
          this->m_TargetIoType = FxIoTarget::GetTargetIoType(this);
          v30 = this->__vftable;
          this->m_OpenState = 3;
          TargetDeviceRelations = v30->GotoStartState(this, &pended, 0);
          if ( TargetDeviceRelations < 0 )
          {
            if ( this->m_Globals->FxVerboseOn )
            {
              v31 = (const void *)FxObject::GetObjectHandleUnchecked(this);
              WPP_IFR_SF_qL(v32, 5u, 0xEu, 0x15u, WPP_FxIoTargetRemote_cpp_Traceguids, v31, TargetDeviceRelations);
            }
            v6 = 1;
          }
        }
        KeSetEvent(&this->m_OpenedEvent.m_Event.m_Event, 0, 0);
        FxNonPagedObject::Unlock(this, irql, v33);
        goto $Done_45;
      }
    }
    else
    {
      this->m_TargetDevice = OpenParams->TargetDeviceObject;
      TargetFileObject = OpenParams->TargetFileObject;
      this->m_TargetHandle = 0LL;
      this->m_TargetFileObject = TargetFileObject;
      if ( TargetFileObject )
        ObfReferenceObject(TargetFileObject);
    }
    TargetDeviceRelations = 0;
    goto LABEL_37;
  }
LABEL_58:
  if ( name.Buffer )
    FxPoolFree((FX_POOL_TRACKER *)name.Buffer);
  if ( Ea )
    FxPoolFree(Ea);
  return (unsigned int)TargetDeviceRelations;
}
