/*
 * XREFs of ??1InputConfigContextProvider@@MEAA@XZ @ 0x180147274
 * Callers:
 *     ??_EInputConfigContextProvider@@MEAAPEAXI@Z @ 0x180147394 (--_EInputConfigContextProvider@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?ClearConfigs@InputConfigContextProvider@@IEAAXAEAV?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@@Z @ 0x180035F98 (-ClearConfigs@InputConfigContextProvider@@IEAAXAEAV-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@U.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036A64 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180036A9C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800375F0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall InputConfigContextProvider::~InputConfigContextProvider(InputConfigContextProvider *this)
{
  char *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned __int64 v5; // r8

  *(_QWORD *)this = &InputConfigContextProvider::`vftable'{for `ISystemContextProvider'};
  v2 = (char *)this + 232;
  *((_QWORD *)this + 1) = &InputConfigContextProvider::`vftable'{for `RefCountedObject'};
  InputConfigContextProvider::ClearConfigs((__int64)this, (InputConfigContextProvider *)((char *)this + 232));
  InputConfigContextProvider::ClearConfigs(v3, (InputConfigContextProvider *)((char *)this + 256));
  if ( *((_QWORD *)this + 32) )
  {
    std::_Deallocate<16,0>(
      *((void **)this + 32),
      (const struct std::nothrow_t *)(24 * ((*((_QWORD *)this + 34) - *((_QWORD *)this + 32)) / 24LL)));
    *((_QWORD *)this + 32) = 0LL;
    *((_QWORD *)this + 33) = 0LL;
    *((_QWORD *)this + 34) = 0LL;
  }
  if ( *(_QWORD *)v2 )
  {
    std::_Deallocate<16,0>(
      *(void **)v2,
      (const struct std::nothrow_t *)(24 * ((*((_QWORD *)v2 + 2) - *(_QWORD *)v2) / 24LL)));
    *(_QWORD *)v2 = 0LL;
    *((_QWORD *)v2 + 1) = 0LL;
    *((_QWORD *)v2 + 2) = 0LL;
  }
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)this + 160, v4);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 13,
    0LL,
    v5);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 11);
  SystemContextProvider::~SystemContextProvider(this);
}
