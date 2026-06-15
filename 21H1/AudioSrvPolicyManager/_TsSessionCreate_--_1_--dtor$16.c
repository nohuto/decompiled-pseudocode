/*
 * XREFs of _TsSessionCreate_::_1_::dtor$16 @ 0x180041FA8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TsSessionCreate_::_1_::dtor_16(__int64 a1, __int64 a2)
{
  return std::shared_ptr<DuckingDescriptor>::~shared_ptr<DuckingDescriptor>(a2 + 128);
}
