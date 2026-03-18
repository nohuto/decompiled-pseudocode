/*
 * XREFs of ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x1C0017128
 * Callers:
 *     ?PowerPolicyChildPoweredDown@FxPkgPnp@@QEAAXXZ @ 0x1C000E440 (-PowerPolicyChildPoweredDown@FxPkgPnp@@QEAAXXZ.c)
 *     ResumeIdleWorker @ 0x1C0011760 (ResumeIdleWorker.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C001C83C (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpPowerDereferenceSelf@FxPkgPnp@@AEAAXXZ @ 0x1C0088810 (-PnpPowerDereferenceSelf@FxPkgPnp@@AEAAXXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0016824 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0019824 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C006E6F0 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

void __fastcall FxPowerIdleMachine::IoDecrement(FxPowerIdleMachine *this, void *Tag, int Line, const char *File)
{
  FxTagTracker *m_TagTracker; // rsi
  _FX_DRIVER_GLOBALS *m_OwningObject; // rdi
  KIRQL v10; // r13
  unsigned int v11; // edi
  FxTagTracker *v12; // rcx
  const void *_a1; // rax
  __int64 v14; // rdx
  unsigned int v15; // edx
  _FX_DRIVER_GLOBALS *v16; // rcx

  m_TagTracker = this[2].m_TagTracker;
  m_OwningObject = (_FX_DRIVER_GLOBALS *)m_TagTracker->m_OwningObject;
  v10 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  if ( !this->m_IoCount )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)m_TagTracker->m_TagHistory[0].Tag);
    WPP_IFR_SF_qq(
      m_OwningObject,
      2u,
      0xCu,
      0xFu,
      WPP_PowerIdleStateMachine_cpp_Traceguids,
      _a1,
      *(const void **)(v14 + 144));
    if ( m_OwningObject->FxVerifierOn )
    {
      if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_OwningObject, v15, 0xBu)
        || m_OwningObject->FxVerifyDownlevel )
      {
        FxVerifierDbgBreakPoint(v16);
      }
    }
  }
  v11 = this->m_IoCount - 1;
  this->m_IoCount = v11;
  FxPowerIdleMachine::ProcessEventLocked(this, PowerIdleEventIoDecrement);
  KeReleaseSpinLock(&this->m_Lock.m_Lock, v10);
  v12 = this->m_TagTracker;
  if ( v12 )
    FxTagTracker::UpdateTagHistory(v12, Tag, Line, File, TagRelease, v11);
}
