/*
 * XREFs of _PhoneTopology::AddWorkItemToQueue_::_1_::dtor$1 @ 0x18013EBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PhoneTopology::AddWorkItemToQueue_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CallHoldWorkItem>::~CAutoPtr<CallHoldWorkItem>((__int64 *)(a2 + 64));
}
