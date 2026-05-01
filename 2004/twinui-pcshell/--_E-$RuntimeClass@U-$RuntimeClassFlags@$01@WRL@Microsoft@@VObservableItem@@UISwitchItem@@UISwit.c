/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableItem@@UISwitchItem@@UISwitchItemInternal@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18039E740
 * Callers:
 *     <none>
 * Callees:
 *     ??_G?$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x180070E10 (--_G-$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007C9C8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18008DC44 (--3@YAXPEAX@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ObservableItem,ISwitchItem,ISwitchItemInternal>::`vector deleting destructor'(
        _DWORD *Block,
        char a2)
{
  void *v3; // rcx
  unsigned __int64 v5; // rsi

  Block[23] = -1073741823;
  v3 = (void *)*((_QWORD *)Block + 5);
  if ( v3 )
  {
    v5 = 0LL;
    if ( *((_QWORD *)Block + 6) )
    {
      do
        Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'((__int64 *)(*((_QWORD *)Block + 5) + 8 * v5++));
      while ( v5 < *((_QWORD *)Block + 6) );
      v3 = (void *)*((_QWORD *)Block + 5);
    }
    CoTaskMemFree(v3);
    *((_QWORD *)Block + 5) = 0LL;
  }
  *((_QWORD *)Block + 6) = 0LL;
  *((_QWORD *)Block + 8) = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)(Block + 4));
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
