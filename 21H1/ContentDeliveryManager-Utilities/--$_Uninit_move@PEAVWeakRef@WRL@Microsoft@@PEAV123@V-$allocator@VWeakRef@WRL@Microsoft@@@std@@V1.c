/*
 * XREFs of ??$_Uninit_move@PEAVWeakRef@WRL@Microsoft@@PEAV123@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@V123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x1800478BC
 * Callers:
 *     ?_Reallocate@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x1800457BC (-_Reallocate@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@I.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Uninit_move<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *,std::allocator<Microsoft::WRL::WeakRef>,Microsoft::WRL::WeakRef>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  while ( a1 != a2 )
  {
    *a3 = 0LL;
    if ( a3 != a1 )
    {
      *a3 = *a1;
      *a1 = 0LL;
    }
    ++a3;
    ++a1;
  }
  return a3;
}
