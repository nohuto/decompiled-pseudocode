/*
 * XREFs of __lambda_713ee8bbd6b08550d59c52695cab5ce3_::operator()_::_1_::dtor$5 @ 0x1803254E8
 * Callers:
 *     <none>
 * Callees:
 *     ??1_ContextCallback@details@Concurrency@@QEAA@XZ @ 0x180324F50 (--1_ContextCallback@details@Concurrency@@QEAA@XZ.c)
 */

void __fastcall _lambda_713ee8bbd6b08550d59c52695cab5ce3_::operator()_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 240) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 240) &= ~1u;
    Concurrency::details::_ContextCallback::~_ContextCallback((Concurrency::details::_ContextCallback *)(a2 + 248));
  }
}
