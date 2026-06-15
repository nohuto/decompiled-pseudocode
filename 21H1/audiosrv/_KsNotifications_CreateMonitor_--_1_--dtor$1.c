/*
 * XREFs of _KsNotifications_CreateMonitor_::_1_::dtor$1 @ 0x18007AED1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KsNotifications_CreateMonitor_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(*(__int64 **)(a2 + 128));
}
