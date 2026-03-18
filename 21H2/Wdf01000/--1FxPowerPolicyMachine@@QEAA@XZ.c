/*
 * XREFs of ??1FxPowerPolicyMachine@@QEAA@XZ @ 0x1C001FCC0
 * Callers:
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C0020990 (--1FxPkgPnp@@MEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?Free@MxWorkItem@@QEAAXXZ @ 0x1C001AD70 (-Free@MxWorkItem@@QEAAXXZ.c)
 *     ??1FxPowerPolicyOwnerSettings@@QEAA@XZ @ 0x1C008A700 (--1FxPowerPolicyOwnerSettings@@QEAA@XZ.c)
 */

void __fastcall FxPowerPolicyMachine::~FxPowerPolicyMachine(FxPowerPolicyMachine *this)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rdi

  m_Owner = this->m_Owner;
  if ( m_Owner )
  {
    FxPowerPolicyOwnerSettings::~FxPowerPolicyOwnerSettings(this->m_Owner);
    FxPoolFree((FX_POOL_TRACKER *)m_Owner);
    this->m_Owner = 0LL;
  }
  MxWorkItem::Free(&this->m_WorkItem);
  this->m_QueueLock.m_DbgFlagIsInitialized = 0;
}
