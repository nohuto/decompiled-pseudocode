/*
 * XREFs of ?Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0022D70
 * Callers:
 *     ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C0020408 (-CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ.c)
 *     ?_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z @ 0x1C0022C90 (-_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z.c)
 *     ?CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ @ 0x1C008CE60 (-CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxEventQueue::Initialize(FxEventQueue *this, _FX_DRIVER_GLOBALS *DriverGlobals)
{
  FxWaitLockInternal *p_m_StateMachineLock; // rbx
  __int64 result; // rax

  p_m_StateMachineLock = &this->m_StateMachineLock;
  KeInitializeEvent(&this->m_StateMachineLock.m_Event.m_Event, SynchronizationEvent, 1u);
  result = 0LL;
  p_m_StateMachineLock->m_Event.m_DbgFlagIsInitialized = 1;
  return result;
}
