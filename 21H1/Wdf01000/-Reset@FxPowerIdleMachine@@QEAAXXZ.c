/*
 * XREFs of ?Reset@FxPowerIdleMachine@@QEAAXXZ @ 0x1C0083C7C
 * Callers:
 *     ?PnpEventPdoRestart@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007A8D0 (-PnpEventPdoRestart@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?Init@FxPowerPolicyOwnerSettings@@QEAAJXZ @ 0x1C00865F0 (-Init@FxPowerPolicyOwnerSettings@@QEAAJXZ.c)
 * Callees:
 *     ?SendD0Notification@FxPowerIdleMachine@@IEAAXXZ @ 0x1C0018774 (-SendD0Notification@FxPowerIdleMachine@@IEAAXXZ.c)
 *     ?CreateAndInitialize@FxTagTracker@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x1C0059ED0 (-CreateAndInitialize@FxTagTracker@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAV.c)
 */

void __fastcall FxPowerIdleMachine::Reset(FxPowerIdleMachine *this)
{
  FxTagTracker *m_TagTracker; // r8
  _FX_DRIVER_GLOBALS *m_OwningObject; // rdx
  FxDriverGlobalsDebugExtension *DebugExtension; // rax
  FxTrackPowerOption TrackPower; // cl

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
        (FxObject *)m_TagTracker->m_TagHistory[0].Tag);
  }
  FxPowerIdleMachine::SendD0Notification(this);
}
