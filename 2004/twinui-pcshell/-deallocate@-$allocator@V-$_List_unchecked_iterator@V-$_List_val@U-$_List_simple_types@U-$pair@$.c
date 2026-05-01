/*
 * XREFs of ?deallocate@?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@std@@@std@@@std@@@std@@QEAAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@std@@@std@@@2@_K@Z @ 0x1800CDAD4
 * Callers:
 *     _std::vector_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_winrt::guid_const__winrt::Windows::Internal::UI::Shell::WindowTabView________std::allocator_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_winrt::guid_const__winrt::Windows::Internal::UI::Shell::WindowTabView___________::_Reallocate_exactly_::_1_::catch$39 @ 0x1800CD628 (_std--vector_std--_List_unchecked_iterator_std--_List_val_std--_List_simple_types_std--pair_winr.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>>>>>::deallocate(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)(8 * a3));
}
