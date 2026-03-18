/*
 * XREFs of ??0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z @ 0x1C008CBFC
 * Callers:
 *     ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C008C820 (-CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ.c)
 * Callees:
 *     ??0FxThreadedEventQueue@@QEAA@E@Z @ 0x1C008ADBC (--0FxThreadedEventQueue@@QEAA@E@Z.c)
 */

void __fastcall FxDevicePwrRequirementMachine::FxDevicePwrRequirementMachine(
        FxDevicePwrRequirementMachine *this,
        FxPoxInterface *PoxInterface)
{
  __int64 m_HistoryIndex; // r8

  FxThreadedEventQueue::FxThreadedEventQueue(this, (unsigned __int8)PoxInterface);
  this->m_CurrentState = 1;
  *(_OWORD *)this->m_Queue = 0LL;
  *(_OWORD *)&this->m_Queue[4] = 0LL;
  this->m_States.S = 0LL;
  m_HistoryIndex = this->m_HistoryIndex;
  this->m_HistoryIndex = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_QueueDepth;
  this->m_States.History[m_HistoryIndex] = this->m_CurrentState;
  this->m_PoxInterface = PoxInterface;
}
