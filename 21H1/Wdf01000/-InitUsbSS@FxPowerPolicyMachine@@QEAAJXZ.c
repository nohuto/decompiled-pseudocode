/*
 * XREFs of ?InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ @ 0x1C0086700
 * Callers:
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C000F168 (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ??_GFxUsbIdleInfo@@QEAAPEAXI@Z @ 0x1C0086314 (--_GFxUsbIdleInfo@@QEAAPEAXI@Z.c)
 *     ?Initialize@FxUsbIdleInfo@@QEAAJXZ @ 0x1C008C470 (-Initialize@FxUsbIdleInfo@@QEAAJXZ.c)
 */

__int64 __fastcall FxPowerPolicyMachine::InitUsbSS(FxPowerPolicyMachine *this)
{
  FxUsbIdleInfo *v2; // rbx
  FxPkgPnp *m_PkgPnp; // rax
  int v5; // esi
  void *Caller; // [rsp+38h] [rbp+0h]

  if ( !this->m_Owner->m_UsbIdle )
  {
    v2 = (FxUsbIdleInfo *)FxPoolAllocator(
                            this->m_PkgPnp->m_Globals,
                            &this->m_PkgPnp->m_Globals->FxPoolFrameworks,
                            ExDefaultNonPagedPoolType,
                            0x28uLL,
                            this->m_PkgPnp->m_Globals->Tag,
                            Caller);
    if ( v2 )
    {
      m_PkgPnp = this->m_PkgPnp;
      v2->m_IdleCallbackEvent = 0LL;
      v2->m_IdleIrp.m_Irp = 0LL;
      v2->m_CallbackInfo.IdleCallback = FxUsbIdleInfo::_UsbIdleCallback;
      v2->m_CallbackInfo.IdleContext = m_PkgPnp;
      v2->m_EventDropped = 0;
    }
    else
    {
      v2 = 0LL;
    }
    if ( !v2 )
      return 3221225626LL;
    v5 = FxUsbIdleInfo::Initialize(v2);
    if ( v5 < 0 )
    {
      FxUsbIdleInfo::`scalar deleting destructor'(v2);
      return (unsigned int)v5;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_Owner->m_UsbIdle, (signed __int64)v2, 0LL) )
      FxUsbIdleInfo::`scalar deleting destructor'(v2);
  }
  return 0LL;
}
