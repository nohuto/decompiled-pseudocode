/*
 * XREFs of _TSSession::Create_::_1_::dtor$1 @ 0x180041E29
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TSSession::Create_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::unique_ptr<TSSession>::~unique_ptr<TSSession>((TSSession **)(a2 + 48));
}
