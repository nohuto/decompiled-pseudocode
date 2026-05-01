/*
 * XREFs of _TryGetCertSubjectName_::_1_::dtor$5 @ 0x18043CD0C
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800A0D60 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 */

void __fastcall TryGetCertSubjectName_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~1u;
    std::wstring::~wstring(*(_QWORD **)(a2 + 400));
  }
}
