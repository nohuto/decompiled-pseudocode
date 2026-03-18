/*
 * XREFs of ?Reset@FxPowerIdleMachine@@QEAAXXZ @ 0x1C00222E4
 * Callers:
 *     ?Init@FxPowerPolicyOwnerSettings@@QEAAJXZ @ 0x1C00221E0 (-Init@FxPowerPolicyOwnerSettings@@QEAAJXZ.c)
 *     ?PnpEventPdoRestart@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0084140 (-PnpEventPdoRestart@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?SendD0Notification@FxPowerIdleMachine@@IEAAXXZ @ 0x1C0011F68 (-SendD0Notification@FxPowerIdleMachine@@IEAAXXZ.c)
 *     ?CreateAndInitialize@FxTagTracker@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x1C006CF54 (-CreateAndInitialize@FxTagTracker@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAV.c)
 */

void __fastcall FxPowerIdleMachine::Reset(FxPowerIdleMachine *this)
{
  FxTagTracker *m_TagTracker; // r8
  _FX_DRIVER_GLOBALS *m_OwningObject; // rdx
  FxDriverGlobalsDebugExtension *DebugExtension; // rax
  FxTrackPowerOption TrackPower; // cl
  void *v6; // [rsp+28h] [rbp-10h]

  this->m_IoCount = 0;
  m_TagTracker = this[2].m_TagTracker;
  this->m_Flags = 0;
  m_OwningObject = (_FX_DRIVER_GLOBALS *)m_TagTracker->m_OwningObject;
  DebugExtension = m_OwningObject->DebugExtension;
  if ( DebugExtension )
  {
    TrackPower = DebugExtension->TrackPower;
    if ( TrackPower )
      FxTagTracker::CreateAndInitialize(
        &this->m_TagTracker,
        m_OwningObject,
        FxTagTrackerTypePower,
        TrackPower == FxTrackPowerRefsAndStack,
        (FxObject *)m_TagTracker->m_TagHistory[0].Tag,
        v6);
  }
  FxPowerIdleMachine::SendD0Notification(this);
}
