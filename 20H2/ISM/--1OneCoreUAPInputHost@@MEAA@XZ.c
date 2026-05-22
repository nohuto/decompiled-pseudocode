/*
 * XREFs of ??1OneCoreUAPInputHost@@MEAA@XZ @ 0x180064250
 * Callers:
 *     ??_GOneCoreUAPInputHost@@MEAAPEAXI@Z @ 0x1800647DC (--_GOneCoreUAPInputHost@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UInputProvider@@@std@@@std@@YAXPEAUInputProvider@@0AEAV?$allocator@UInputProvider@@@0@@Z @ 0x180028B54 (--$_Destroy_range@V-$allocator@UInputProvider@@@std@@@std@@YAXPEAUInputProvider@@0AEAV-$allocato.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037660 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall OneCoreUAPInputHost::~OneCoreUAPInputHost(OneCoreUAPInputHost *this)
{
  void *v2; // rdi
  MPCManager *v3; // rcx
  __int64 v4; // rcx
  REGHANDLE v5; // rcx
  __int64 v6; // rcx
  void *v7; // rdi
  __int64 v8; // rcx

  *(_QWORD *)this = &OneCoreUAPInputHost::`vftable'{for `ISystemInputHost'};
  *((_QWORD *)this + 1) = &OneCoreUAPInputHost::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &OneCoreUAPInputHost::`vftable'{for `RefCountedObject'};
  if ( *((_BYTE *)this + 80) )
  {
    v2 = (void *)*((_QWORD *)this + 7);
    if ( v2 )
    {
      std::_Destroy_range<std::allocator<InputProvider>>(*((__int64 **)this + 7), *((__int64 **)this + 8));
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)(24 * ((*((_QWORD *)this + 9) - (_QWORD)v2) / 24LL)));
      *((_QWORD *)this + 7) = 0LL;
      *((_QWORD *)this + 8) = 0LL;
      *((_QWORD *)this + 9) = 0LL;
    }
    *((_BYTE *)this + 80) = 0;
  }
  MPCGestureHandlerManager::s_instance = 0LL;
  MPCGamepadInputHelper::s_instance = 0LL;
  MPCConstantManager::s_instance = 0LL;
  v3 = MPCManager::s_instance;
  if ( MPCManager::s_instance )
  {
    MPCManager::s_instance = 0LL;
    (**((void (__fastcall ***)(__int64))v3 + 2))((__int64)v3 + 16);
  }
  MPCHolographicInputManager::s_instance = 0LL;
  MPC3DStateHelper::s_instance = 0LL;
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 5);
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  OneCoreUAPInputHost::s_pInputHost = 0LL;
  v5 = RegHandle;
  dword_1802053F0 = 0;
  RegHandle = 0LL;
  EventUnregister(v5);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 12);
  v6 = *((_QWORD *)this + 11);
  if ( v6 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( *((_BYTE *)this + 80) )
  {
    v7 = (void *)*((_QWORD *)this + 7);
    if ( v7 )
    {
      std::_Destroy_range<std::allocator<InputProvider>>(*((__int64 **)this + 7), *((__int64 **)this + 8));
      std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)(24 * ((*((_QWORD *)this + 9) - (_QWORD)v7) / 24LL)));
      *((_QWORD *)this + 7) = 0LL;
      *((_QWORD *)this + 8) = 0LL;
      *((_QWORD *)this + 9) = 0LL;
    }
  }
  v8 = *((_QWORD *)this + 6);
  if ( v8 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 5);
  if ( *((int *)this + 8) >= 0 )
    RoUninitialize();
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
