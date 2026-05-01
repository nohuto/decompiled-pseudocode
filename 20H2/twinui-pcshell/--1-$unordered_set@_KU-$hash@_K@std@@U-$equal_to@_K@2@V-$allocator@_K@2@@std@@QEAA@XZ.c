/*
 * XREFs of ??1?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@QEAA@XZ @ 0x1800C95F8
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetWindowTabAllotment_::_1_::dtor$0 @ 0x1800CC3C4 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--GetWindowTabAllotm_ea_1800CC3C4.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x1800CF1B4 (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::unordered_set<unsigned __int64>::~unordered_set<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>,std::allocator<unsigned __int64>>(
        __int64 a1)
{
  _QWORD **v2; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  std::vector<void *>::_Tidy(a1 + 24);
  v2 = *(_QWORD ***)(a1 + 8);
  *v2[1] = 0LL;
  v3 = *v2;
  if ( *v2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x18);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 8), (const struct std::nothrow_t *)0x18);
}
