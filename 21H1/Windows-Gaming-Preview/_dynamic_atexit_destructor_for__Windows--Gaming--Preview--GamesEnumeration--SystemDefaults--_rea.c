/*
 * XREFs of _dynamic_atexit_destructor_for__Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_readyEvent__ @ 0x1800477D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180012208 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

int dynamic_atexit_destructor_for__Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_readyEvent__()
{
  void **v0; // rax
  signed int LastError; // eax
  unsigned __int64 v2; // rcx

  v0 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::EventTraits>::`vftable';
  Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_readyEvent = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::EventTraits>::`vftable';
  if ( hEvent )
  {
    LODWORD(v0) = CloseHandle(hEvent);
    if ( !(_DWORD)v0 )
    {
      LastError = GetLastError();
      v2 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v2 = (unsigned int)LastError;
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v2);
      __debugbreak();
    }
    hEvent = 0LL;
  }
  return (int)v0;
}
