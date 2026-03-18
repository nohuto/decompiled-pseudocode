/*
 * XREFs of ?DecrementWorkItemQueued@FxSystemWorkItem@@QEAAXXZ @ 0x1C0055E90
 * Callers:
 *     ?Dispose@FxSystemWorkItem@@EEAAEXZ @ 0x1C0055ED0 (-Dispose@FxSystemWorkItem@@EEAAEXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxSystemWorkItem::DecrementWorkItemQueued(FxSystemWorkItem *this)
{
  if ( _InterlockedExchangeAdd(&this->m_OutStandingWorkItem, 0xFFFFFFFF) == 1 )
    KeSetEvent(&this->m_RemoveEvent.m_Event.m_Event, 0, 0);
}
