/*
 * XREFs of _CProcess::RegisterProcessNotification_::_1_::dtor$0 @ 0x180041820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::RegisterProcessNotification_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioProcessNotification>::~CComPtr<IAudioProcessNotification>((__int64 *)(a2 + 48));
}
