/*
 * XREFs of ?dtor$4@?0??_Assign_cpp_exception_ptr_from_record@?A0xcb9108e8@@YAXAEAV?$shared_ptr@$$CBU_EXCEPTION_RECORD@@@std@@AEBUEHExceptionRecord@@@Z@4HA @ 0x180130F92
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180010020 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 */

void __fastcall ``anonymous namespace'::_Assign_cpp_exception_ptr_from_record'::`1'::dtor$4(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::string::_Tidy_deallocate((__int64 *)(a2 + 56));
  }
}
