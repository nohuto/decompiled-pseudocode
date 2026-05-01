/*
 * XREFs of ??$assign@V?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@std@@X@?$deque@_KV?$allocator@_K@std@@@std@@QEAAXV?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@1@0@Z @ 0x1800B28D0
 * Callers:
 *     ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x1800B90F4 (-RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV-.c)
 * Callees:
 *     ??$emplace_back@AEB_K@?$deque@_KV?$allocator@_K@std@@@std@@QEAAAEA_KAEB_K@Z @ 0x1800B309C (--$emplace_back@AEB_K@-$deque@_KV-$allocator@_K@std@@@std@@QEAAAEA_KAEB_K@Z.c)
 */

_UNKNOWN **__fastcall std::deque<unsigned __int64>::assign<std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>,void>(
        _QWORD *a1,
        __int64 *a2,
        __int128 *a3)
{
  _UNKNOWN **result; // rax
  unsigned __int64 v4; // rsi
  __int64 v6; // rbp
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r8
  __int64 v10; // rdx
  unsigned __int64 i; // r11
  __int128 v13; // [rsp+30h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = a1[3];
  v6 = *a2;
  v7 = v4 + a1[4];
  v8 = a2[1];
  v13 = *a3;
  while ( v8 != *((_QWORD *)&v13 + 1) )
  {
    if ( v4 == v7 )
    {
      do
      {
        result = (_UNKNOWN **)std::deque<unsigned __int64>::emplace_back<unsigned __int64 const &>(
                                a1,
                                *(_QWORD *)(*(_QWORD *)(v6 + 8) + 8 * ((*(_QWORD *)(v6 + 16) - 1LL) & (v8 >> 1)))
                              + 8 * (v8 & 1));
        ++v8;
      }
      while ( v8 != *((_QWORD *)&v13 + 1) );
      return result;
    }
    v9 = v4 >> 1;
    v10 = v4++ & 1;
    result = *(_UNKNOWN ***)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 8 * ((v8 >> 1) & (*(_QWORD *)(v6 + 16) - 1LL)))
                           + 8 * (v8 & 1));
    ++v8;
    *(_QWORD *)(*(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & v9)) + 8 * v10) = result;
  }
  for ( i = v7 - v4; i; --i )
  {
    if ( a1[4]-- == 1LL )
      a1[3] = 0LL;
  }
  return result;
}
