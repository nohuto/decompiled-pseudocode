/*
 * XREFs of _CStreamGroup::CreateBridgeStream_::_1_::dtor$4 @ 0x14004D677
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CStreamInstance *__fastcall CStreamGroup::CreateBridgeStream_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CStreamInstance>::~CAutoPtr<CStreamInstance>((CStreamInstance **)(a2 + 64));
}
