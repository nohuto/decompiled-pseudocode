/*
 * XREFs of std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_7cc4ca75940c0ea695d2d6398f0fa979___ @ 0x18019EBD4
 * Callers:
 *     ?RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z @ 0x1801A1020 (-RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FindRegisteredClient@HotKeyProcessor@@AEAAJAEBUMessageObjectID@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801A063C (-FindRegisteredClient@HotKeyProcessor@@AEAAJAEBUMessageObjectID@@PEAPEAVHotkeyClientRegistration.c)
 */

_QWORD *__fastcall std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_7cc4ca75940c0ea695d2d6398f0fa979___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        HotKeyProcessor *a4)
{
  volatile signed __int32 *v8; // r14
  const struct MessageObjectID *v9; // rbp
  bool v10; // bp
  _QWORD *result; // rax
  struct HotkeyClientRegistration *v12; // [rsp+40h] [rbp+8h] BYREF

  while ( a2 != a3 )
  {
    v8 = (volatile signed __int32 *)a2[3];
    if ( v8 )
    {
      _InterlockedIncrement(v8 + 2);
      v8 = (volatile signed __int32 *)a2[3];
    }
    v9 = (const struct MessageObjectID *)a2[2];
    v12 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v12);
    HotKeyProcessor::FindRegisteredClient(a4, v9, &v12);
    v10 = v12 && !*((_BYTE *)v12 + 80);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v12);
    if ( v8 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v8);
    if ( v10 )
      break;
    a2 = (_QWORD *)*a2;
  }
  result = a1;
  *a1 = a2;
  return result;
}
