/*
 * XREFs of ??1AltEscHotkeyHandler@@MEAA@XZ @ 0x180375E4C
 * Callers:
 *     ??_GAltEscHotkeyHandler@@MEAAPEAXI@Z @ 0x180375F20 (--_GAltEscHotkeyHandler@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180134468 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AltEscHotkeyHandler::~AltEscHotkeyHandler(AltEscHotkeyHandler *this)
{
  const char *v2; // r9
  const char *v3; // r9
  volatile int *v4; // rdx
  HWND v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &AltEscHotkeyHandler::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>>'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>>,IWeakReferenceSource>>'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>>,IWeakReferenceSource>>'};
  *((_QWORD *)this + 6) = &AltEscHotkeyHandler::`vftable'{for `CImpWorkerWndProc'};
  if ( !UnregisterHotKey(*((HWND *)this + 8), 58) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x34,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alteschotkeyhandler.cpp",
      v2);
  if ( !UnregisterHotKey(*((HWND *)this + 8), 59) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x35,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alteschotkeyhandler.cpp",
      v3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 9);
  v5 = (HWND)*((_QWORD *)this + 8);
  if ( v5 )
    DestroyWindow(v5);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>(
    (__int64)this,
    v4);
}
