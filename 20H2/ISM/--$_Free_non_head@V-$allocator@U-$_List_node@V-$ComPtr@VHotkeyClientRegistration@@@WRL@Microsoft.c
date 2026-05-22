/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@@std@@@?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@@1@PEAU01@@Z @ 0x18019D7FC
 * Callers:
 *     ??1?$list@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18019EE90 (--1-$list@V-$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VHotkeyCli.c)
 *     ??1HotKeyProcessor@@UEAA@XZ @ 0x18019EFA8 (--1HotKeyProcessor@@UEAA@XZ.c)
 *     ?_Unchecked_erase@?$list@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@std@@@std@@AEAA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@std@@@std@@U_Iterator_base0@2@@2@V32@0@Z @ 0x1801A1E78 (-_Unchecked_erase@-$list@V-$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@V-$allocator@V-$Co.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<Microsoft::WRL::ComPtr<HotkeyClientRegistration>,void *>::_Free_non_head<std::allocator<std::_List_node<Microsoft::WRL::ComPtr<HotkeyClientRegistration>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v2 + 2);
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x18);
      v2 = v3;
    }
    while ( v3 );
  }
}
