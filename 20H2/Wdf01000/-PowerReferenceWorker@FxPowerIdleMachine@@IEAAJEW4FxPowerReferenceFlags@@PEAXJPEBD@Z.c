/*
 * XREFs of ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C000598C
 * Callers:
 *     ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1C000532C (-SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0007B30 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008440 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     StopIdleWorker @ 0x1C0016D28 (StopIdleWorker.c)
 *     ?PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z @ 0x1C0017F48 (-PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C008077C (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpPowerReferenceDuringQueryPnp@FxPkgPnp@@AEAAJXZ @ 0x1C0081180 (-PnpPowerReferenceDuringQueryPnp@FxPkgPnp@@AEAAJXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0006B20 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qid @ 0x1C002F42C (WPP_IFR_SF_qid.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005AE28 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxPowerIdleMachine::PowerReferenceWorker(
        FxPowerIdleMachine *this,
        unsigned __int8 WaitForD0,
        FxPowerReferenceFlags Flags,
        void *Tag,
        int Line,
        char *File)
{
  unsigned __int64 *p_m_Lock; // rbp
  char v9; // si
  KIRQL v11; // al
  unsigned __int8 m_Flags; // cl
  KIRQL v13; // r15
  unsigned int v14; // edi
  FxTagTracker *v15; // rcx
  FxTagTracker *m_TagTracker; // rsi
  const void *_a1; // rax
  unsigned int v19; // r8d
  _FX_DRIVER_GLOBALS *v20; // r10
  const _GUID *traceGuid; // r11
  KIRQL v22; // r14
  char m_Refcnt; // al
  const void *ObjectHandleUnchecked; // rax
  _FX_DRIVER_GLOBALS *v25; // r11
  const void *v26; // rax
  _FX_DRIVER_GLOBALS *v27; // r11
  unsigned int count; // [rsp+70h] [rbp+8h]

  count = 0;
  p_m_Lock = &this->m_Lock.m_Lock;
  v9 = Flags;
  v11 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  m_Flags = this->m_Flags;
  v13 = v11;
  if ( (m_Flags & 0x10) != 0 || (m_Flags & 0x20) == 0 )
  {
    v14 = -1073741101;
  }
  else
  {
    count = ++this->m_IoCount;
    FxPowerIdleMachine::ProcessEventLocked(this, PowerIdleEventIoIncrement);
    if ( KeReadStateEvent(&this->m_D0NotificationEvent.m_Event.m_Event) )
    {
      v14 = 0;
    }
    else
    {
      v14 = 259;
      if ( (v9 & 1) != 0 )
        this->m_Flags |= 0x80u;
    }
  }
  KeReleaseSpinLock(p_m_Lock, v13);
  if ( v14 == 259 && WaitForD0 )
  {
    m_TagTracker = this[2].m_TagTracker;
    if ( LOBYTE(m_TagTracker->m_OwningObject[3].m_Refcnt) )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)m_TagTracker->m_TagHistory[0].Tag);
      WPP_IFR_SF_qq(v20, 5u, v19, v19, traceGuid, _a1, KeGetCurrentThread());
    }
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&this->m_D0NotificationEvent, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
    v22 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    if ( (this->m_Flags & 0x30) == 0x20 )
    {
      v14 = 0;
    }
    else
    {
      v14 = -1073741101;
      m_Refcnt = m_TagTracker->m_OwningObject[3].m_Refcnt;
      if ( (this->m_Flags & 0x10) != 0 )
      {
        if ( m_Refcnt )
        {
          ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)m_TagTracker->m_TagHistory[0].Tag);
          WPP_IFR_SF_qid(
            v25,
            5u,
            0xCu,
            0xDu,
            WPP_PowerIdleStateMachine_cpp_Traceguids,
            ObjectHandleUnchecked,
            (__int64)KeGetCurrentThread(),
            -1073741101);
        }
      }
      else if ( m_Refcnt )
      {
        v26 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)m_TagTracker->m_TagHistory[0].Tag);
        WPP_IFR_SF_qid(
          v27,
          5u,
          0xCu,
          0xEu,
          WPP_PowerIdleStateMachine_cpp_Traceguids,
          v26,
          (__int64)KeGetCurrentThread(),
          -1073741101);
      }
      --this->m_IoCount;
      FxPowerIdleMachine::ProcessEventLocked(this, PowerIdleEventIoDecrement);
    }
    KeReleaseSpinLock(p_m_Lock, v22);
  }
  v15 = this->m_TagTracker;
  if ( v15 && (!v14 || v14 == 259) )
    FxTagTracker::UpdateTagHistory(v15, Tag, Line, File, TagAddRef, count);
  return v14;
}
