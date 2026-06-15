/*
 * XREFs of ?AddRef@CKsNotificationsMonitor@@UEAAKXZ @ 0x18004D4E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CKsNotificationsMonitor::AddRef(CKsNotificationsMonitor *this)
{
  signed __int32 v1; // eax

  v1 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 6, 1u);
  ++CKsNotificationsMonitor::m_cRefAll;
  return (unsigned int)(v1 + 1);
}
