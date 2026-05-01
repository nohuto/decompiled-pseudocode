/*
 * XREFs of __lambda_7701e7176002895e9cf0bc610689a4a2_::operator()_::_1_::dtor$4 @ 0x1800B18EF
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800B0B00 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 */

void __fastcall _lambda_7701e7176002895e9cf0bc610689a4a2_::operator()_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    std::wstring::~wstring((_QWORD *)(a2 + 56));
  }
}
