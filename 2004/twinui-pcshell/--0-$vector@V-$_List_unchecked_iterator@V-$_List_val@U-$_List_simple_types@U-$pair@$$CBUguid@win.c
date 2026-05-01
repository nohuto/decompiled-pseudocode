/*
 * XREFs of ??0?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@std@@@2@@std@@QEAA@_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@1@AEBV?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@std@@@1@@Z @ 0x1800C6F68
 * Callers:
 *     ??0?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@1@AEBV?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@1@@Z @ 0x1800C6A68 (--0-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid@winrt@@@s.c)
 *     ??0?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@1@@Z @ 0x1800C6AE8 (--0-$_Hash@V-$_Umap_traits@_KUguid@winrt@@V-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@.c)
 *     ??0?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@1@AEBV?$allocator@Uguid@winrt@@@1@@Z @ 0x1800C6B68 (--0-$_Hash@V-$_Uset_traits@Uguid@winrt@@V-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid@winrt@@@std.c)
 *     ??0?$_Hash@V?$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@9@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@1@AEBV?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@1@@Z @ 0x1800D0BE4 (--0-$_Hash@V-$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@V-$_Uhash_com.c)
 * Callees:
 *     ?_Buy_raw@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x1800CC83C (-_Buy_raw@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CB_K.c)
 */

_QWORD *__fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::guid const,unsigned __int64>>>>>::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::guid const,unsigned __int64>>>>>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rdi
  _QWORD *v6; // rcx
  _QWORD *result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v5 = 16LL;
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,winrt::guid>>>>>::_Buy_raw(
    a1,
    16LL);
  v6 = (_QWORD *)*a1;
  do
  {
    *v6++ = *a3;
    --v5;
  }
  while ( v5 );
  result = a1;
  a1[1] = v6;
  return result;
}
