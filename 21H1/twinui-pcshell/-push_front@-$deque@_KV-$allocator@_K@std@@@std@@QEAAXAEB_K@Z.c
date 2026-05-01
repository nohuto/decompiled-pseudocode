/*
 * XREFs of ?push_front@?$deque@_KV?$allocator@_K@std@@@std@@QEAAXAEB_K@Z @ 0x1800BC1D0
 * Callers:
 *     ?ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z @ 0x1800B53E0 (-ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z.c)
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x1800B9588 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180042A8C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z @ 0x1800BAD14 (-_Growmap@-$deque@_KV-$allocator@_K@std@@@std@@AEAAX_K@Z.c)
 */

__int64 __fastcall std::deque<unsigned __int64>::push_front(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 result; // rax

  v4 = a1[3];
  if ( (v4 & 1) == 0 && a1[2] <= (unsigned __int64)(a1[4] + 2LL) >> 1 )
  {
    std::deque<unsigned __int64>::_Growmap(a1);
    v4 = a1[3];
  }
  v5 = v4 & (2LL * a1[2] - 1);
  a1[3] = v5;
  v6 = a1[2];
  if ( !v5 )
    v5 = 2 * v6;
  v7 = v6 - 1;
  v8 = a1[1];
  v9 = v5 - 1;
  v10 = (v9 >> 1) & v7;
  if ( !*(_QWORD *)(v8 + 8 * v10) )
  {
    *(_QWORD *)(a1[1] + 8 * v10) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    v8 = a1[1];
  }
  result = *a2;
  *(_QWORD *)(*(_QWORD *)(v8 + 8 * v10) + 8 * (v9 & 1)) = *a2;
  ++a1[4];
  a1[3] = v9;
  return result;
}
