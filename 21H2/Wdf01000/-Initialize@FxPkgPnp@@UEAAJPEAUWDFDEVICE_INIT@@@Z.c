/*
 * XREFs of ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00225C0
 * Callers:
 *     ?Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0020F60 (-Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0022B80 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C00196F8 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ??0FxPowerPolicyOwnerSettings@@QEAA@PEAVFxPkgPnp@@@Z @ 0x1C0021F8C (--0FxPowerPolicyOwnerSettings@@QEAA@PEAVFxPkgPnp@@@Z.c)
 *     ?Init@FxPowerPolicyOwnerSettings@@QEAAJXZ @ 0x1C00221E0 (-Init@FxPowerPolicyOwnerSettings@@QEAAJXZ.c)
 *     ?QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ @ 0x1C0022328 (-QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ.c)
 *     ?RegisterPowerPolicyCallbacks@FxPkgPnp@@QEAAXPEAU_WDF_POWER_POLICY_EVENT_CALLBACKS@@@Z @ 0x1C00224B4 (-RegisterPowerPolicyCallbacks@FxPkgPnp@@QEAAXPEAU_WDF_POWER_POLICY_EVENT_CALLBACKS@@@Z.c)
 *     ?_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C0022804 (-_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_A.c)
 *     ?RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z @ 0x1C002294C (-RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall FxPkgPnp::Initialize(FxPkgPnp *this, WDFDEVICE_INIT *DeviceInit)
{
  FxWaitLockInternal *p_m_QueryInterfaceLock; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxDevice *v6; // r8
  _WDF_OBJECT_ATTRIBUTES *v7; // r9
  _WDF_TRI_STATE PowerPolicyOwner; // eax
  char Raw; // al
  bool v10; // zf
  ULONG Tag; // ecx
  void *v12; // rax
  FX_POOL **v13; // rax
  int result; // eax
  FxObject **p_m_Resources; // rbx
  int v16; // eax
  FxObject *v17; // rcx
  int v18; // r14d
  FxObject **p_m_ResourcesRaw; // rbx
  FxDevice *v20; // r8
  _WDF_OBJECT_ATTRIBUTES *v21; // r9
  int v22; // eax
  FxObject *v23; // rcx
  int v24; // ebp
  int v25; // r10d
  __int64 v26; // rcx
  __int64 v27; // rcx
  __m128i v28; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  p_m_QueryInterfaceLock = &this->m_QueryInterfaceLock;
  m_Globals = this->m_Globals;
  this->m_ReleaseHardwareAfterDescendantsOnFailure = DeviceInit->ReleaseHardwareOrderOnFailure == WdfReleaseHardwareOrderOnFailureAfterDescendants;
  KeInitializeEvent(&this->m_QueryInterfaceLock.m_Event.m_Event, SynchronizationEvent, 1u);
  p_m_QueryInterfaceLock->m_Event.m_DbgFlagIsInitialized = 1;
  KeInitializeEvent(&this->m_DeviceInterfaceLock.m_Event.m_Event, SynchronizationEvent, 1u);
  this->m_DeviceInterfaceLock.m_Event.m_DbgFlagIsInitialized = 1;
  PowerPolicyOwner = DeviceInit->PnpPower.PowerPolicyOwner;
  if ( PowerPolicyOwner != WdfTrue )
  {
    if ( PowerPolicyOwner == WdfFalse
      || (DeviceInit->InitType == FxDeviceInitTypePdo
        ? (Raw = DeviceInit->Pdo.Raw)
        : (Raw = DeviceInit->Fdo.Filter == 0),
          !Raw) )
    {
LABEL_13:
      p_m_Resources = &this->m_Resources;
      result = FxCmResList::_CreateAndInit(&this->m_Resources, m_Globals, v6, v7, 0);
      if ( result >= 0 )
      {
        v16 = FxObject::Commit(*p_m_Resources, 0LL, 0LL, this->m_DeviceBase, 1u);
        v17 = *p_m_Resources;
        v18 = v16;
        if ( v16 < 0 )
        {
          FxObject::ClearEvtCallbacks(v17);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 48LL))(v26);
          *p_m_Resources = 0LL;
          return v18;
        }
        else
        {
          FxObject::AddRef(v17, this, 587, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
          p_m_ResourcesRaw = &this->m_ResourcesRaw;
          result = FxCmResList::_CreateAndInit(&this->m_ResourcesRaw, m_Globals, v20, v21, 0);
          if ( result >= 0 )
          {
            v22 = FxObject::Commit(*p_m_ResourcesRaw, 0LL, 0LL, this->m_DeviceBase, 1u);
            v23 = *p_m_ResourcesRaw;
            v24 = v22;
            if ( v22 < 0 )
            {
              FxObject::ClearEvtCallbacks(v23);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 48LL))(v27);
              *p_m_ResourcesRaw = 0LL;
              return v24;
            }
            else
            {
              FxObject::AddRef(v23, this, 616, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
              v25 = FxPkgPnp::RegisterCallbacks(this, &DeviceInit->PnpPower.PnpPowerEventCallbacks);
              if ( v25 >= 0 )
              {
                if ( this->m_PowerPolicyMachine.m_Owner )
                  FxPkgPnp::RegisterPowerPolicyCallbacks(this, &DeviceInit->PnpPower.PolicyEventCallbacks);
              }
              return v25;
            }
          }
        }
      }
      return result;
    }
  }
  v10 = m_Globals->FxPoolTrackingOn == 0;
  Tag = m_Globals->Tag;
  v28.m128i_i64[0] = 0LL;
  v28.m128i_i64[1] = 64LL;
  if ( v10 )
    v12 = 0LL;
  else
    v12 = retaddr;
  v13 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v28, 0x3A8uLL, Tag, v12);
  if ( v13 )
    FxPowerPolicyOwnerSettings::FxPowerPolicyOwnerSettings((FxPowerPolicyOwnerSettings *)v13, this);
  this->m_PowerPolicyMachine.m_Owner = (FxPowerPolicyOwnerSettings *)v13;
  if ( !v13 )
    return -1073741670;
  result = FxPowerPolicyOwnerSettings::Init((FxPowerPolicyOwnerSettings *)v13);
  if ( result >= 0 )
  {
    FxPkgPnp::QueryForD3ColdInterface(this);
    goto LABEL_13;
  }
  return result;
}
