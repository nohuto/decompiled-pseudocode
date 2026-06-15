/*
 * XREFs of _TSSession::Create_::_1_::dtor$7 @ 0x18003C544
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TSSession::Create_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  ATL::CCriticalSection::~CCriticalSection((LPCRITICAL_SECTION)(*(_QWORD *)(a2 + 64) + 16LL));
}
