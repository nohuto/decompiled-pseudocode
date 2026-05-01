/*
 * XREFs of ?_Push_back_internal@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXAEB_K@Z @ 0x1800CEF84
 * Callers:
 *     ??0?$deque@_KV?$allocator@_K@std@@@std@@QEAA@_KAEB_K@Z @ 0x1800C8764 (--0-$deque@_KV-$allocator@_K@std@@@std@@QEAA@_KAEB_K@Z.c)
 *     ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x1800CD1E4 (-RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV-.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003A530 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z @ 0x1800CED74 (-_Growmap@-$deque@_KV-$allocator@_K@std@@@std@@AEAAX_K@Z.c)
 */

__int64 __fastcall std::deque<unsigned __int64>::_Push_back_internal(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 result; // rax

  v4 = a1[4];
  v5 = a1[3];
  if ( (((_BYTE)v4 + (_BYTE)v5) & 1) == 0 && a1[2] <= (unsigned __int64)(v4 + 2) >> 1 )
  {
    std::deque<unsigned __int64>::_Growmap(a1);
    v5 = a1[3];
  }
  v6 = v5 & (2LL * a1[2] - 1);
  a1[3] = v6;
  v7 = v6 + a1[4];
  v8 = a1[1];
  v9 = (v7 >> 1) & (a1[2] - 1LL);
  if ( !*(_QWORD *)(v8 + 8 * v9) )
  {
    *(_QWORD *)(a1[1] + 8 * v9) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    v8 = a1[1];
  }
  result = *a2;
  *(_QWORD *)(*(_QWORD *)(v8 + 8 * v9) + 8 * (v7 & 1)) = *a2;
  ++a1[4];
  return result;
}
