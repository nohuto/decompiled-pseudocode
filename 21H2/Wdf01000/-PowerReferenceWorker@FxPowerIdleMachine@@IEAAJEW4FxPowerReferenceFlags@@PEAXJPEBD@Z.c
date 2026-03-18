/*
 * XREFs of ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C0009310
 * Callers:
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0009010 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009550 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1C000A508 (-SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     StopIdleWorker @ 0x1C0010F38 (StopIdleWorker.c)
 *     ?PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z @ 0x1C0012AF8 (-PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C001C83C (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpPowerReferenceDuringQueryPnp@FxPkgPnp@@AEAAJXZ @ 0x1C008883C (-PnpPowerReferenceDuringQueryPnp@FxPkgPnp@@AEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0016824 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0016980 (WPP_IFR_SF_qqLL.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C006E6F0 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxPowerIdleMachine::PowerReferenceWorker(
        FxPowerIdleMachine *this,
        unsigned __int8 WaitForD0,
        FxPowerReferenceFlags Flags,
        void *Tag,
        int Line,
        char *File)
{
  unsigned __int64 *p_m_Lock; // rsi
  unsigned int v8; // edi
  void *v9; // r13
  char v10; // r12
  unsigned int v12; // ebp
  KIRQL v13; // al
  unsigned __int8 m_Flags; // r10
  KIRQL v15; // r14
  __int64 m_EventHistoryIndex; // rax
  FxTagTracker *m_TagTracker; // r13
  int v18; // eax
  unsigned int TargetStatesCount; // edx
  const FxPowerIdleTargetState *TargetStates; // r8
  FxTagTracker *v21; // rcx
  FxPowerIdleStates _a3; // edi
  void *v24; // rdx
  const void *_a1; // rcx
  char v26; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  FxTagTracker *v28; // r14
  _FX_DRIVER_GLOBALS *m_OwningObject; // rcx
  unsigned __int64 v30; // r8
  __int16 v31; // ax
  const void *v32; // r8
  KIRQL v33; // al
  unsigned __int8 v34; // dl
  KIRQL v35; // r15
  _FX_DRIVER_GLOBALS *v36; // r11
  unsigned __int64 v37; // r10
  __int16 v38; // ax
  const void *v39; // r10
  unsigned __int64 v40; // rdx
  __int16 v41; // ax
  const void *v42; // rdx
  struct _KTHREAD *_a2; // [rsp+30h] [rbp-58h]
  struct _KTHREAD *_a2a; // [rsp+30h] [rbp-58h]
  struct _KTHREAD *_a2b; // [rsp+30h] [rbp-58h]
  KIRQL v46; // [rsp+90h] [rbp+8h]

  p_m_Lock = &this->m_Lock.m_Lock;
  v8 = 0;
  v9 = Tag;
  v10 = Flags;
  v12 = 0;
  v13 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  m_Flags = this->m_Flags;
  v15 = v13;
  v46 = v13;
  if ( (m_Flags & 0x10) != 0 || (m_Flags & 0x20) == 0 )
  {
    KeReleaseSpinLock(p_m_Lock, v13);
    v8 = -1073741101;
    goto LABEL_10;
  }
  m_EventHistoryIndex = this->m_EventHistoryIndex;
  v12 = ++this->m_IoCount;
  m_TagTracker = this[2].m_TagTracker;
  this->m_EventHistory[m_EventHistoryIndex] = PowerIdleEventIoIncrement;
  this->m_EventHistoryIndex = (this->m_EventHistoryIndex + 1) & 7;
  v18 = 0;
  TargetStatesCount = FxPowerIdleMachine::m_StateTable[this->m_CurrentIdleState - 1].TargetStatesCount;
  if ( TargetStatesCount )
  {
    TargetStates = FxPowerIdleMachine::m_StateTable[this->m_CurrentIdleState - 1].TargetStates;
    while ( TargetStates[v18].PowerIdleEvent != PowerIdleEventIoIncrement )
    {
      if ( ++v18 >= TargetStatesCount )
        goto LABEL_7;
    }
    _a3 = TargetStates[v18].PowerIdleState;
    if ( _a3 != FxIdleMax )
    {
      do
      {
        v24 = m_TagTracker->m_TagHistory[0].Tag;
        _a1 = 0LL;
        if ( *((_WORD *)v24 + 5) )
          _a1 = (const void *)((unsigned __int64)m_TagTracker->m_TagHistory[0].Tag ^ 0xFFFFFFFFFFFFFFF8uLL);
        WPP_IFR_SF_qqLL(
          (_FX_DRIVER_GLOBALS *)m_TagTracker->m_OwningObject,
          4u,
          0x15u,
          0x11u,
          WPP_PowerIdleStateMachine_cpp_Traceguids,
          _a1,
          *((const void **)v24 + 18),
          _a3,
          this->m_CurrentIdleState);
        this->m_StateHistory[this->m_StateHistoryIndex] = _a3;
        v26 = this->m_StateHistoryIndex + 1;
        this->m_CurrentIdleState = _a3;
        this->m_StateHistoryIndex = v26 & 7;
        StateFunc = FxPowerIdleMachine::m_StateTable[_a3 - 1].StateFunc;
        if ( !StateFunc )
          break;
        _a3 = StateFunc(this);
      }
      while ( _a3 != FxIdleMax );
      v15 = v46;
      p_m_Lock = &this->m_Lock.m_Lock;
    }
    v8 = 0;
  }
LABEL_7:
  if ( KeReadStateEvent(&this->m_D0NotificationEvent.m_Event.m_Event) )
  {
    KeReleaseSpinLock(p_m_Lock, v15);
LABEL_9:
    v9 = Tag;
    goto LABEL_10;
  }
  if ( (v10 & 1) != 0 )
    this->m_Flags |= 0x80u;
  KeReleaseSpinLock(p_m_Lock, v15);
  v8 = 259;
  if ( !WaitForD0 )
    goto LABEL_9;
  v28 = this[2].m_TagTracker;
  m_OwningObject = (_FX_DRIVER_GLOBALS *)v28->m_OwningObject;
  if ( m_OwningObject->FxVerboseOn )
  {
    v30 = (unsigned __int64)v28->m_TagHistory[0].Tag;
    _a2 = KeGetCurrentThread();
    v31 = *(_WORD *)(v30 + 10);
    v32 = (const void *)(v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v31 )
      v32 = 0LL;
    WPP_IFR_SF_qq(m_OwningObject, 5u, 0xCu, 0xCu, WPP_PowerIdleStateMachine_cpp_Traceguids, v32, _a2);
  }
  KeEnterCriticalRegion();
  KeWaitForSingleObject(&this->m_D0NotificationEvent, Executive, 0, 0, 0LL);
  KeLeaveCriticalRegion();
  v33 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
  v34 = this->m_Flags;
  v35 = v33;
  if ( (v34 & 0x30) == 0x20 )
  {
    v8 = 0;
  }
  else
  {
    v36 = (_FX_DRIVER_GLOBALS *)v28->m_OwningObject;
    v8 = -1073741101;
    if ( (v34 & 0x10) != 0 )
    {
      if ( v36->FxVerboseOn )
      {
        v37 = (unsigned __int64)v28->m_TagHistory[0].Tag;
        _a2a = KeGetCurrentThread();
        v38 = *(_WORD *)(v37 + 10);
        v39 = (const void *)(v37 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v38 )
          v39 = 0LL;
        WPP_IFR_SF_qqd(v36, 5u, 0xCu, 0xDu, WPP_PowerIdleStateMachine_cpp_Traceguids, v39, _a2a, -1073741101);
      }
    }
    else if ( v36->FxVerboseOn )
    {
      v40 = (unsigned __int64)v28->m_TagHistory[0].Tag;
      _a2b = KeGetCurrentThread();
      v41 = *(_WORD *)(v40 + 10);
      v42 = (const void *)(v40 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v41 )
        v42 = 0LL;
      WPP_IFR_SF_qqd(v36, 5u, 0xCu, 0xEu, WPP_PowerIdleStateMachine_cpp_Traceguids, v42, _a2b, -1073741101);
    }
    --this->m_IoCount;
    FxPowerIdleMachine::ProcessEventLocked(this, PowerIdleEventIoDecrement);
  }
  KeReleaseSpinLock(p_m_Lock, v35);
  v9 = Tag;
LABEL_10:
  v21 = this->m_TagTracker;
  if ( v21 && (!v8 || v8 == 259) )
    FxTagTracker::UpdateTagHistory(v21, v9, Line, File, TagAddRef, v12);
  return v8;
}
