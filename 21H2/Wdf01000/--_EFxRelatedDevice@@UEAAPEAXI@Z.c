/*
 * XREFs of ??_EFxRelatedDevice@@UEAAPEAXI@Z @ 0x1C00917A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxRelatedDevice@@UEAA@XZ @ 0x1C009175C (--1FxRelatedDevice@@UEAA@XZ.c)
 */

FxRelatedDevice *__fastcall FxRelatedDevice::`vector deleting destructor'(FxRelatedDevice *this, char a2)
{
  FX_POOL_TRACKER *p_m_TransactionLink; // rcx

  FxRelatedDevice::~FxRelatedDevice(this);
  if ( (a2 & 1) != 0 )
  {
    p_m_TransactionLink = (FX_POOL_TRACKER *)&this[-1].m_TransactionedEntry.m_TransactionLink;
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      p_m_TransactionLink = (FX_POOL_TRACKER *)this;
    FxPoolFree(p_m_TransactionLink);
  }
  return this;
}
