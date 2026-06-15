/*
 * XREFs of _TsSessionCreate_::_1_::dtor$4 @ 0x180041F2A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TsSessionCreate_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return std::shared_ptr<DuckingDescriptor>::~shared_ptr<DuckingDescriptor>(a2 + 64);
}
