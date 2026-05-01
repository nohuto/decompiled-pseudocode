/*
 * XREFs of ??$_Insert@Uguid@winrt@@AEBUWindowTabView@Shell@UI@Internal@Windows@2@@?$list@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@std@@@std@@U_Iterator_base0@2@@1@$$QEAUguid@winrt@@AEBUWindowTabView@Shell@UI@Internal@Windows@4@@Z @ 0x1800D0464
 * Callers:
 *     ?AddTab@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@@Z @ 0x1800D134C (-AddTab@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180043338 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0CMarshaledInterface@@QEAA@AEBV0@@Z @ 0x180167600 (--0CMarshaledInterface@@QEAA@AEBV0@@Z.c)
 */

CMarshaledInterface *__fastcall std::list<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>>::_Insert<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView const &>(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        const struct CMarshaledInterface *a4)
{
  _QWORD *v8; // rsi
  _QWORD *v9; // rdi
  CMarshaledInterface *result; // rax

  if ( *(_QWORD *)(a1 + 8) == 0x666666666666666LL )
    std::_Xlength_error("list<T> too long");
  v8 = *(_QWORD **)(a2 + 8);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *((_OWORD *)v9 + 1) = *a3;
  result = CMarshaledInterface::CMarshaledInterface((CMarshaledInterface *)(v9 + 4), a4);
  *v9 = a2;
  v9[1] = v8;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v9;
  *v8 = v9;
  return result;
}
