/*
 * XREFs of ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00803D0
 * Callers:
 *     ?Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00787C0 (-Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C008B560 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00595BC (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z @ 0x1C0081A50 (-RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z.c)
 *     ?RegisterPowerPolicyCallbacks@FxPkgPnp@@QEAAXPEAU_WDF_POWER_POLICY_EVENT_CALLBACKS@@@Z @ 0x1C0081BBC (-RegisterPowerPolicyCallbacks@FxPkgPnp@@QEAAXPEAU_WDF_POWER_POLICY_EVENT_CALLBACKS@@@Z.c)
 *     ?_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C008261C (-_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_A.c)
 *     ?QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ @ 0x1C00846D8 (-QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ.c)
 *     ??0FxPowerPolicyOwnerSettings@@QEAA@PEAVFxPkgPnp@@@Z @ 0x1C0085744 (--0FxPowerPolicyOwnerSettings@@QEAA@PEAVFxPkgPnp@@@Z.c)
 *     ?Init@FxPowerPolicyOwnerSettings@@QEAAJXZ @ 0x1C0085D10 (-Init@FxPowerPolicyOwnerSettings@@QEAAJXZ.c)
 */

int __fastcall FxPkgPnp::Initialize(FxPkgPnp *this, WDFDEVICE_INIT *DeviceInit)
{
  FxWaitLockInternal *p_m_QueryInterfaceLock; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxDevice *v6; // r8
  _WDF_OBJECT_ATTRIBUTES *v7; // r9
  _WDF_TRI_STATE PowerPolicyOwner; // eax
  char Raw; // al
  FX_POOL **v10; // rax
  int result; // eax
  FxObject **p_m_Resources; // rbx
  int v13; // eax
  FxObject *v14; // rcx
  int v15; // r14d
  __int64 v16; // rcx
  FxObject **p_m_ResourcesRaw; // rbx
  FxDevice *v18; // r8
  _WDF_OBJECT_ATTRIBUTES *v19; // r9
  int v20; // eax
  FxObject *v21; // rcx
  int v22; // ebp
  __int64 v23; // rcx
  int v24; // r10d
  void *Caller; // [rsp+38h] [rbp+0h]

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
      || (DeviceInit->InitType != FxDeviceInitTypePdo
        ? (Raw = DeviceInit->Fdo.Filter == 0)
        : (Raw = DeviceInit->Pdo.Raw),
          !Raw) )
    {
LABEL_13:
      p_m_Resources = &this->m_Resources;
      result = FxCmResList::_CreateAndInit(&this->m_Resources, m_Globals, v6, v7, 0);
      if ( result >= 0 )
      {
        v13 = FxObject::Commit(*p_m_Resources, 0LL, 0LL, this->m_DeviceBase, 1u);
        v14 = *p_m_Resources;
        v15 = v13;
        if ( v13 >= 0 )
        {
          FxObject::AddRef(v14, this, 581, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
          p_m_ResourcesRaw = &this->m_ResourcesRaw;
          result = FxCmResList::_CreateAndInit(&this->m_ResourcesRaw, m_Globals, v18, v19, 0);
          if ( result >= 0 )
          {
            v20 = FxObject::Commit(*p_m_ResourcesRaw, 0LL, 0LL, this->m_DeviceBase, 1u);
            v21 = *p_m_ResourcesRaw;
            v22 = v20;
            if ( v20 >= 0 )
            {
              FxObject::AddRef(v21, this, 610, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
              v24 = FxPkgPnp::RegisterCallbacks(this, &DeviceInit->PnpPower.PnpPowerEventCallbacks);
              if ( v24 >= 0 )
              {
                if ( this->m_PowerPolicyMachine.m_Owner )
                  FxPkgPnp::RegisterPowerPolicyCallbacks(this, &DeviceInit->PnpPower.PolicyEventCallbacks);
              }
              return v24;
            }
            else
            {
              FxObject::ClearEvtCallbacks(v21);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 48LL))(v23);
              *p_m_ResourcesRaw = 0LL;
              return v22;
            }
          }
        }
        else
        {
          FxObject::ClearEvtCallbacks(v14);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 48LL))(v16);
          *p_m_Resources = 0LL;
          return v15;
        }
      }
      return result;
    }
  }
  v10 = FxPoolAllocator(
          m_Globals,
          &m_Globals->FxPoolFrameworks,
          ExDefaultNonPagedPoolType,
          0x398uLL,
          m_Globals->Tag,
          Caller);
  if ( v10 )
    FxPowerPolicyOwnerSettings::FxPowerPolicyOwnerSettings((FxPowerPolicyOwnerSettings *)v10, this);
  this->m_PowerPolicyMachine.m_Owner = (FxPowerPolicyOwnerSettings *)v10;
  if ( !v10 )
    return -1073741670;
  result = FxPowerPolicyOwnerSettings::Init((FxPowerPolicyOwnerSettings *)v10);
  if ( result >= 0 )
  {
    FxPkgPnp::QueryForD3ColdInterface(this);
    goto LABEL_13;
  }
  return result;
}
