/*
 * XREFs of ?PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z @ 0x1C00817D0
 * Callers:
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x1C0081504 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 *     ?_SxWakeSetInstance@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KPEAX@Z @ 0x1C0082AF0 (-_SxWakeSetInstance@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KPEAX@Z.c)
 *     ?_SxWakeSetItem@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KKPEAX@Z @ 0x1C0082B20 (-_SxWakeSetItem@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KKPEAX@Z.c)
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000EC9C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x1C0010910 (-SaveState@FxPkgPnp@@IEAAXE@Z.c)
 */

void __fastcall FxPkgPnp::PowerPolicySetSxWakeState(FxPkgPnp *this, _FX_DRIVER_GLOBALS *State)
{
  FxWaitLockInternal *p_m_StateMachineLock; // rdi
  int v4; // eax
  __int64 timeout; // [rsp+30h] [rbp+8h] BYREF

  LOBYTE(State) = (_BYTE)State != 0;
  this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.Enabled = (unsigned __int8)State;
  this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.Dirty = 1;
  if ( !KeGetCurrentIrql() )
  {
    timeout = 0LL;
    p_m_StateMachineLock = &this->m_PowerPolicyMachine.m_StateMachineLock;
    v4 = FxWaitLockInternal::AcquireLock(
           &this->m_PowerPolicyMachine.m_StateMachineLock,
           State,
           (_LARGE_INTEGER *)&timeout);
    if ( v4 >= 0 && v4 != 258 )
    {
      FxPkgPnp::SaveState(this, 1u);
      p_m_StateMachineLock->m_OwningThread = 0LL;
      KeSetEvent(&p_m_StateMachineLock->m_Event.m_Event, 0, 0);
      KeLeaveCriticalRegion();
    }
  }
}
