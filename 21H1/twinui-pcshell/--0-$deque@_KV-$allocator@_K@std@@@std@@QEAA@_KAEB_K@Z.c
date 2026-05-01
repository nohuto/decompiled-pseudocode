/*
 * XREFs of ??0?$deque@_KV?$allocator@_K@std@@@std@@QEAA@_KAEB_K@Z @ 0x1800B3EA4
 * Callers:
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x1800B9588 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180042A8C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Push_back_internal@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXAEB_K@Z @ 0x1800BAF24 (-_Push_back_internal@-$deque@_KV-$allocator@_K@std@@@std@@AEAAXAEB_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::deque<unsigned __int64>::deque<unsigned __int64>(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v7; // [rsp+20h] [rbp-18h]

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  *v7 = a1;
  v7[1] = 0LL;
  for ( *a1 = v7; a2; --a2 )
    std::deque<unsigned __int64>::_Push_back_internal(a1, a3);
  return a1;
}
