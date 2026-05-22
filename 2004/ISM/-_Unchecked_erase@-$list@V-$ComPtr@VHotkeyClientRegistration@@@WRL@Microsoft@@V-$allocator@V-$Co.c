/*
 * XREFs of ?_Unchecked_erase@?$list@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@std@@@std@@AEAA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@std@@@std@@U_Iterator_base0@2@@2@V32@0@Z @ 0x1801A1F08
 * Callers:
 *     ?RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z @ 0x1801A1668 (-RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@@std@@@?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@@1@PEAU01@@Z @ 0x18019D88C (--$_Free_non_head@V-$allocator@U-$_List_node@V-$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft.c)
 */

__int64 **__fastcall std::list<Microsoft::WRL::ComPtr<HotkeyClientRegistration>>::_Unchecked_erase(
        __int64 **a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v6; // rdx
  __int64 *v7; // rdi
  __int64 *v9; // rbx

  v6 = *a1;
  v7 = a3;
  if ( a3 == (__int64 *)**a1 && a4 == v6 )
  {
    std::_List_node<Microsoft::WRL::ComPtr<HotkeyClientRegistration>,void *>::_Free_non_head<std::allocator<std::_List_node<Microsoft::WRL::ComPtr<HotkeyClientRegistration>,void *>>>(
      (__int64)a1,
      (_QWORD **)v6);
    **a1 = (__int64)*a1;
    (*a1)[1] = (__int64)*a1;
    a1[1] = 0LL;
    *a2 = *a1;
  }
  else
  {
    while ( v7 != a4 )
    {
      v9 = (__int64 *)*v7;
      *(_QWORD *)v7[1] = *v7;
      *(_QWORD *)(*v7 + 8) = v7[1];
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v7 + 2);
      std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)0x18);
      a1[1] = (__int64 *)((char *)a1[1] - 1);
      v7 = v9;
    }
    *a2 = a4;
  }
  return a2;
}
