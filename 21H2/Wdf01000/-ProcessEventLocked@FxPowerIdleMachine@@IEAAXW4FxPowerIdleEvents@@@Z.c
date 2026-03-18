/*
 * XREFs of ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0016824
 * Callers:
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C0009310 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?DisableTimer@FxPowerIdleMachine@@QEAAEXZ @ 0x1C0016EA4 (-DisableTimer@FxPowerIdleMachine@@QEAAEXZ.c)
 *     ?EnableTimer@FxPowerIdleMachine@@QEAAXXZ @ 0x1C0016F14 (-EnableTimer@FxPowerIdleMachine@@QEAAXXZ.c)
 *     ?_PowerTimeoutDpcRoutine@FxPowerIdleMachine@@KAXPEAU_KDPC@@PEAX11@Z @ 0x1C0016F70 (-_PowerTimeoutDpcRoutine@FxPowerIdleMachine@@KAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x1C0017128 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z.c)
 *     ?ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0017468 (-ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?Start@FxPowerIdleMachine@@QEAAXXZ @ 0x1C0031238 (-Start@FxPowerIdleMachine@@QEAAXXZ.c)
 *     ?Stop@FxPowerIdleMachine@@QEAAXXZ @ 0x1C0089844 (-Stop@FxPowerIdleMachine@@QEAAXXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0016980 (WPP_IFR_SF_qqLL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxPowerIdleMachine::ProcessEventLocked(FxPowerIdleMachine *this, FxPowerIdleEvents Event)
{
  FxTagTracker *m_TagTracker; // rbp
  __int64 m_CurrentIdleState; // r10
  int v6; // eax
  unsigned int TargetStatesCount; // r9d
  const FxPowerIdleTargetState *TargetStates; // rdx
  FxPowerIdleStates _a3; // edi
  unsigned __int64 Tag; // rdx
  const void *_a1; // rcx
  char v12; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  const void *ObjectHandleUnchecked; // rax
  __int64 v15; // rdx
  unsigned int _a4; // r8d
  unsigned int v17; // r10d

  m_TagTracker = this[2].m_TagTracker;
  this->m_EventHistory[this->m_EventHistoryIndex] = Event;
  m_CurrentIdleState = this->m_CurrentIdleState;
  this->m_EventHistoryIndex = (this->m_EventHistoryIndex + 1) & 7;
  v6 = 0;
  TargetStatesCount = FxPowerIdleMachine::m_StateTable[m_CurrentIdleState - 1].TargetStatesCount;
  if ( !TargetStatesCount )
    goto LABEL_5;
  TargetStates = FxPowerIdleMachine::m_StateTable[m_CurrentIdleState - 1].TargetStates;
  while ( TargetStates[v6].PowerIdleEvent != Event )
  {
    if ( ++v6 >= TargetStatesCount )
      goto LABEL_5;
  }
  _a3 = TargetStates[v6].PowerIdleState;
  if ( _a3 == FxIdleMax )
  {
LABEL_5:
    switch ( Event )
    {
      case PowerIdleEventIoDecrement:
        return;
      case PowerIdleEventEnabled:
        if ( (this->m_Flags & 1) != 0 )
          return;
        break;
      case PowerIdleEventIoIncrement:
        return;
    }
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)m_TagTracker->m_TagHistory[0].Tag);
    WPP_IFR_SF_qqLL(
      (_FX_DRIVER_GLOBALS *)m_TagTracker->m_OwningObject,
      4u,
      0xCu,
      0x10u,
      WPP_PowerIdleStateMachine_cpp_Traceguids,
      ObjectHandleUnchecked,
      *(const void **)(v15 + 144),
      v17,
      _a4);
    return;
  }
  do
  {
    Tag = (unsigned __int64)m_TagTracker->m_TagHistory[0].Tag;
    _a1 = (const void *)(Tag ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(Tag + 10) )
      _a1 = 0LL;
    WPP_IFR_SF_qqLL(
      (_FX_DRIVER_GLOBALS *)m_TagTracker->m_OwningObject,
      4u,
      0x15u,
      0x11u,
      WPP_PowerIdleStateMachine_cpp_Traceguids,
      _a1,
      *(const void **)(Tag + 144),
      _a3,
      this->m_CurrentIdleState);
    this->m_StateHistory[this->m_StateHistoryIndex] = _a3;
    v12 = this->m_StateHistoryIndex + 1;
    this->m_CurrentIdleState = _a3;
    this->m_StateHistoryIndex = v12 & 7;
    StateFunc = FxPowerIdleMachine::m_StateTable[_a3 - 1].StateFunc;
    if ( !StateFunc )
      break;
    _a3 = StateFunc(this);
  }
  while ( _a3 != FxIdleMax );
}
