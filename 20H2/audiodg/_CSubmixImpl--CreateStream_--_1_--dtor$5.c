/*
 * XREFs of _CSubmixImpl::CreateStream_::_1_::dtor$5 @ 0x14002C610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSubmixImpl::CreateStream_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CStreamInstance>::~CAutoPtr<CStreamInstance>(a2 + 48);
}
