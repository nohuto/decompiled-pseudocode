/*
 * XREFs of ?dtor$0@?0??name@locale@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ@4HA @ 0x180125D6E
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_98 @ 0x18000F360 (unknown_libname_98.c)
 */

void __fastcall `std::locale::name'::`1'::dtor$0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    unknown_libname_98((_QWORD *)(a2 + 80));
  }
}
