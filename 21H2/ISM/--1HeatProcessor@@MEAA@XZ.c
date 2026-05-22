/*
 * XREFs of ??1HeatProcessor@@MEAA@XZ @ 0x1801895D8
 * Callers:
 *     ??_EHeatProcessor@@MEAAPEAXI@Z @ 0x18018967C (--_EHeatProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall HeatProcessor::~HeatProcessor(HeatProcessor *this)
{
  HMODULE v2; // rcx

  *(_QWORD *)this = &HeatProcessor::`vftable';
  *((_QWORD *)this + 1) = &HeatProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 2) = &HeatProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &HeatProcessor::`vftable'{for `RefCountedObject'};
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 11);
  v2 = (HMODULE)*((_QWORD *)this + 10);
  if ( v2 )
  {
    FreeLibrary(v2);
    *((_QWORD *)this + 10) = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 11);
  NonPointerProcessor::~NonPointerProcessor((HeatProcessor *)((char *)this + 8));
}
