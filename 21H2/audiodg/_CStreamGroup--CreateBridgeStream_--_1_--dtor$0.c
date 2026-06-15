/*
 * XREFs of _CStreamGroup::CreateBridgeStream_::_1_::dtor$0 @ 0x14004D647
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::CreateBridgeStream_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CPipeInstance>::~CAutoPtr<CPipeInstance>(a2 + 96);
}
