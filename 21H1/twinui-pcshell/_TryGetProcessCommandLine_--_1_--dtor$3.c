/*
 * XREFs of _TryGetProcessCommandLine_::_1_::dtor$3 @ 0x18043C42B
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800A0D60 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 */

void __fastcall TryGetProcessCommandLine_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 52) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 52) &= ~1u;
    std::wstring::~wstring(*(_QWORD **)(a2 + 64));
  }
}
