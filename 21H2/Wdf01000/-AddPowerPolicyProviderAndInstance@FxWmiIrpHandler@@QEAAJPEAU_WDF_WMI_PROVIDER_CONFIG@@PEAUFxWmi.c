/*
 * XREFs of ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C002FF30
 * Callers:
 *     ?RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C002FEA0 (-RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PE.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C00065CC (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     FxIsEqualGuid @ 0x1C001C72C (FxIsEqualGuid.c)
 *     ?FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z @ 0x1C001CFC0 (-FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z.c)
 *     ?AddInstanceLocked@FxWmiProvider@@IEAAJPEAVFxWmiInstance@@EPEAEW4AddInstanceAction@1@@Z @ 0x1C001D184 (-AddInstanceLocked@FxWmiProvider@@IEAAJPEAVFxWmiInstance@@EPEAEW4AddInstanceAction@1@@Z.c)
 *     ?AddProviderLocked@FxWmiIrpHandler@@IEAAJPEAVFxWmiProvider@@EPEAE@Z @ 0x1C00260C4 (-AddProviderLocked@FxWmiIrpHandler@@IEAAJPEAVFxWmiProvider@@EPEAE@Z.c)
 *     ??0FxWmiProvider@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAVFxDevice@@@Z @ 0x1C0026138 (--0FxWmiProvider@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAVFxDevice@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     ??0FxWmiInstanceInternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxWmiInstanceInternalCallbacks@@PEAVFxWmiProvider@@@Z @ 0x1C003013C (--0FxWmiInstanceInternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxWmiInstanceInternalCallbacks@@PEAVF.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z @ 0x1C005F168 (-DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x1C005F37C (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 */

__int64 __fastcall FxWmiIrpHandler::AddPowerPolicyProviderAndInstance(
        FxWmiIrpHandler *this,
        _WDF_WMI_PROVIDER_CONFIG *ProviderConfig,
        FxWmiInstanceInternalCallbacks *InstanceCallbacks,
        FxWmiInstanceInternal **Instance)
{
  char v5; // r13
  unsigned __int8 updated; // r12
  FxWmiInstance *v7; // rsi
  FxWmiInstanceInternalCallbacks *v8; // r15
  FxWmiProvider *ProviderLocked; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxWmiProvider *v12; // rax
  unsigned __int8 v13; // r8
  FxWmiProvider *v14; // rax
  int v15; // ebx
  _FX_DRIVER_GLOBALS *v16; // rcx
  FxWmiInstanceInternal *v17; // rax
  FxObject *v18; // rax
  signed __int64 v19; // r15
  _LIST_ENTRY *p_m_ListEntry; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 PreviousIrql[16]; // [rsp+48h] [rbp-29h] BYREF
  FxPoolTypeOrPoolFlags v25; // [rsp+58h] [rbp-19h]
  FxPoolTypeOrPoolFlags v26; // [rsp+68h] [rbp-9h]
  FxPoolTypeOrPoolFlags v27; // [rsp+78h] [rbp+7h] BYREF
  FxPoolTypeOrPoolFlags v28; // [rsp+88h] [rbp+17h] BYREF
  unsigned __int8 update; // [rsp+E0h] [rbp+6Fh] BYREF
  FxWmiInstanceInternalCallbacks *Callbacks; // [rsp+E8h] [rbp+77h]
  volatile signed __int64 *v31; // [rsp+F0h] [rbp+7Fh]

  v31 = (volatile signed __int64 *)Instance;
  Callbacks = InstanceCallbacks;
  PreviousIrql[0] = 0;
  v5 = 0;
  update = 0;
  updated = 0;
  v7 = 0LL;
  v8 = InstanceCallbacks;
  FxNonPagedObject::Lock(this, PreviousIrql, (unsigned __int8)InstanceCallbacks);
  ProviderLocked = (FxWmiProvider *)FxWmiIrpHandler::FindProviderLocked(this, &ProviderConfig->Guid);
  if ( ProviderLocked )
  {
    if ( ProviderLocked->m_NumInstances
      && (FxIsEqualGuid(&ProviderLocked->m_Guid, &GUID_POWER_DEVICE_ENABLE)
       || FxIsEqualGuid(&ProviderLocked->m_Guid, &GUID_POWER_DEVICE_WAKE_ENABLE)) )
    {
      WPP_IFR_SF_(this->m_Globals, 2u, 0xDu, 0xDu, WPP_FxWmiIrpHandler_cpp_Traceguids);
      v15 = -1073741055;
      goto LABEL_14;
    }
    goto LABEL_7;
  }
  m_Globals = this->m_Globals;
  *(_QWORD *)&v25.UsePoolType = 0LL;
  v25.u.PoolFlags = 64LL;
  v27 = v25;
  v12 = (FxWmiProvider *)FxObjectHandleAllocCommon(m_Globals, &v27, 0xD8uLL, 0, 0LL, 0, FxObjectTypeExternal);
  if ( !v12 )
  {
    ProviderLocked = 0LL;
    goto LABEL_19;
  }
  FxWmiProvider::FxWmiProvider(v12, this->m_Globals, ProviderConfig, this->m_Device);
  ProviderLocked = v14;
  if ( !v14 )
  {
LABEL_19:
    v15 = -1073741670;
    goto LABEL_14;
  }
  v5 = 1;
  v15 = FxWmiIrpHandler::AddProviderLocked(this, v14, PreviousIrql[0], 0LL);
  if ( v15 < 0 )
    goto LABEL_14;
  v15 = FxObject::AssignParentObject(ProviderLocked, this->m_DeviceBase);
  if ( v15 < 0 )
    goto LABEL_27;
  v8 = Callbacks;
LABEL_7:
  v16 = this->m_Globals;
  *(_QWORD *)&v26.UsePoolType = 0LL;
  v26.u.PoolFlags = 64LL;
  v28 = v26;
  v17 = (FxWmiInstanceInternal *)FxObjectHandleAllocCommon(v16, &v28, 0xB0uLL, 0, 0LL, 0, FxObjectTypeExternal);
  if ( v17
    && (FxWmiInstanceInternal::FxWmiInstanceInternal(v17, this->m_Globals, v8, ProviderLocked),
        v19 = (signed __int64)v18,
        (v7 = (FxWmiInstance *)v18) != 0LL) )
  {
    v15 = FxObject::AssignParentObject(v18, ProviderLocked);
    if ( v15 >= 0 )
    {
      if ( _InterlockedCompareExchange64(v31, v19, 0LL) )
      {
        updated = update;
        v15 = -1073741771;
      }
      else
      {
        v15 = FxWmiProvider::AddInstanceLocked(ProviderLocked, v7, 0, &update, AddInstanceToHead);
        updated = update;
        if ( v15 >= 0 )
        {
          if ( update )
            updated = FxWmiIrpHandler::DeferUpdateLocked(this, PreviousIrql[0]);
          goto LABEL_14;
        }
      }
    }
  }
  else
  {
    v15 = -1073741670;
  }
  if ( !v5 )
    goto LABEL_14;
LABEL_27:
  --this->m_NumProviders;
  p_m_ListEntry = &ProviderLocked->m_ListEntry;
  Flink = ProviderLocked->m_ListEntry.Flink;
  if ( Flink->Blink != &ProviderLocked->m_ListEntry
    || (Blink = ProviderLocked->m_ListEntry.Blink, Blink->Flink != p_m_ListEntry) )
  {
    __fastfail(3u);
  }
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  ProviderLocked->m_ListEntry.Blink = &ProviderLocked->m_ListEntry;
  p_m_ListEntry->Flink = p_m_ListEntry;
LABEL_14:
  FxNonPagedObject::Unlock(this, PreviousIrql[0], v13);
  if ( v15 < 0 )
  {
    if ( v7 )
      v7->DeleteObject(v7);
    if ( v5 )
      ProviderLocked->DeleteObject(ProviderLocked);
  }
  else if ( updated )
  {
    FxWmiIrpHandler::UpdateGuids(this);
  }
  return (unsigned int)v15;
}
