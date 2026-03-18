/*
 * XREFs of ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x1C0087FA0
 * Callers:
 *     ?PowerPolSleepingWakeRevertArmWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0086600 (-PowerPolSleepingWakeRevertArmWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakeRevertArmWakeNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0086650 (-PowerPolSleepingWakeRevertArmWakeNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemWakeDeviceWakeDisarm@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0087070 (-PowerPolSystemWakeDeviceWakeDisarm@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemWakeDeviceWokeDisarm@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00871C0 (-PowerPolSystemWakeDeviceWokeDisarm@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C0010BF4 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0010CEC (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0010DB0 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C0016EE8 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?IndicateWakeStatus@FxChildList@@QEAAXJ@Z @ 0x1C003AF70 (-IndicateWakeStatus@FxChildList@@QEAAXJ@Z.c)
 */

void __fastcall FxPkgPnp::PowerPolicyDisarmWakeFromSx(FxPkgPnp *this)
{
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v3; // rdx
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  FxPowerPolicyOwnerSettings *v5; // rax
  int m_WaitWakeStatus; // esi
  FxEnumerationInfo *m_EnumInfo; // rdx
  FxTransactionedEntry *i; // rdx
  FxTransactionedEntry *NextEntryLocked; // rax
  __int64 v10; // r8
  FxTransactionedEntry *v11; // rdi

  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  *(_QWORD *)(v3 + 528) = ObjectHandleUnchecked;
  FxPrePostCallback::InvokeStateless((FxPrePostCallback *)(v3 + 496));
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  v5 = m_Owner;
  m_WaitWakeStatus = m_Owner->m_WaitWakeStatus;
  if ( m_WaitWakeStatus != -1073741536 )
  {
    m_EnumInfo = this->m_EnumInfo;
    if ( m_EnumInfo )
    {
      if ( m_Owner->m_WakeSettings.IndicateChildWakeOnParentWake )
      {
        FxTransactionedList::LockForEnum(&m_EnumInfo->m_ChildListList, this->m_Globals);
        for ( i = 0LL; ; i = v11 )
        {
          NextEntryLocked = FxTransactionedList::GetNextEntryLocked(&this->m_EnumInfo->m_ChildListList, i);
          v11 = NextEntryLocked;
          if ( !NextEntryLocked )
            break;
          FxChildList::IndicateWakeStatus((FxChildList *)NextEntryLocked->m_TransactionedObject, m_WaitWakeStatus);
        }
        FxTransactionedList::UnlockFromEnum((FxTransactionedList *)(v10 + 40), this->m_Globals);
        v5 = this->m_PowerPolicyMachine.m_Owner;
      }
    }
  }
  v5->m_WaitWakeStatus = -1073741637;
  this->m_PowerPolicyMachine.m_Owner->m_SystemWakeSource = 0;
}
